// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_N 100  

 
// void average(int arr_old[], double arrave[], int n, int *count) {
//     *count = 0;   
//     for (int i = 0; i < n - 2; i++) {
//         for (int j = i + 1; j < n - 1; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 double ave = (arr_old[i] + arr_old[j] + arr_old[k]) / 3.0;  
//                 arrave[*count] = ave;
//                 (*count)++;   
//             }
//         }
//     }
// }


// int same(double arrave[], int k, int arr_new[], int count) {
//     for (int i = 0; i < k; i++) {
//         int num = 0;
//         for (int j = 0; j < count; j++) {
//             if (arr_new[i] == arrave[j]) {
//                 num = 1;
//                 break;
//             }
//         }
//         if (!num) {
//             return 0;  
//         }
//     }
//     return 1;  
// }

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr_old[n];  
//     for (int i = 0; i < n; i++) 
//     {
//         scanf("%d", &arr_old[i]);
//     }

//     double arrave[n * (n - 1) * (n - 2) / 6]; 
//     int count;
//     average(arr_old, arrave, n, &count);  

//     for (int i = 0; i < m; i++) 
//     {
//         int k;
//         scanf("%d", &k); 
//         int arr_new[k];  
//         for (int j = 0; j < k; j++) 
//         {
//             scanf("%d", &arr_new[j]); 
//         }


//         if (same(arrave, k, arr_new, count)) 
//         {
//             printf("Yes\n");
//         } 
//         else 
//         {
//             printf("No\n");
//         }
//     }

//     return 0;
// }




// #include <stdio.h>
// #include <math.h>

// #define EPSILON 1e-6  

// double area(double a, double b, double c) 
// {
//     double s = (a + b + c) / 2; 
//     return sqrt(s * (s - a) * (s - b) * (s - c));
// }

// int main() {
//     double P;
//     scanf("%lf", &P);

//     for (double a = 1.0; a < P; a += 0.01) 
//     {
//         for (double b = 1.0; b < P - a; b += 0.01) 
//         {
//             double c = P - a - b; 

//             if (a + b > c && a + c > b && b + c > a) 
//             {
//                 double area_value = area(a, b, c);
//                 if (fabs(area_value - P) < EPSILON) 
//                 {
//                     printf("YES\n");
//                     printf("%.6lf %.6lf %.6lf\n", a, b, c);
//                     return 0;
//                 }
//             }
//         }
//     }

//     printf("NO\n");
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_N 1000  // 假设矩阵的最大大小为 1000x1000

// // 定义四个方向：上、下、左、右
// int directions[4][2] = {
//     {-1, 0}, // 上
//     {1, 0},  // 下
//     {0, -1}, // 左
//     {0, 1}   // 右
// };

// // 深度优先搜索（DFS）
// int dfs(char matrix[MAX_N][MAX_N], int visited[MAX_N][MAX_N], int n, int m, int x, int y) {
//     int stack[MAX_N * MAX_N][2];  // 用来模拟递归的栈
//     int top = -1;  // 栈顶指针
//     stack[++top][0] = x;
//     stack[top][1] = y;
//     visited[x][y] = 1;
    
//     int count = 0;

//     while (top >= 0) {
//         int cx = stack[top][0];
//         int cy = stack[top][1];
//         top--;  // 弹出栈

//         count++;

//         // 扩展到四个方向
//         for (int i = 0; i < 4; i++) {
//             int nx = cx + directions[i][0];
//             int ny = cy + directions[i][1];
//             if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && matrix[nx][ny] == 'N') {
//                 stack[++top][0] = nx;
//                 stack[top][1] = ny;
//                 visited[nx][ny] = 1;
//             }
//         }
//     }

//     return count;
// }

// int max_influence(char matrix[MAX_N][MAX_N], int n, int m) {
//     int visited[MAX_N][MAX_N] = {0};  // 记录是否已访问
//     int max_count = 0;

//     // 遍历矩阵，找到每一个未被访问过的 'N'
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 'N' && !visited[i][j]) {
//                 // 对每个未被访问过的 'N' 进行 DFS
//                 int count = dfs(matrix, visited, n, m, i, j);
//                 if (count > max_count) {
//                     max_count = count;
//                 }
//             }
//         }
//     }

//     return max_count;
// }

// int main() {
//     int n;  // 矩阵的行数
//     scanf("%d", &n);

//     char matrix[MAX_N][MAX_N];
//     for (int i = 0; i < n; i++) {
//         scanf("%s", matrix[i]);  // 读入每一行字符串
//     }

//     // 输出最大安利人数
//     printf("%d\n", max_influence(matrix, n, n));

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>


// int compare(const void *a,const void *b)
// {
//     return *(int *)b - *(int *)a;
// }

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n,k;
//         scanf("%d %d",&n,&k);
//         int redPackets[n];
//         for(int i = 0; i < n;i++)
//         {
//             scanf("%d",&redPackets[i]);
//         }
//         qsort(redPackets,n,sizeof(int),compare);
//         int maxMoney = 0;
//         for(int j = 0; j < k && j < n ; j++)
//         {
//             maxMoney += redPackets[j];
//         }
//         printf("%d\n", maxMoney);
//     }
//     return 0;
// }



#include <stdio.h>

#define MOD 1000000007

// 计算 a * b % MOD
long long mod_mul(long long a, long long b, long long mod) 
{
    return (a * b) % mod;
}

// 计算 a^b % mod (快速幂算法)
long long mod_pow(long long a, long long b, long long mod) 
{
    long long result = 1;
    a = a % mod;
    while (b > 0) 
    {
        if (b % 2 == 1) 
        {
            result = mod_mul(result, a, mod);
        }
        a = mod_mul(a, a, mod);
        b = b / 2;
    }
    return result;
}

int main() 
{
    long long n, k, p, q;
    scanf("%lld %lld %lld %lld", &n, &k, &p, &q);

    // 计算 p / q % MOD
    long long q_inv = mod_pow(q, MOD - 2, MOD);  // q的逆元

    // 计算 p / q
    long long p_over_q = mod_mul(p, q_inv, MOD);

    long long result = 0;
    for (long long i = 0; i < n; ++i) 
    {
        result = (result + p_over_q) % MOD;
    }

    // 输出最终的期望值
    printf("%lld\n", result);

    return 0;
}