// #include <stdio.h>
// long long fib(size_t n)
// {
//     if(n < 3)
//     {
//         return 1;
//     }
//     return fib(n-1) - fib(n-2);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n == 0)
//     {
//         return 1;
//     }
//     return fib(n-1) - fib(n-2);
// }

// #include <stdio.h>
// long long fac(size_t n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     return fac(n-1)*n;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     return fac(n);



// typedef int SLDataType;
// #define N 1000
// //静态顺序表（开多了浪费，开少了不够用）
// struct SeqList
// {
//     SLDataType a[N];
//     int size;
// };

typedef int SLDataType;
//动态顺序表
struct SeqList
{
    SLDataType* a;
    int size;         //有效数据个数
    int capacity;     //空间容量
};


void SeqInit()