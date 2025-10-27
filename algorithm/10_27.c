// int singleNumber(int* nums, int numsSize) {
//     int a = 0;
//     for(int i = 0;i < numsSize;i++)
//     {
//         a ^= nums[i];
//     }
//     return a;
// }
//二分查找
// #include <stdio.h>
// int binary_search(int arr[],int k,int sz)
// {
//     int left = 0;
//     int right = sz-1;
//     while(left <= right)
//     {
//         int mid = left + (right - left)/2;
//         if(arr[mid]<k)
//             left = mid +1;
//         else if(arr[mid]>k)
//             right = mid - 1;
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[]= {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int ret = binary_search(arr,k,sz);
//     if(ret == -1)
//     {
//         printf("找不到\n");
//     }
//     else 
//     {
//         printf("找到了\n");
//     }
//     return 0;
// }
//
//bool ------ ture /  false
//导入静态库
//#pragma comment(lib ,"add.h")
//防止头文件被重复包含
//#pragma once


//函数递归
// #include <stdio.h>
// void print(unsigned int n)
// {
//     if(n>9)
//     {
//         print(n/10);
//     }
//     printf("%d ",n%10);

// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u",&num);
//     print(num);
// }
//模拟式现strlen
// #include <stdio.h>
// int my_strlen(char* str)//参数部分写成指针
// {
//     int count = 0;//计数，临时变量
//     while(*str != '\0')
//     {
//         count++;
//         str++;//寻找下一个字符
//     }
//     return count ;
// }
// int main()
// {
//     char arr[] ={'a' , 'b' , 'c','\0'};
//     int len = my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }
//改版，不使用临时变量，即递归求解
// #include <stdio.h>

// int my_strlen(char* str)
// {
//     if(*str != '\0')
//     {
//         return 1 +  my_strlen(str + 1);

//     }
//     else 
//         return 0;
// }
// int main()
// {
//     char arr[] ={'a' , 'b' , 'c','\0'};
//     int len = my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }