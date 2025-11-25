// #include <stdio.h>
// struct S
// {
//     char arr[10];
//     int age;
//     float score;
// };

// int main()
// {
//     struct S s = {"zhangsan",20,55.5f};
//     struct S tmp = { 0 };
//     char buf[100] = {0};

//     //把s中的格式化数据化为字符串放到buf中
//     sprintf(buf, "%s %d %f",s.arr,s.age,s.score);
//     printf("%s\n",buf);

//     //从buf中获取一个格式化的数据放到tmp中
//     sscanf(buf, "%s %d %f",tmp.arr,&(tmp.age),&(tmp.score));
//     printf("%s %d %f",tmp.arr, tmp.age, tmp.score);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
    FILE* pf = fopen("test.txt", "r" );
    if(pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    //读文件
    //定位文件指针
    fseek(pf, 2, SEEK_SET);
    int ch = fgetc(pf);
    printf("%c\n",ch);
    printf("%d\n",ftell(pf));

    fseek(pf, -1, SEEK_END);
    ch = fgetc(pf);
    printf("%c\n",ch);
    printf("%d\n",ftell(pf));
    
    rewind(pf);
    ch = fgetc(pf);
    printf("%c\n",ch);

    //关闭文件
    fclose(pf);
    pf == NULL;

    return 0;
}