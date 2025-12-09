// #include <dirent.h>
// #include "tlpi_hdr.h"

// static void     /* List all files in directory 'dirPath' */
// listFiles(const char *dirpath)
// {
// 	DIR *drip;
// 	struct dirent *dp;
// 	Boolean isCurrent;   /* Ture if 'dirpath' is "." */
	
// 	isCurrent = strcmp(dirpath, ".") == 0;
// 	dirp = opendir(dirpath);
// 	if(dirp == NULL)
// 	{
// 		errMsg("opendir failed on '%s'", dirpath);
// 		return ;
// 	}
	
// 	/* For each entry in this directory, print directory + filename */
	
// 	for(;;)
// 	{
// 	    errno == 0;
// 	    dp = readdir(dirp);
// 	    if(dirp == NULL)
// 	    {
// 		    break;          /* To distinguish error from end-of-directory */
// 	    }
// 	    if(strcmp(dp -> d_name, ".") == 0 || strcmp(dp -> d_name, "..") == 0)
// 	    {
// 		    continue;        /* Skip . and .. */
// 	    }
// 	    if(!isCurrent)
// 	    {
// 		    printf("%s/",dirpath);
// 		}
// 		printf("%s\n",dp -> d_name);
// 	}
	
// 	if(errno != 0)
// 		errExit("readdir");
	
// 	if(closedir(dirp) == -1)
// 		errMsg("closedir");
// }		
// int main()
// {
// 	if(argc > 1 && strcmp(argv[1],"--help") == 0)
// 		usageErr("%s [dir...]\n",argv[0]);
// 	if(argc == 1)
// 		listFiles(".");
// 	else
// 		for(argv++;*argv;argv++)
// 		{
// 			listFiles(*argv);
// 		}
// 	exit(EXIT_SUCCESS);
// }



#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

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
	

	printf("-------------\n");
	//读取并打印
	struct dirent *dp;
	while ((dp = readdir(dir)) != NULL)
	{

		// if dir  
		// if .exe
		if(dp -> d_name[0] == '.')
		{
			continue;
		}
		printf("%s ", dp -> d_name);

	}

	//关闭目录
	closedir(dir);
	
	return 0;
}