// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void GetMemory(char** p, int num)
// {
// 	*p = (char *)malloc(num);
// }
// void Test(void)
// {
// 	char* str = NULL;
// 	GetMemory(&str , 100);
// 	strcpy(str, "hello");
// 	printf(str);
// }
// int main()
// {
// 	Test();
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void Test(void)
// {
// 	char* str = malloc(100);
// 	strcpy(str , "hello");
// 	free(str);
// 	if(str == NULL)
// 	{
// 		strcpy(str , "world");
// 		printf(str);
// 	}
// }
// int main()
// {
// 	Test();
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <errno.h>
// int main()
// {
// 	FILE *pf = fopen("11_22.c","r");
// 	if(pf == NULL)
// 	{
// 		printf("%s  ",strerror(errno));
// 		return 1;
// 	}
	
	
// 	fclose(pf);
// 	pf = NULL;
// 	return 0;
// }