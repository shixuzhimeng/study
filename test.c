// #include <stdio.h>


// // bool 1--true 0--false

// int aba(int n)
// {
//     int p = n;
//     int m = 0;
    
//     while(p != 0)
//     {
//         m *= 10;
//         m += p % 10;
//         p /= 10;
//     }

//     if(m == n)
//         return 1;
//     else
//         return 0;
// }

// int p(int x)
// {
//     if(x <= 1)
//     return 0;
//     if(x == 2 || x == 3)
//     return 1;
//     if(x%2 == 0 || x % 3 == 0)
//     return 0;
//     for(int i = 5 ;i*i<=x;i+=6)
//     {
//         if(x%i == 0 || x % (i + 2) == 0)
//         return 0;
//     }
//     return 1;
// }

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     for(int i = a; i <= b; i++)
//     {
//         // 回文数
//         if(aba(i) == 1)
//         {
//             if(p(i) == 1)
//             {
//                 printf("%d\n", i);
//             }
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct result {
    int *arr;  // 指向数组的指针
    int len;   // 数组长度
};

// 拼接 arr1 和 arr2，存储结果到 result 中
void your_concat(int *arr1, int len1, int *arr2, int len2, struct result *result) {
    result->len = len1 + len2;  // 结果数组的长度是两个数组之和
    result->arr = (int *)malloc(result->len * sizeof(int));  // 动态分配内存

    // 复制 arr1 到 result->arr
    for (int i = 0; i < len1; i++) {
        result->arr[i] = arr1[i];
    }

    // 复制 arr2 到 result->arr
    for (int i = 0; i < len2; i++) {
        result->arr[len1 + i] = arr2[i];
    }
}
int compare(const int *a, const int *b) {
    return (*a) - (*b);
}
// 排序 result 数组
void your_sort(struct result result) 
{
    // 使用标准库函数 qsort 进行排序
    qsort(result.arr, result.len, sizeof(int), (int (*)(const void *, const void *))compare);
}
 

// 去重 result 数组
void your_dedup(struct result* result) {
    int *new_arr = (int *)malloc(result->len * sizeof(int));
    int new_len = 0;

    // 去重过程
    for (int i = 0; i < result->len; i++) {
        if (i == 0 || result->arr[i] != result->arr[i - 1]) {
            new_arr[new_len++] = result->arr[i];
        }
    }

    // for(int i = 0; i < new_len; i++)
    // {
    //     printf("%d ",new_arr[i]);
    // }
    printf("\n");
    // 更新 result 数组
    free(result->arr);  // 释放原数组的内存
    result->arr = new_arr;  // 更新为去重后的数组
    result->len = new_len;  // 更新长度
}

// 打印结果
void print_result(struct result result) {
    printf("Length: %d\n", result.len);
    for (int i = 0; i < result.len; i++) {
        printf("%d ", result.arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = { 6, 1, 2, 1, 9, 1, 3, 2, 6, 2 };
    int arr2[] = { 4, 2, 2, 1, 6, 2 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    struct result result;
    your_concat(arr1, len1, arr2, len2, &result);
    print_result(result);
    your_sort(result);
    print_result(result);
    your_dedup(&result);
    print_result(result);
    free(result.arr);  // 释放内存
    return 0;
}
