#include <stdio.h>



//指针数组可以利用为二位数组

int main()
{
    int arr1[] = { 1 , 2 , 3 , 4};
    int arr2[] = { 2 , 3 , 4 , 5};
    int arr3[] = { 3 , 4 , 5 , 6};
    int*parr[3]= {arr1 , arr2 , arr3 };
    for(int i = 0;i<3;i++)
    {
        int j = 0;
        for(j = 0;j<3;j++)
        {
            printf("%d",parr[i][j]);
        }
        printf("\n");
    }
}