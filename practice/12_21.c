// #include <stdio.h>

// int main() {
//     double score, sum = 0;
//     int count = 0, fail = 0;
    
//     while (1) {
//         if (scanf("%lf", &score) != 1) break;
//         if (score < 0) break;
//         sum += score;
//         count++;
//         if (score < 60) fail++;
//     }
    
//     printf("Average = %.2f\n", count == 0 ? 0.00 : sum / count);
//     if(fail != 0)
//     printf("Count = %d\n", fail);
    
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n;
//     double sum = 1.0;  // 第一项 1
//     double term = 1.0; // 当前项的值
    
//     scanf("%d", &n);
    
//     // 计算前 n+1 项的和（第0项是1，第1项是1/1!，...）
//     for (int i = 1; i <= n; i++) {
//         term /= i;      // 更新当前项：从上一项除以 i 得到当前项
//         sum += term;    // 累加到总和中
//     }
    
//     printf("%.8f\n", sum);
    
//     return 0;
// }