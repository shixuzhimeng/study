//offsetof实现
// #include <stdio.h>
// #include <stddef.h>

// struct Person {
//     char name[50];
//     int age;
//     double salary;
// };

// int main() {
//     printf("Offset of name: %zu\n", offsetof(struct Person, name));
//     printf("Offset of age: %zu\n", offsetof(struct Person, age));
//     printf("Offset of salary: %zu\n", offsetof(struct Person, salary));
    
//     return 0;
// }





//实现offsetof
？


//结果
//Offset of name: 0
//Offset of age: 50
//Offset of salary: 54#include <stdio.h>



// #include <stddef.h>

// struct A {
//     char a;
//     int b;
//     double c;
// };

// struct B {
//     char a;
//     char b;
//     int c;
// };

// int main() {
//     printf("Size of struct A: %zu\n", sizeof(struct A));
//     printf("Offset of a in struct A: %zu\n", offsetof(struct A, a));
//     printf("Offset of b in struct A: %zu\n", offsetof(struct A, b));
//     printf("Offset of c in struct A: %zu\n", offsetof(struct A, c));
    
//     printf("\n");

//     printf("Size of struct B: %zu\n", sizeof(struct B));
//     printf("Offset of a in struct B: %zu\n", offsetof(struct B, a));
//     printf("Offset of b in struct B: %zu\n", offsetof(struct B, b));
//     printf("Offset of c in struct B: %zu\n", offsetof(struct B, c));
    
//     return 0;
// }

//结果
//Offset of name: 0
//Offset of age: 52
//Offset of salary: 56



// #include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>
// struct Person {
//     char name[50];
//     int age;
//     double salary;
// };

// int main() {
//     size_t n = 3;
//     struct Person *people = malloc(n * sizeof(struct Person));

//     // 通过偏移量直接访问结构体成员
//     printf("Offset of name: %zu\n", offsetof(struct Person, name));
//     printf("Offset of age: %zu\n", offsetof(struct Person, age));
//     printf("Offset of salary: %zu\n", offsetof(struct Person, salary));

//     // 填充数据
//     for (size_t i = 0; i < n; i++) {
//         snprintf(people[i].name, sizeof(people[i].name), "Person %zu", i + 1);
//         people[i].age = 30 + i;
//         people[i].salary = 50000.0 + (i * 1000);
//     }

//     // 通过偏移量访问每个结构体的成员
//     for (size_t i = 0; i < n; i++) {
//         printf("Person %zu: %s, Age: %d, Salary: %.2f\n", i + 1, people[i].name, people[i].age, people[i].salary);
//     }

//     free(people);
//     return 0;
// }