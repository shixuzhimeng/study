// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;
//     char longest[81];
//     char current[81];
//     int max_len = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%s", current);
//         int len = strlen(current);
//         if (len > max_len) {
//             max_len = len;
//             strcpy(longest, current);
//         }
//     }
//     printf("The longest is: %s\n", longest);
    
//     return 0;
// }

// #include <stdio.h>
// int fac(int n)
// {
//     if(n == 1)
//     {
//         return 1;
//     }
//     return n*fac(n-1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a = fac(n);
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX_LEN 500000

// void reverseWords(char *str)
// {
//     int len = strlen(str);
//     int start = 0, end = len - 1;

//     while (start <= end && isspace(str[start]))
//     {
//         start++;
//     }
//     while (end >= start && isspace(str[end]))
//     {
//         end--;
//     }
//     int word_end = end + 1;
//     int i;
//     while (start <= word_end)
//     {

//         while (start <= word_end && isspace(str[start]))
//         {
//             start++;
//         }
//         if (start > word_end) break;

//         int word_start = start;
//         while (start <= word_end && !isspace(str[start]))
//         {
//             start++;
//         }

//         if (word_start != word_end)
//         {
//             if (start <= word_end)
//             {
//                 printf(" "); 
//             }
//             for (i = word_start; i < start; i++)
//             {
//                 putchar(str[i]);
//             }
//         }
//     }
//     printf("\n");
// }

// int main()
// {
//     char str[MAX_LEN];
//     fgets(str, MAX_LEN, stdin);
//     reverseWords(str);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     double eps;
//     scanf("%le", &eps);
    
//     double pi_half = 1.0;  // π/2 的近似值
//     double term = 1.0;     // 当前项的值
//     int i = 1;             // 项数计数器
    
//     // 循环计算直到最后一项小于eps
//     while (term >= eps) {
//         // 计算下一项：term * i / (2*i + 1)
//         term = term * i / (2 * i + 1);
//         pi_half += term;
//         i++;
//     }
    
//     // 计算π的值：π = 2 * (π/2)
//     double pi = 2 * pi_half;
    
//     // 输出结果，保留5位小数
//     printf("PI = %.5f\n", pi);
    
//     return 0;
// }
#include <stdio.h>

// 计算阶乘的函数
// double fact(int n) {
//     double result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int m, n;
//     scanf("%d %d", &m, &n);  // 读取m和n

//     // 计算组合数 C(n, m) = n! / (m! * (n - m)!)
//     double result = fact(n) / (fact(m) * fact(n - m));

//     // 输出结果，保留两位小数
//     printf("result = %.0f\n", result);

//     return 0;
// }

// #include <stdio.h>

// int countDistinctDigits(int year)
// {
//     int digits[10] = {0};
//     int distinct = 0;

//     for (int i = 0; i < 4; i++) {
//         int digit = year % 10;
//         digits[digit]++;
//         year /= 10;
//     }
//     digits[0] += 4;
//     for (int i = 0; i < 10; i++)
//     {
//         if (digits[i] > 0) {
//             distinct++;
//         }
//     }
    
//     return distinct;
// }

// int main() {
//     int y, n;
//     scanf("%d %d", &y, &n);
    
//     int age = 0;
//     int current_year = y;
    
//     while (countDistinctDigits(current_year) != n) {
//         current_year++;
//         age++;
//     }
    
//     printf("%d %04d\n", age, current_year);
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct Friend
// {
//     char name[11];
//     int birthday;
//     char phone[18];
// };

// int main()
// {
//     int n;
//     scanf("%d", &n);
    
//     struct Friend friends[10];
//     struct Friend temp;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s %d %s", friends[i].name, &friends[i].birthday, friends[i].phone);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (friends[j].birthday > friends[j + 1].birthday)
//             {
//                 temp = friends[j];
//                 friends[j] = friends[j + 1];
//                 friends[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%s %08d %s\n", friends[i].name, friends[i].birthday, friends[i].phone);
//     }
    
//     return 0;
// }

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    printf("排序后的数组: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}