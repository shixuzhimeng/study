// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Student {
//     char name[100];
//     int id;
//     int a, b, c;
//     double average;
// } Student;

// void input(Student student[], int n) {
//     for (int i = 0; i < n; i++) {
//         scanf("%s %d %d %d %d", student[i].name, &student[i].id,
//               &student[i].a, &student[i].b, &student[i].c);
//         student[i].average = (student[i].a + student[i].b + student[i].c) / 3.0;
//     }
// }

// void search(Student student[], int n, int num) {
//     for (int i = 0; i < n; i++) {
//         if (student[i].id == num) {
//             printf("%s %d %d %d\n", student[i].name,
//                    student[i].a, student[i].b, student[i].c);
//             return;  
//         }
//     }
//     printf("Student not found\n"); 
// }

// int compare(const void *a, const void *b) {
//     double avgA = ((Student *)a)->average;
//     double avgB = ((Student *)b)->average;
    
//     if (avgA < avgB) return -1;
//     if (avgA > avgB) return 1;
//     return 0;
// }

// int main() {
//     int n, num;
//     scanf("%d", &n);  
    
//     Student students[n];  

//     input(students, n);   
    
//     qsort(students, n, sizeof(Student), compare);  
    
//     scanf("%d", &num);  
//     search(students, n, num);  
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, m;
    
//     scanf("%d %d", &n, &m);
    
    
//     char grid[n][m];
//     for (int i = 0; i < n; i++) {
//         scanf("%s", grid[i]);
//     }
    
    
//     int directions[8][2] = {
//         {-1, 0}, {1, 0}, {0, -1}, {0, 1},  // 上、下、左、右
//         {-1, -1}, {-1, 1}, {1, -1}, {1, 1}  // 左上、右上、左下、右下
//     };
    
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] == '*') {
                
//                 printf("*");
//             } else {
                
//                 int mineCount = 0;
//                 for (int d = 0; d < 8; d++) {
//                     int ni = i + directions[d][0];
//                     int nj = j + directions[d][1];
//                     if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*') {
//                         mineCount++;
//                     }
//                 }
//                 printf("%d", mineCount);
//             }
//         }
//         printf("\n"); 
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>  // 添加此行以解决 strcat 的问题

// #define TARGET 24.0
// #define EPSILON 1e-6

// // 运算符操作
// double calc(double a, double b, char op) {
//     switch (op) {
//         case '+': return a + b;
//         case '-': return a - b;
//         case '*': return a * b;
//         case '/': 
//             if (b != 0) return a / b;
//             return INFINITY;  // 避免除以零
//     }
//     return 0;
// }

// // 将数字转为字符串表示
// void to_expr(double a, double b, char op, char *expr) {
//     char temp[256];
//     sprintf(temp, "(%.0f%c%.0f)", a, op, b);
//     strcat(expr, temp);
// }

// // 递归进行拆解
// int dfs(double nums[], int n, char *expr) {
//     if (n == 1) {
//         if (fabs(nums[0] - TARGET) < EPSILON) {
//             sprintf(expr, "%.0f", nums[0]);
//             return 1;
//         }
//         return 0;
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 double new_nums[4];
//                 int k = 0;
//                 for (int m = 0; m < n; m++) {
//                     if (m != i && m != j) {
//                         new_nums[k++] = nums[m];
//                     }
//                 }
//                 // 尝试运算符
//                 char temp_expr[256];
//                 for (char op = '+'; op <= '/'; op++) {
//                     double res = calc(nums[i], nums[j], op);
//                     if (res == INFINITY) continue;
//                     sprintf(temp_expr, "(%.0f%c%.0f)", nums[i], op, nums[j]);
//                     if (dfs(new_nums, n - 1, temp_expr)) {
//                         strcat(expr, temp_expr);
//                         return 1;
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

// int main() {
//     double nums[4];
//     char expr[256] = "";

//     // 读取输入
//     for (int i = 0; i < 4; i++) {
//         if (scanf("%lf", &nums[i]) != 1) {
//             return 1; // 如果输入失败，返回 1
//         }
//     }

//     // 尝试所有数字的排列
//     for (int i = 0; i < 24; i++) {
//         // 调用递归查找
//         if (dfs(nums, 4, expr)) {
//             printf("%s\n", expr);
//             return 0;
//         }
//     }

//     // 无解
//     printf("-1\n");
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
    
//     char grid[n][m];


//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", grid[i]);
//     }
    
//     int directions[8][2] = {
//         {-1, 0}, {1, 0}, {0, -1}, {0, 1},  // 上、下、左、右
//         {-1, -1}, {-1, 1}, {1, -1}, {1, 1}  // 左上、右上、左下、右下
//     };
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (grid[i][j] == '*')
//             {
//                 printf("*");
//             }
//             else 
//             {
//                 int mineCount = 0;
//                 for (int d = 0; d < 8; d++) {
//                     int ni = i + directions[d][0];
//                     int nj = j + directions[d][1];
//                     if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*')
//                     {
//                         mineCount++;
//                     }
//                 }
//                 printf("%d", mineCount);
//             }
//         }
//         printf("\n"); 
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <limits.h>

// typedef struct Toy{
//     int dir;
//     char name[20];
// }Toy;


// int main()
// {
//     int n, m;
//     Toy toy[INT_MAX];
    
//     scanf("%d %d",&n , &m);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d %s",&toy[i].dir,toy[i].name);
//     }
    
//     int curr = 0;
//     for(int i = 0; i < m; i++)
//     {
//         int op , step;
//         scanf("%d %d",&op, &step);
//         if(toy[curr].dir == 0)
//         {
//             if(op == 0)
//             {
//                 curr = (curr + step) % n;
//             }
//             else
//             {
//                 curr = (curr - step + n) % n;
//             }
//         }
//         else
//         {
//             if(op == 0)
//             {
//                 curr = (curr - step + n) % n;
//             }
//             else
//             {
//                 curr = (curr + step) % n;
//             }
//         }
//     }

//     printf("%s\n",toy[curr].name);
    
//     return 0;

// }


// #include <stdio.h>
// int main()
// {
//     char dir[100000] = { 0 };
//     long n,m,i,cur = 0,a,s;
//     char job[100000][11] = { {0} };

//     scanf("%ld %ld",&n, &m);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%ld %s",&dir[i],job[i]);
//     }
//     for(int i = 0; i < m; i++)
//     {
//         scanf("%ld %ld",&a , &s);
//         if(dir[cur] == a)
//         {
//             s *= -1;
//         }
//         cur = (cur + n + s) % n;
//     }

//     printf("%s", job[cur]);

//     return 0;
// }


#include <stdio.h>

int a[510][510],b[510][510];

int main()
{

    int n , m ;
    int id = 0;
    scanf("%d %d", &n, &m);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a[i][j] = ++id;
        }
    }

    while(m--)
    {
        int x, y, r, z;
        scanf("%d %d %d %d",&x, &y, &r, &z);
        for(int i = x - r; i <= x + r; i++)
        {
            for(int j = y - r; j <= y + r; j++)
            {
                if(z == 0)
                {
                    b[i][j] = a[x+y-j][y-x+i];
                }
                else
                {
                    b[i][j] = a[x-y+j][x+y-i];
                }
            }
        }
        for(int i = x-r; i<=x+r; i++)
        {
            for(int j = y-r; j<=y+r; j++)
            {
                a[i][j] = b[i][j];
            }
        }
    }


    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}