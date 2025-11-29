//万能头文件
//#include <bits/stdc++.h>

//对于unordered
//一个无序容器
// #include <iostream>
// #include <unordered_map>

// int main() {
//     std::unordered_map<std::string, int> age_map;
    
//     // 插入键值对
//     age_map["Alice"] = 25;
//     age_map["Bob"] = 30;
//     age_map["Charlie"] = 35;

//     // 查找值
//     std::cout << "Alice's age: " << age_map["Alice"] << std::endl;

//     // 遍历 unordered_map
//     for (const auto& pair : age_map) {
//         std::cout << pair.first << " is " << pair.second << " years old" << std::endl;
//     }

//     return 0;
// }


//输出
// Alice's age: 25
// Alice is 25 years old
// Charlie is 35 years old
// Bob is 30 years old

// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cout << "Enter a number: ";  // 输出提示信息
//     cin >> x;  // 输入一个整数
//     cout << "You entered: " << x << endl;  // 输出输入的值
//     return 0;
// }


//endl->换行符

//循环实现
// for (int i = 0; i < 5; i++) {
//     cout << i << " ";  // 输出 0 1 2 3 4
// }



//数组
// int arr[5] = {1, 2, 3, 4, 5};
// cout << arr[0];  // 输出 1


//函数#include <iostream>
// using namespace std;

// // 无返回值的函数
// void greet() {
//     cout << "Hello, World!" << endl;
// }

// // 有返回值的函数
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     greet();  // 调用 greet 函数
//     int result = add(5, 3);  // 调用 add 函数
//     cout << "Sum: " << result << endl;
//     return 0;
// }


//指针
// int x = 10;
// int* ptr = &x;  // 指针，存储 x 的地址
// cout << *ptr;  // 输出 10

// int& ref = x;  // 引用，别名
// ref = 20;  // 改变 x 的值
// cout << x;  // 输出 20


#include <stdio.h>
#include <stddef.h>
struct S
{
    char c1 ;
    int i;
    char c2;
};
int main()
{
    struct S s = {0};
    printf("%d\n",offsetof(struct S,c1));
    printf("%d\n",offsetof(struct S,i));
    printf("%d\n",offsetof(struct S,c2));
}