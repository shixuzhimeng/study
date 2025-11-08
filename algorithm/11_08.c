
//随机数
#include <stdio.h>
#include <stdlib.h>  // 包含 rand(), srand()
#include <time.h>    // 包含 time()

int main() {
    srand(time(NULL));  // 用当前时间作为随机种子
    int r = rand();     // 生成一个随机整数
    printf("随机数: %d\n", r);
    return 0;
}