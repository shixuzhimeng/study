// #include <stdio.h>





// int main()
// {
//     int n = 0;
//     scanf("%d\n",&n);
//     char arr[3] = {0};
//     for(int i = 0;i<n - 1;i++)
//     {
//         scanf("%c\n",&arr[i]);
//     }
//     scanf("%c", &arr[n - 1]);

//     for(int i = 0; i < n; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
//     if(n == 1)
//     {
//         printf("NO\n");
//     }
//     if(n == 2)
//     {
//         if(arr[0] == 'R' || arr[0] == 'G')
//         {
//             if(arr[0] == 'R')
//             {
//                 if(arr[1] == 'G')
//                 printf("Yes\n");
//             }
//             else
//             {
//                 if(arr[1] == 'R')
//                 printf("Yes\n");
//             }

//         }
//         else
//         printf("NO\n");
//     }
//     else
//     {
//         if(arr[0] == 'R' || arr[0] == 'G')
//         {
//             if(arr[0] == 'R')
//             {
//                 for(int j = 1;j<n;j++)
//                 {
//                     if(arr[j] == 'R' || arr[j] == 'G')
//                     {
//                         if(arr[j] == 'G')
//                         {
//                             printf("Yes\n");
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }


#include <stdio.h>

int g = 0;
int r = 0;

int main()
{
    int n = 0;
    scanf("%d\n",&n);
    char arr[3] = {0};
    for(int i = 0;i<n - 1;i++)
    {
        scanf("%c\n",&arr[i]);
    }
    scanf("%c", &arr[n - 1]);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 'R' || arr[i] != 'G')
        {
            printf("NO\n");
            return 0;
        }
        else if(arr[i] == 'R')
        {
            r = 1;
        }
        else if(arr[i] == 'G')
        {
            g = 1;
        }
    }
    if(r == 1 && g == 1)
    {
        printf("YES\n");
    }

    return 0;
}