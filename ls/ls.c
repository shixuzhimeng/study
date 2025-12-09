#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define COLOR_RESET "\033[0m"
#define COLOR_DIR "\033[1;34m"
#define COLOR_EXEC "\033[1;32m"
#define COLOR_LINK "\033[1;36m"
#define COLOR_DEFAULT "\033[0m"

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



int main(int argc, char* argv[])
{
	//确定要遍历的目标目录
	//"."是当前目录的简写
	const char* target_dir = (argc == 1) ? "./" : argv[1];


	//打开目录
	DIR* dir = opendir(target_dir);
	if(NULL == dir)
	{
		perror("opendir failed");
		exit(1);
	}
	

	
	//读取并打印
	struct dirent *dp;
	while ((dp = readdir(dir)) != NULL)
	{
		if(dp -> d_name[0] == '.')
		{
			continue;
		}

		//拼接文件完整路径
		char file_path[1024];
		snprintf(file_path,sizeof(file_path),"%s/%s",target_dir,dp->d_name);

		//获取文件的颜色
		const char* color = get_file_color(file_path);

		//打印
		printf("%s%s%s ",color, dp->d_name,COLOR_RESET);
	}
	printf("\n");

	//关闭目录
	closedir(dir);
	
	return 0;
}