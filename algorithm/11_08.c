
// //随机数
// #include <stdio.h>
// #include <stdlib.h>  // 包含 rand(), srand()
// #include <time.h>    // 包含 time()

// int main() {
//     srand(time(NULL));  // 用当前时间作为随机种子
//     int r = rand();     // 生成一个随机整数
//     printf("随机数: %d\n", r);
//     return 0;
// }


// int randInRange(int a, int b) {
//     return rand() % (b - a + 1) + a;
// }

// int main() {
//     srand(time(NULL));
//     for(int i = 0; i < 5; i++)
//         printf("%d ", randInRange(10, 20));  // 输出 10~20 之间的随机整数
//     return 0;
// }


//如果你想生成一个 0~1 之间的随机浮点数：

double r = (double)rand() / RAND_MAX; printf("随机小数: %f\n", r);

//或在 `[a, b]` 区间：

double randDouble(double a, double b) {     return a + (b - a) * (double)rand() / RAND_MAX; }
