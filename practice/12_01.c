// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n ;
//     char s[1000];
//     scanf("%d %s",&n, s);
//     char digits[10][5][4] = {

//     {"XXX", "X.X", "X.X", "X.X", "XXX"}, // 0
//     {"..X", "..X", "..X", "..X", "..X"}, // 1
//     {"X.X", "..X", "XXX", "X..", "XXX"}, // 2
//     {"XXX", "..X", "XXX", "..X", "XXX"}, // 3
//     {"X.X", "X.X", "XXX", "..X", "..X"}, // 4
//     {"X.X", "X..", "XXX", "..X", "XXX"}, // 5
//     {"XXX", "X..", "XXX", "X.X", "XXX"}, // 6
//     {"XXX", "..X", "..X", "..X", "..X"}, // 7
//     {"XXX", "X.X", "XXX", "X.X", "XXX"}, // 8
//     {"XXX", "X.X", "XXX", "..X", "XXX"}  // 9}
// };
// for(int row = 0; row < 5; row++)
// {
//     char line[400] = { 0 };
//     int pos = 0;
//     for(int i = 0; i < n;i++)
//     {
//         int num =  s[i] - '0';
//         strncpy(line + pos, digits[num][row],3);
//         pos += 3;
//         if(i != n-1)
//         {
//             line[pos ] = '.';
//             pos++;
//         }
//     }
//     printf("%s",line);
// }
// return 0;
// }

// #include <stdio.h>
// void huoba(int cx, int cy, int str[30][30],int m)
// {
//     for(int i = 3; i <= 2 + m; i++)
//     {
//         cx += 2,
//         cy += 2;
//         for(int i = cx; i < cx + 3;i++)
//         {
//             str[i][cy] = 1;
//         }
//         for(int i = cy;i < cy + 3; i++)
//         {
//             str[cx][i] = 1;
//         }
//         str[cx + 1][cy + 1] = 1,
//         str[cx - 1][cy + 1] = 1;
//         str[cx - 1][cy - 1] = 1,
//         str[cx + 1][cy - 1] = 1;
//     }
// }
// void stion(int cx, int cy, int str[30][30], int k)
// {
//     for(int i = 3; i <= 2+k; i++)
//     {
//         cx += 2,
//         cy +=2;
//         for(int i = cx - 2; i <= cx + 2; i++)
//         {
//             for(int j = cy - 2; j < cy - 2;j++)
//             {
//                 str[i][j] = 1;
//             }
//         }
//     }
// }

// int main()
// {
//     int n,m,k;
//     scanf("%d %d %d",&n,&m,&k);
//     int cx, cy;
//     scanf("%d %d",&cx, &cy);
//     int str[30][30] = {0};
//     int count = 0;
//     huoba(cx,cy,str[30][30],m);
//     stion(cx, cy,str[30][30], k);
//     for(int i = 3; i <= 2 + n; i++)
//     {
//         for(int j = 3;j <= n+2;j++)
//         {
//             if(str[i][j] == 0)
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// } 

// #include <stdio.h>
// #include <stddef.h>

// struct S
// {
//     char c1;
//     int i;
//     char c2;
// };


// int main()
// {
//     struct S s = { 0 };
//     printf("%d" ,offsetof(struct S,c1));
// }


// #include <stdio.h>

// char arr[1000000];

// int main()
// {
//     int T;
//     scanf("%d",&T);
//     int n,m;
//     int count = 0;
//     for(int i = 0;i < T;i++)
//     {
//         int count = 0;
//         int n,m;
//         scanf("%d %d",&n,&m);
//         scanf("%s",arr);
//         printf("%s",arr);
//         for(int i = 0; i < n; i++)
//         {
//             if(arr[i] == '1')
//             {
//                 count++;
//                 for(int j = i; j < i+m;j++)
//                 {
//                     if(j >= n)
//                         break;
//                     arr[j] = '0';
//                 }
                
//                 i += m - 1;
//             }
//         }
//         printf("%d", count);  
//     }

    

//     return 0;
// }


//#include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int m = 0;
//     m = (n-1)*5+1;
//     if(m%2 == 1)
//     {
//         printf("%d",1);
//     }
//     else
//     {
//         printf("%d",0);
//     }
//     return 0;                            
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i = 1; i <= n;i++)
//     {
//         if(i%3 == 0)
//         {
//             for(int j = 1; j <= n; j++)
//             {
//                 if(j%2 == 1)
//                 printf("X");
//                 else
//                 printf("O");
//             }
//             printf("\n");
//         }
//         else
//         {
//             for(int j = 1; j <= n; j++)
//             {
//                 if(j%2 == 1)
//                 printf("O");
//                 else
//                 printf("X");
//             }
//             printf("\n");
//         }
//     }
//  return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int m = 0;
//     m = (n-1)*5+1;
//     if(m%2 == 1)
//     {
//         printf("%d",1);
//     }
//     else
//     {
//         printf("%d",0);
//     }
//     return 0;                            
// }



// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long sum = 0;
//     for(int y = 1; y <= n;y++)
//     {
//         int x = n/y;
//         sum += x;
//     }
//     printf("%lld",sum);
//     return 0;

// }

