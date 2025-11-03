// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr1[4000] = {0};
//     char arr2[4000] = {0};
//     int count = 0; 
//     int num = 0;
//     int a;
//     printf("请输入名\n");
//     scanf("%s",arr1);
//     printf("请输入姓\n");
//     scanf("%s",arr2);
//     printf("%s %s\n",arr1,arr2);
//     for(int i = 0;i<strlen(arr1);i++)
//     {
//         count++;
//         if(count == strlen(arr1))
//         { 
//             if(count>10)
//             a = count-1;
//             if(count>100)
//             a = count-1;
//             for(int j = 0;j<a-1;j++)
//             {
//             printf(" ");
//             }
//         printf("%d",count);
//         }
//     }
//     for(int i = 0;i<strlen(arr2);i++)
//     {
//         num++;
//         if(num == strlen(arr2))
//         {
//             if(num > 10)
//             a = num-1;
//             if(num >100)
//             a = num-1;
//             for(int j = 0;j<a-1;j++)
//             {
//             printf(" ");
//             }
//         printf(" %d",num);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr1[4000] = {0};
//     char arr2[4000] = {0};
//     int count = 0; 
//     int num = 0;
//     printf("请输入名\n");
//     scanf("%s",arr1);
//     printf("请输入姓\n");
//     scanf("%s",arr2);
//     printf("%s %s\n",arr1,arr2);
//     for(int i = 0;i<strlen(arr1);i++)
//     {
//         count++;
//         if(count == strlen(arr1))
//         {
//             printf("%d",count);
//             for(int i = 0;i<count-1;i++)
//             {
//                 printf(" ");
//             }
//         }
//     }
//       for(int i = 0;i<strlen(arr2);i++)
//     {
//         num++;
//         if(num == strlen(arr2))
//         {
//             printf(" %d",num);
//             for(int i = 0;i<num-1;i++)
//             {
//                 printf(" ");
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     printf("请输入天数\n");
//     while(1)
//     {
//         int day;
//         scanf("%d",&day);
//         if(day <= 0)
//         break;
//         else
//         {
//         int week = day / 7;
//         int days = day % 7;
//         printf("%d days are %d weeks, %d days\n",day , week, days);
//         }
//     }
// }

#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int n = a - 'A' + 1;
    for(int i = 0;i< n;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            printf(" ");

        }
        for(char a = 'A';a<='A'+i;a++)
        {
            printf("%c",a);

        }
        for(char a = 'A'+i-1; a>='A';a--)
        {
            printf("%c",a);

        }
    printf("\n");
    }

    return 0;
}