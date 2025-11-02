struct result {
    int *arr;
    int len;
};

// 拼接两个数组到结果结构体中
void your_concat(int arr1[], int len1, int arr2[], int len2, struct result *result) {
    // 计算拼接后的总长度
    int total_len = len1 + len2;
    // 动态分配内存存储拼接后的数组
    int *concat_arr = (int *)malloc(total_len * sizeof(int));
    if (concat_arr == NULL) {
        fprintf(stderr, "Memory allocation failed in your_concat\n");
        exit(EXIT_FAILURE);
    }
    // 复制第一个数组的元素
    for (int i = 0; i < len1; i++) {
        concat_arr[i] = arr1[i];
    }
    // 复制第二个数组的元素
    for (int i = 0; i < len2; i++) {
        concat_arr[len1 + i] = arr2[i];
    }
    // 更新结果结构体
    result->arr = concat_arr;
    result->len = total_len;
}

// 对结果结构体中的数组进行升序排序（冒泡排序）
void your_sort(struct result result) {
    int n = result.len;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (result.arr[j] > result.arr[j + 1]) {
                // 交换相邻元素
                int temp = result.arr[j];
                result.arr[j] = result.arr[j + 1];
                result.arr[j + 1] = temp;
            }
        }
    }
}

// 去除结果结构体中数组的重复元素
void your_dedup(struct result *result) {
    if (result->len <= 1) {
        return; // 空数组或单元素数组无需去重
    }
    int *arr = result->arr;
    int n = result->len;
    int new_len = 1; // 至少有一个不重复元素
    
    // 统计不重复元素的数量
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            new_len++;
        }
    }
    
    // 动态分配内存存储不重复元素
    int *new_arr = (int *)malloc(new_len * sizeof(int));
    if (new_arr == NULL) {
        fprintf(stderr, "Memory allocation failed in your_dedup\n");
        exit(EXIT_FAILURE);
    }
    
    // 复制不重复元素到新数组
    new_arr[0] = arr[0];
    int idx = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            new_arr[idx++] = arr[i];
        }
    }
    
    // 释放原数组内存，更新结果结构体
    free(arr);
    result->arr = new_arr;
    result->len = new_len;
}

// 打印结果结构体中的数组元素
void print_result(struct result res) {
    for (int i = 0; i < res.len; i++) {
        printf("%d ", res.arr[i]);
    }
    printf("\n");
}