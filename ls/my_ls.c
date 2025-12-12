#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <sys/types.h>
#include <getopt.h>
#include <unistd.h>

#define COLOR_RESET "\033[0m"
#define COLOR_DIR "\033[1;34m"
#define COLOR_EXEC "\033[1;32m"
#define COLOR_LINK "\033[1;36m"
#define COLOR_DEFAULT "\033[0m"

typedef struct
{
    char* name;
    const char *color;
    ino_t inode;
    blkcnt_t blocks;
    struct stat stat; 
}File;

typedef struct
{
    int a_flag;
    int l_flag;
    int t_flag;
    int r_flag;
    int i_flag;
    int s_flag;
    int R_flag;
}Choose;

Choose choose;
int max_name_len = 0;

const char *get_file_color(const char *path) 
{
    struct stat file_stat;
    if(stat(path, &file_stat) == -1)
    {
        return COLOR_DEFAULT;
    }
    if(S_ISDIR(file_stat.st_mode))
    {
        return COLOR_DIR;
    }
    else if(S_ISLNK(file_stat.st_mode))
    {
        return COLOR_LINK;
    }
    else if(S_IXUSR & file_stat.st_mode)
    {
        return COLOR_EXEC;
    }
    else
    {
        return COLOR_DEFAULT;
    }
}

void get_permission_str(mode_t mode, char perm_str[11])
{
    perm_str[0] = S_ISDIR(mode) ? 'd' : S_ISLNK(mode) ? 'l' : '-';
    perm_str[1] = (mode & S_IRUSR) ? 'r' : '-';
    perm_str[2] = (mode & S_IWUSR) ? 'w' : '-';
    perm_str[3] = (mode & S_IXUSR) ? 'x' : '-';
    perm_str[4] = (mode & S_IRGRP) ? 'r' : '-';
    perm_str[5] = (mode & S_IWGRP) ? 'w' : '-';
    perm_str[6] = (mode & S_IXGRP) ? 'x' : '-';
    perm_str[7] = (mode & S_IROTH) ? 'r' : '-';
    perm_str[8] = (mode & S_IWOTH) ? 'w' : '-';
    perm_str[9] = (mode & S_IXOTH) ? 'x' : '-';
    perm_str[10] = '\0';
}

const char* get_user_name(uid_t uid)
{
    struct passwd* pwd = getpwuid(uid);
    if(pwd != NULL)
    {
        return pwd->pw_name;
    }
    static char uid_str[20];
    snprintf(uid_str, sizeof(uid_str), "%u", uid);
    return uid_str;
}

const char* get_group_name(gid_t gid)
{
    struct group* grp = getgrgid(gid);
    if(grp != NULL)
    {
        return grp->gr_name;
    }
    static char gid_str[20];
    snprintf(gid_str, sizeof(gid_str), "%u", gid);
    return gid_str;
}

int cmp_name(const void* a,const void* b)
{
    File* f1 = (File*)a;
    File* f2 = (File*)b;

    return strcmp(f1->name , f2->name);
}

int cmp_time(const void* a,const void* b)
{
    File* f1 = (File*)a;
    File* f2 = (File*)b;
    
    if (f1->stat.st_mtime > f2->stat.st_mtime)
        return -1;
    if (f1->stat.st_mtime < f2->stat.st_mtime)
        return 1;
    return 0;
}

void reverse(File* files, int count)
{
    for(int i = 0; i < count / 2; i++)
    {
        File temp = files[i];
        files[i] = files[count-1-i];
        files[count-1-i] = temp;
    }
}

void free_file(File* files, int count)
{
    for(int i = 0; i < count; i++)
    {
        free(files[i].name);
    }
    free(files);
}

void process_dir(const char *dir_path, int is_recursive, int is_first);

