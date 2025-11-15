//柔性数组的定义方式
// #include <stdio.h>
// struct S {
//     int n;
//     int arr[];   // 柔性数组成员（Flexible Array Member）
// };


// #include  <stdio.h>
// #include <stdlib.h>
// //柔性数组的使用方式
// int k = 10;
// struct S *p = malloc(sizeof(struct S) + k * sizeof(int));

// p->n = k;


// //访问方式
// for (int i = 0; i < p->n; i++) {
//     p->arr[i] = i + 1;
// }


// //文件的打开
// FILE *fopen(const char *filename, const char *mode);
// FILE *fp = fopen("data.txt", "r");
// if (!fp) {
//     perror("fopen");
//     return 1;
// }

// //文件的关闭
// fclose(fp);

// //文本文件读写
// fputs("Hello\n", fp);



// ///文件的复制
// FILE *src = fopen("a.txt", "rb");
// FILE *dst = fopen("b.txt", "wb");

// char buf[1024];
// size_t n;

// while ((n = fread(buf, 1, sizeof(buf), src)) > 0) {
//     fwrite(buf, 1, n, dst);
// }

// fclose(src);
// fclose(dst);


//写入结构体
// typedef struct {
//     int id;
//     double score;
// } Stu;

// Stu a[3] = {{1, 98.5}, {2, 88.0}, {3, 91.5}};

// FILE *fp = fopen("stu.bin", "wb");
// fwrite(a, sizeof(Stu), 3, fp);
// fclose(fp);