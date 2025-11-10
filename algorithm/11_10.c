// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	if(strlen("abc") - strlen("abcdefg") > 0)
// 	{
// 		printf(">");
// 	}
// }



// #include <stdio.h>
// #include <assert.h>

// //计数器的方法
// size_t my_strlen(const char* str)
// {
//     size_t count = 0;
//     assert(str);
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     size_t n = my_strlen(arr);
//     printf("%u\n",n);
//     return 0;
// }


// //指针-指针的形式
// size_t my_strlen(const char *str)
// {
//     const char *p = str;
//     while(*p != '\0')
//     {
//         p++;
//     }
//     return p - str;
// }
// int main()
// {
//     char arr1[] = "asdfghjkl";
//     printf("%s  %u\n",arr1,my_strlen(arr1));
//     return 0;
// }

// //递归的形式实现
// size_t my_strlen(const char* str)
// {
// 	if(*str != '\0')
// 	 {
// 		 return 1 + my_strlen(str + 1);
// 	 }
// 	 else
// 		 return 0;
// }
// int main()
// {
// 	char arr[] ={'a' , 'b' , 'c','\0'};
// 	size_t len = my_strlen(arr);
// 	printf("%u\n",len);
	
// 	return 0;
// }




// #include <stdio.h>
// #include <assert.h>
// char * my_strcpy(char *dest , const char * src)
// {
// 	assert(dest);
// 	assert(src);
// 	char* ret = dest;
// 	while(*src)
// 	{
// 		*dest++ = *src++;
// 	}
// 	*dest = *src;
	
// 	return ret;
// }
// int main()
// {
// 	char arr1[] = "abcdef";
// 	char arr2[] = { 0 };
// 	my_strcpy(arr2,arr1);
// 	printf("%s\n",arr2);
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char arr1[1000] = "Hello ";
// 	strcat(arr1 , "World");
// 	printf("%s", arr1);
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char name[40] = { 0 };
// 	strcpy(name , "zzq xiaoniao");
//     printf("%s",name);
// 	return 0;
// }




// #include <stdio.h>
// #include <assert.h>
// char* my_strcat(char * dest , const char * src)
// {
// 	char* ret = dest;
// 	assert(dest && src);
// 	while(*dest != '\0')
// 	{
// 		dest++;
// 	}
// 	while(*dest++ = *src++)
// 	{
// 		;
// 	}
// 	return ret;
// }
// int main()
// {
// 	char arr1[100] = "Hello ";
// 	my_strcat(arr1 , "World");
// 	printf("%s",arr1);
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char arr1[20] = "zhangsan";
// 	char arr2[] = "zhangsanfeng";
// 	int ret = strcmp(arr1 , arr2);
// 	if(ret = 0)
// 	{
// 		printf("==");
// 	}
// 	else if(ret < 0)
// 	{
// 		printf("<");
// 	}
// 	else 
// 	{
// 		printf(">");
// 	}
// }



// #include <stdio.h>
// #include <assert.h>
// int my_strcmp(const char * str1 , const char * str2)
// {
// 	assert(str1 && str2);
// 	while(*str1 == *str2)
// 	{
// 		if(*str1 == '\0')
// 		{
// 			return 0;
// 		}
// 		str1++;
// 		str2++;
// 	}
// 	return (*str1 - *str2);	
// }
// int main()
// {
// 	char arr1[] = "abc";
// 	char arr2[] = "abcd";
// 	int ret = my_strcmp(arr1 , arr2);
// 	if(ret < 0)
// 	{
// 		printf("<");
// 	}
// 	else if(ret == 0)
// 	{
// 		printf("==");
// 	}
// 	else
// 	{
// 		printf(">");
// 	}
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// int  main()
// {
// 	char arr1[20] = "abcdef";
// 	char arr2[] = "Hello bit";
// 	strncpy(arr1 , arr2 , 5);
// 	printf("%s\n",arr1);
// 	return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char arr1[110] = "hello ";
// 	char arr2[] = "World";
// 	strncat(arr1 , arr2 , 6);
// 	printf("%s\n",arr1);
// 	return 0;
// }	


// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char emil[] = "zpw@bitejiuyeke.com";
// 	char substr[] = "bitejiuyeke";
// 	char* ret = strstr(emil, substr);
// 	if(NULL == ret)
// 	{
// 		printf("子串不存在\n");
// 	}
// 	else
// 	{
// 		printf("子串存在 %s\n",ret);
// 	}
// 	return 0;
// }

