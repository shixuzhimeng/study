// #include <stdio.h>

// int main()
// {
//     FILE *fp = fopen("file.txt", "r");  // 以只读方式打开文件
//     if (fp == NULL) 
//     {
//         perror("Error opening file");
//         return 1;
//     }
// }



// #include <stdio.h>
// int main()
// {
//     // 使用 fscanf 读取格式化数据
// int num;
// FILE *fp = fopen("file.txt", "r");
// fscanf(fp, "%d", &num);
// printf("Number: %d\n", num);
// fclose(fp);

// // 使用 fgets 读取一行
// char buffer[100];
// fp = fopen("file.txt", "r");
// if (fgets(buffer, sizeof(buffer), fp)) {
//     printf("Line: %s\n", buffer);
// }
// fclose(fp);
// }


// #include <stdio.h>
// int main()
// {
//     // 使用 fprintf 写入格式化数据
// FILE *fp = fopen("file.txt", "w");
// if (fp != NULL) {
//     fprintf(fp, "Hello, world!\n");
//     fclose(fp);
// }

// // 使用 fputs 写入字符串
// fp = fopen("file.txt", "w");
// if (fp != NULL) {
//     fputs("This is a test.\n", fp);
//     fclose(fp);
// }
// }

// #include <stdio.h>
// int main()
// {
//     FILE *fp = fopen("file.txt", "r");
//     fseek(fp, 0, SEEK_END);  // 移动到文件末尾
//     long size = ftell(fp);   // 获取文件大小
//     printf("File size: %ld bytes\n", size);
//     fclose(fp);
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     FILE *fp = fopen("data.txt", "r");
//     if (fp == NULL) {
//         perror("Error opening file");
//         return 1;
//     }
//     fscanf(fp, "%d", &age);  // 从文件中读取一个整数
//     printf("Age: %d\n", age);
//     fclose(fp);

//     char buffer[100];
// FILE *fp = fopen("data.txt", "r");
// if (fp == NULL) {
//     perror("Error opening file");
//     return 1;
// }
// if (fgets(buffer, sizeof(buffer), fp)) {
//     printf("Line: %s", buffer);
// }
// fclose(fp);


//     FILE *fp = fopen("data.bin", "rb");
// if (fp == NULL) {
//     perror("Error opening file");
//     return 1;
// }
// int data;
// fread(&data, sizeof(int), 1, fp);  // 读取一个整数
// printf("Data: %d\n", data);
// fclose(fp);
// }