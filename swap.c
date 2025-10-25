// #include <stdio.h>

// void swap(int* a, int* b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// int main()
// {
//     int a = 100;
//     int b = 200;
//     printf("%d %d\n", a, b);

//     // copy
//     swap(&a, &b);

//     printf("%d %d\n", a, b);

//     return 0;
// }

//计数排序
#include <stdio.h>

int a[100] = { 0 };

int main()
{
    int arr1[] = { 6, 1, 2, 1, 9, 1, 3, 2, 6, 2 };
    int arr2[] = { 4, 2, 2, 1, 6, 2 };
    for(int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        a[arr1[i]]++;
    }
    for(int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        a[arr2[i]]++;
    }


    for(int i = 0; i < 100; i++)
    {
        if(a[i] != 0)
            printf("%d ", i);
    }

    return 0;
}