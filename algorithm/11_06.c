// #include <stdio.h>
// int main()
// {
//     (*(void (*)() ) 0)();
//     //void (*)()为函数指针类型
//     //这是一次函数调用：
//     //把0强制转换为：无参，返回类型是void的函数；
//     //调用0地址处的这个函数；
//     void (* signal(int, void(*)(int) ) )(int);
//     //以上函数是一次函数声明
// }



// #include <stdio.h>
// void menu()
// {
//     printf("*************************\n");
//     printf("***** 1.add  2.sub ******\n");
//     printf("***** 3.mul  4.div ******\n");
//     printf("***** 0.exit       ******\n");
//     printf("*************************\n");
// }
// int Add(int x ,int y)
// {
//     return x + y;
// }
// int Sub(int x ,int y)
// {
//     return x - y;
// }
// int Mul(int x ,int y)
// {
//     return x * y;
// }
// int Div(int x ,int y)
// {
//     return x / y;
// }
// void calc(int (*pf)(int , int))
// {
//     int x = 0;
//     int y = 0;
//     int ret = 0;
//     printf("请输入两个操作数");
//     scanf("%d %d",&x,&y);
//     ret = pf(x , y);
//     printf("%d\n",ret);
// }
// int main()
// {
//     int input = 0;
//     do
//     {
//         menu();
//         printf("请选择：>");
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 1:
//                 calc(Add);
//                 break;
//             case 2:
//                 calc(Sub);
//                 break;
//             case 3:
//                 calc(Mul);
//                 break;
//             case 4:
//                 calc(Div);
//                 break;
//             case 0:
//                 printf("退出计算器\n");
//                 break;
//             default:
//                 printf("选择错误\n");
//                 break;

//         }
//     }while(input);


//     return 0;
// }