void print(File* files, int count , const char* dir_path)
{
    if(choose.l_flag && count > 0)
    {
        blkcnt_t total_blocks = 0;
        for(int i = 0; i < count ; i++)
        {
            total_blocks += files[i].blocks;
        }
        printf("total %ld\n", total_blocks / 2);
    }
    
    int printed = 0;
    int prefix_len = 0;
    
    if(choose.i_flag) prefix_len += 8;
    if(choose.s_flag) prefix_len += 5;
    
    for(int i = 0; i < count; i++)
    {
        File* fi = &files[i];
        
        if(choose.i_flag)
        {
            printf("%8lu ", fi->inode);
        }
        
        if(choose.s_flag)
        {
            printf("%4ld ", fi->blocks / 2);
        }
        
        if(choose.l_flag)
        {
            char perm_str[20];
            get_permission_str(fi->stat.st_mode,perm_str);
            const char* user = get_user_name(fi->stat.st_uid);
            const char* group = get_group_name(fi->stat.st_gid);
            char time_str[20];
            time_t now = time(NULL);
            
            if(now - fi->stat.st_mtime > 180 * 24 * 3600)
            {
                strftime(time_str, sizeof(time_str), "%b %d  %Y", localtime(&fi->stat.st_mtime));
            }
            else
            {
                strftime(time_str, sizeof(time_str), "%b %d %H:%M", localtime(&fi->stat.st_mtime));
            }
            
            printf("%s %ld %-8s %-8s %6ld %s ",
                   perm_str, fi->stat.st_nlink,
                   user, group,
                   fi->stat.st_size, time_str);
            
            printf("%s%s%s\n", fi->color, fi->name, COLOR_RESET);
            continue;
        }
        
        printf("%s%-*s%s", fi->color, max_name_len + 2 - prefix_len, fi->name, COLOR_RESET);
        printed++;
        
        if(printed % 5 == 0 || i == count - 1)
        {
            printf("\n");
            printed = 0;
        }
        else
        {
            printf("  ");
        }
    }
}

void process_dir(const char *dir_path, int is_recursive, int is_first)
{
    DIR *dir;
    struct dirent *entry;
    struct stat statbuf;
    
    if((dir = opendir(dir_path)) == NULL)
    {
        perror("opendir");
        return;
    }

    File *files = NULL;
    int count = 0;
    max_name_len = 0;
    
    while((entry = readdir(dir)) != NULL)
    {
        if(!choose.a_flag && entry->d_name[0] == '.')
        {
            continue;
        }
        
        char full_path[1024];
        snprintf(full_path, sizeof(full_path), "%s/%s", dir_path, entry->d_name);

        if(lstat(full_path, &statbuf) == -1)
        {
            continue;
        }

        File *temp = realloc(files, (count + 1) * sizeof(File));
        if(!temp)
        {
            perror("realloc");
            free_file(files, count);
            closedir(dir);
            return;
        }
        files = temp;

        files[count].name = strdup(entry->d_name);
        if(!files[count].name)
        {
            perror("strdup");
            free_file(files, count);
            closedir(dir);
            return;
        }
        
        files[count].color = get_file_color(full_path);
        files[count].inode = entry->d_ino;
        files[count].blocks = statbuf.st_blocks;
        files[count].stat = statbuf;

        int name_len = strlen(entry->d_name);
        if(name_len > max_name_len)
        {
            max_name_len = name_len;
        }
        
        count++;
    }
    closedir(dir);

    if(choose.t_flag)
    {
        qsort(files, count, sizeof(File), cmp_time);
    }
    else
    {
        qsort(files, count, sizeof(File), cmp_name);
    }

    if(choose.r_flag)
    {
        reverse(files, count);
    }
    
    if(!is_first || count > 0)
    {
        if(!is_first)
        {
            printf("\n%s:\n", dir_path);
        }
        print(files, count, dir_path);
    }

    if(is_recursive)
    {
        for(int i = 0; i < count; i++)
        {
            if(S_ISDIR(files[i].stat.st_mode) && 
               strcmp(files[i].name, ".") != 0 && 
               strcmp(files[i].name, "..") != 0)
            {
                char subdir_path[1024];
                snprintf(subdir_path, sizeof(subdir_path), "%s/%s", dir_path, files[i].name);
                process_dir(subdir_path, 1, 0);
            }
        }
    }
    
    free_file(files, count);
}



void parse_args(int argc, char* argv[], char** target_dir)
{
    memset(&choose, 0, sizeof(choose));
    int opt;
    while((opt = getopt(argc, argv, "altrisR")) != -1)
    {
        switch(opt) 
        {
            case 'a': 
                choose.a_flag = 1;
                break;
            case 'l': 
                choose.l_flag = 1;
                break;
            case 't': 
                choose.t_flag = 1;
                break;
            case 'r': 
                choose.r_flag = 1;
                break;
            case 'i': 
                choose.i_flag = 1;
                break;
            case 's': 
                choose.s_flag = 1;
                break;
            case 'R': 
                choose.R_flag = 1;
                break;
            default:
                printf("ERROR\n");
                exit(1);
        }
    }
    *target_dir = (optind < argc) ? argv[optind] : (char*)"./";
}

int main(int argc, char* argv[])
{
    char *target_dir = NULL;
    
    parse_args(argc, argv, &target_dir);

    process_dir(target_dir, choose.R_flag, 1);
    
    return 0;
}