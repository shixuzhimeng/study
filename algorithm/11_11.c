#include <stdio.h>
#include <string.h>
int main()
{
	const char* sep = "@.";
	char email[] = "zhangpengwei@bitejiuyeke.com";
	char cp[30] = {0};
	strcpy(cp , email);
	char* ret = strtok(cp , sep);
	printf("%s\n",ret);
	ret = strtok(NULL , sep);
	printf("%s\n", ret);
	ret = strtok(NULL, sep);
	printf("%s\n",ret);
}
