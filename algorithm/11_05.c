//浮点数的存储
// #include <stdio.h>
// int main()
// {
//     int n = 9;
//     float* pFloat = (float*)&n;
//     printf("n的值为：%d\n",n);
//     printf("pFloat的值为：%f\n",*pFloat);
//     *pFloat = 9.0;
//     printf("%d\n",n);
//     printf("%f\n",*pFloat);
//     return 0;
// }





#include <stdio.h>
#define money 10.00
#define extre_time(x) x*1.5
#define tax 
int main()
{
    int x;
    scanf("%d",&x);
    int total_money;
    if(x<40)
    {
        total_money = money*x;

    }
    else
    {
        
    }
}