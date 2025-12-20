// #include  <stdio.h>

// int main()
// {
//     int i;
//     int  sum = 0;
//     while(scanf("%d", &i) == 1 && i > 0)
//     {
//         if(i % 2 != 0)
//         sum += i;
//     }
//     printf("%d", sum);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int digit_count = 0;  // 位数
//     int digit_sum = 0;    // 各位数字之和
    
//     // 处理特殊情况：如果n为0，它有1位数，和为0
//     if (n == 0) {
//         digit_count = 1;
//         digit_sum = 0;
//     } else {
//         // 循环提取每一位数字
//         while (n > 0) {
//             int digit = n % 10;  // 取出个位数
//             digit_sum += digit;  // 累加到总和
//             digit_count++;       // 位数加1
//             n = n / 10;          // 去掉个位数
//         }
//     }
    
//     printf("%d %d\n", digit_count, digit_sum);
    
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for(int i = 0; i <= n; i++) {
//         long result = pow(3, i);  // 计算3的i次方
//         printf("pow(3,%d) = %ld\n", i, result);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int M, N;
//     scanf("%d %d", &M, &N);
    
//     // 保存原始值，用于计算最小公倍数
//     int original_M = M;
//     int original_N = N;
    
//     // 计算最大公约数（欧几里得算法）
//     while (N != 0) {
//         int temp = M % N;
//         M = N;
//         N = temp;
//     }
//     int gcd = M;  // 最大公约数
    
//     // 计算最小公倍数
//     int lcm = original_M * original_N / gcd;
    
//     printf("%d %d\n", gcd, lcm);
    
//     return 0;
// }


