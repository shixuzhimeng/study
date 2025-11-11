int mySqrt(int x) {
    if(x==0||x==1)
    {
        return x;
    }
    int left  =  0,right = x;
    while(left<=right)
    {
        int mid = left + (right - left)/2;
        if(mid <= x/mid)
        {
            left = mid +1;
        }
        else
        right = mid -1;
    }
    return right;
}
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // 防止(left+right)溢出
        if (arr[mid] == target)
            return mid; // 找到目标
        else if (arr[mid] < target)
            left = mid + 1; // 目标在右半边
        else
            right = mid - 1; // 目标在左半边
    }

    return -1; // 未找到
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("找到目标 %d，下标为 %d\n", target, result);
    else
        printf("未找到目标 %d\n", target);

    return 0;
}