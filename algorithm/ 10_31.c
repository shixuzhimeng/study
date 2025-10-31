#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%d",&x);
    int arr[100000] = {0};
    int i = 0;
    while(x>0)
    {
        arr[i] = x%2;
        x /= 2;
        i++;
    }
}