// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *p = (int *)malloc(40);
//     if(NULL == p)
//     {
//         return 1;
//     }
//     *p = 20;
//     free(p);
//     p = NULL;
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <errno.h>
// int main()
// {
// 	int *p = (int *)malloc(40);
// 	if(p == NULL)
// 	{
// 		printf("%s\n",strerror(errno));
// 		return 1;
// 	}
// 	int i = 1;
// 	for(i = 0 ; i <= 10; i++)
// 	{
// 		p[i] = i;
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int *p = (int *)malloc(40);
// 	if(NULL == p)
// 	{
// 		return 1;
// 	}
// 	int i = 0;
// 	for(i  = 0; i < 5; i++)
// 	{
// 		*p = i;
// 		p++;
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int *p = (int *) malloc(40);
// 	free(p);
// 	p = NULL;
// 	free(p);
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void test()
// {
// 	int *p = (int *)malloc(40);
// 	int flag = 0;
// 	scanf("%d",&flag);
// 	if(flag = 5)
// 	{
// 		return ;
// 	}
// 	free(p);
// 	p = NULL;
// }
// int main()
// {
// 	test();
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void GetMemory(char** p)
// {
// 	*p = (char *)malloc(100);
// }

// void Test(void)
// {
// 	char* str = NULL;
// 	GetMemory(&str);
// 	strcpy(str,"hello world");
// 	printf(str);
// 	free(str);
// 	str = NULL;
// }
// int main()
// {
// 	Test();
// 	return 0;
// }



// #include <stdio.h>
// int main()
// {
// 	long i;
// 	long a[16];
	
// 	for(i = 0; i <= 17; i++)
// 	{
// 		a[i] = 0;
// 		printf("%ld",i);
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// char* GetMemory(void)
// {
// 	char *p = "Hello World";
// 	printf("%p\n", p);
// 	return p;
// }
// void Test(void)
// {
// 	char *str = NULL;
// 	str = GetMemory();
// 	printf("%p\n", str);

// 	printf(NULL);
// 	printf(str);
// }
// int main()
// {
// 	Test();
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int* test()
// {
// 	int a = 10;
// 	return &a;
// }
// int main()
// {
// 	int *p = test();
// 	printf("haha\n");
// 	printf("%d\n",*p);
// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}

void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str,"hello");
	printf(str);
}

int main()
{
	Test();
	return 0;
}

