#include <stdio.h>
int main()
{
    int arr[100000] = {0};
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    int max = 0;
    int min = 100;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<min)
        min = arr[i];
        if(arr[i]>max)
        max = arr[i];
        sum  += arr[i];
    }
    double score = (double)(sum - max - min )/(n-2);
    printf("%.2lf",score);
    return 0;
}