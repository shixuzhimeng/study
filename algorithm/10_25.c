 #include <stdio.h>
#define MAX 100  // 足够存储50!及总和的最大位数

// 将fact数组加到sum数组中，更新sum和其长度
void add(int sum[], int *len_sum, int fact[], int len_fact) {
    int carry = 0;
    int i;
    // 遍历到两个数组中较长的长度
    for (i = 0; i < *len_sum || i < len_fact; i++) {
        int s = (i < *len_sum) ? sum[i] : 0;  // sum的当前位（超出长度则为0）
        int f = (i < len_fact) ? fact[i] : 0;  // fact的当前位（超出长度则为0）
        int total = s + f + carry;
        sum[i] = total % 10;  // 保留当前位
        carry = total / 10;   // 计算进位
    }
    // 处理剩余的进位
    while (carry > 0) {
        sum[i] = carry % 10;
        carry /= 10;
        i++;
    }
    *len_sum = i;  // 更新sum的长度
}

// 将fact数组乘以整数k，更新fact和其长度
void multiply(int fact[], int *len_fact, int k) {
    int carry = 0;
    int i;
    // 遍历当前fact的每一位
    for (i = 0; i < *len_fact; i++) {
        int product = fact[i] * k + carry;
        fact[i] = product % 10;  // 保留当前位
        carry = product / 10;    // 计算进位
    }
    // 处理剩余的进位
    while (carry > 0) {
        fact[i] = carry % 10;
        carry /= 10;
        i++;
    }
    *len_fact = i;  // 更新fact的长度
}

int main() {
    int n;
    scanf("%d", &n);

    int sum[MAX] = {0};    // 存储总和的数组
    int len_sum = 0;       // 总和的位数（初始为0，代表0）

    int fact[MAX] = {0};   // 存储当前阶乘的数组
    fact[0] = 1;           // 1! = 1，初始化为1
    int len_fact = 1;      // 1!的位数为1

    for (int i = 1; i <= n; i++) {
        // 累加当前阶乘（i!）到总和
        add(sum, &len_sum, fact, len_fact);

        // 计算下一个阶乘（(i+1)!），若未到n
        if (i < n) {
            multiply(fact, &len_fact, i + 1);
        }
    }

    // 从高位到低位输出总和
    for (int i = len_sum - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}