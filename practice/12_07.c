// #include <stdio.h>

// struct Student
// {
//     int date;
//     struct Student *Node; 
// }s1,s2,s3;

// int main()
// {
//     s1.Node=&s2.Node;
// }





// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n+10];
//     int c = n;
//     for(int i = 0; i <= n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int j = 0; j <= n; j++)
//     {
//         if(arr[j] == 0)
//         {
//             c--;
//             continue;
           
//         }
//         else if(arr[j] == 1 && c >= 1)
//         {
//             printf("x");
//         }
//         else if(arr[j] == -1&& c >= 1)
//         {
//             printf("-x");
//         }
//         else if(j == n)
//         {
//             printf("%d",arr[j]);
//         }
//         else
//         {
//             printf("%dx",arr[j]);
//         }
        
//         if(c > 1)
//         {
//             printf("^%d",c);
//         }

//         if(arr[j+1] >= 0  && j+1<=n)
//         {
//             printf("+");
//         }
//         c--;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     int a[110];
//     scanf("%d", &n);
//     for(int i = 0; i <= n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int st = 0;

//     for(int i = 0; i <= n; i++)
//     {
//         if(a[i] == 0)
//             continue;
//         // 符号
//         if(st != 0 && a[i] > 0)
//         {
//             printf("+");
//         }
// // 100x^5-x^4+x^3-3x^2+10
//         // 数字
//         if(i == n)
//         {
//             printf("%d", a[i]);
//         }
//         else if(a[i] == -1)
//         {
//             printf("-");
//         }
//         else if(a[i] != 1)
//         {
//             printf("%d", a[i]);
//         }

//         // 字母x
//         if(n - i > 0)  // i == 0   pf == n   pf = n - i
//         {
//             printf("x");
//         }

//         // 平方
//         if(n - i > 1)
//         {
//             printf("^%d", n - i);
//         }

//         st = 1;
//     }

//     return 0;
// }