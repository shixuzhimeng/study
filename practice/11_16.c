// #include <stdio.h>

// int main()
// {
//     int n;
//     int sum = 0,count = 0;
//     scanf("%d",&n);
//     int arr[n];
//     int arr2[20010] = { 0 }; // 相加后
//     int arr3[20010] = { 0 }; // 原来
//     for(int i = 0; i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         arr3[arr[i]] = 1;
//     }
//     for(int i = 0;i<n;i++)
//     {
//         for(int j = i+1;j<n;j++)
//         {
//             sum = arr[i] + arr[j];
//             arr2[sum] = 1;
//         }
//     }
//     for(int i = 0; i <= 20010;i++)
//     {
//         if(arr2[i] == 1 && arr3[i] == 1)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <ctype.h>

char Tolower(char a)
{
    if(a >= 'A' && a <= 'Z')
    {
        return 'a' + ( a - 'A');
    }
}

int main()
{
    char arr1[15] = { 0 };
    fgets(arr1, sizeof(arr1), stdin);
    char arr2[1000010] = { 0 };
    arr1[strlen(arr1) - 1] = '\0';

    fgets(arr2 , sizeof(arr2) , stdin);
    arr2[strlen(arr2) - 1] = '\0';

    printf("%s\n" ,arr1);
    printf("%s\n" ,arr2);

    int c = 0;
    int count = 0;

    for (int i = 0; i < strlen(arr1); i++)
    { 
        arr1[i] = Tolower(arr1[i]);
    }
    for (int i = 0; i < strlen(arr2); i++) 
    {
        arr2[i] = Tolower(arr2[i]);
    }

    int a = strlen(arr1);
    int b = strlen(arr2);

    int pos = -1;

    for(int i = 0 ;i < b; i++)
    {
        if(arr1[0] == arr2[i] && (i == 0 || arr2[i - 1] == ' ') && ((i + a == b) || (i + a < b && arr2[i + a] == ' ')))
        {
            c = strncmp(arr1 , arr2 + i, a);
            if(c == 0)
            {
                count++;
                if(pos == -1)
                {
                    pos = i;
                }
            }
        }
    }

    if(pos == -1)
    {
        printf("-1\n");
        return 0;
    }

    printf("%d ", count);
    printf("%d", pos);
    return 0;
}