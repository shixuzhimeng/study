// //strerror函数
// #include <stdio.h>
// #include <string.h>
// #include <errno.h>//必须包含
// //erron -- c语言中设置的一个全局的错误码存放的变量
// int main()
// {
//     FILE* pf = fopen("stringfunction.c","r");//r---以读的形式
//     if(pf == NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     else
//     {
//         //
//     }
//     printf("%d",123546);
//     return 0;
// }


// 字符分类函数
// iscntrl  -- 任何控制字符
// isspace  -- 空白字符：空格  换页'\f' 换行'\n'  回车'\r'  制表符'\t' 垂直制表符'\v'
// 如果是返回非零值， 如果不是返回0；
// isdigit  -- 十进制数字0 - 9
// isxdigit -- 十六进制数字，包括所有十进制数字，小写字母a - f，大写字母A -F
// islower --  小写字母a-z
// isupper  -- 大写字母A -Z
// isalpha  -- 字母a-z或A-Z
// isalnum  --字母或数字
// ispunct  -- 标点符号，不属于任何数字或者字母的图形字符（可打印）
// isgraph   -- 任何图形字符
// isprint  -- 任何可打印字符 ，包括图形字符和空白字符
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int a = isspace(' ');
//     int b = isspace('c');
//     printf("%d %d" , a , b);
//     return 0;
// }

//memcpy函数
//void * memcpy(void * destination , const void * source , size_t num)
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr1[] = { 0 , 1 , 2 , 3 , 4};
//     int arr2[100] = {0};
//     memcpy(arr2 , arr1 , 20);
//     float arr3[] = {1.0 , 2.0 , 3.0 , 4.0 , 5.0};
//     float arr4[100] = {0};
//     memcpy(arr4 , arr3 , 20);
//     return 0;
// }

// void* my_memcpy(void* dest , const void* src , size_t num)
// {
// 	assert(dest && src);
// 	void* ret = dest;
// 	while(num--)
// 	{
// 		*(char *)dest = *(char *)src;
// 		dest = (char*)dest +1;
// 		src = (char*)src + 1;
		
// 	}
// 	return ret;
// }
// int main()
// {
// 	int arr1[] = {1 , 2 , 3 , 4 , 5};
// 	int arr2[10] = {0};
// 	my_memcpy(arr2 , arr1 , 20)；
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src_str[] = "Hello  Linux";
// 	char dest_str[100] = {0};
// 	memmove(dest_str , src_str , strlen(src_str)+1);
// 	printf("%s\n",dest_str);
// 	return 0;
// }




// #include <stdio.h>
// #include <assert.h>
// void* my_memmove(void* dest,const void* src , size_t num)
// {
// 	assert(dest && src);
// 	void* ret = dest;
// 	if(dest < src)
// 	{
// 		//前->后
// 		while(num--)
// 		{
// 			*(char*)dest = *(char*)src;
// 			dest = (char*)dest + 1;
// 			src = (char*)src  + 1;
// 		}
// 	}
// 	else
// 	{
// 		//后->前
// 		while(num--)
// 		{
// 			*((char*)dest + num) = *((char*)src+num);
// 		}
// 	}
// 	return ret;
// }
// int main()
// {
// 	int arr1[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
// 	my_memmove(arr1 + 2 , arr1 , 20);
// 	for(int i = 0;i<10;i++)
// 	{
// 		printf("%d",arr1[i]);
// 	}
// 	return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "Hello linux";
	memset(arr , 'x' , 5);
	memset(arr+6 , 'x' , 2);
	printf("%s\n",arr);
	return 0;
}