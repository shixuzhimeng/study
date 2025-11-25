// #include <stdio.h>

// enum 
// {
//     SIZE = 5
// };
// int main()
// {
//     double a[SIZE] = {1,2,3,4,5};
//     FILE *fp = fopen("test.bin","wb");
//     fwrite(a, sizeof *a, SIZE, fp);
//     fclose(fp);
// }



//#include <stdio.h>

// int main()
// {
//     const char *arr[4][4] = {
//         {"水果名称", "单价", "数量", "金额"},
//         {"葡萄", "30", "1.5", "45"},
//         {"香蕉", "10", "3", "30"},
//         {"西瓜", "12", "2", "26"}
//     };

//     FILE *fp = {"fruits.csv", "w"};
//     if(NULL == fp)
//     {
//         perror("文件打开失败\n");
//         return 1;
//     }
//     for(int i = 0; i < 4; i++)
//     {
//         fprintf(fp, "%s,%s,%s,%s\n",
//         arr[i][0],
//         arr[i][1],
//         arr[i][2],
//         arr[i][3]);
//     }

//     fclose(fp);
//     return 0;
// }