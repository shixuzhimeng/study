//结构体
//一般声明
// struct Stu
// {
//     char name[20];
//     int  age;
//     double grade;
// }s1,s2;//全局变量
// int main()
// {
//     struct Stu s3;//局部变量
//     return 0;
// }


//特殊声明
//匿名结构体类型
// struct 
// {
//     char name[20];
//     int age;
// }x;
// struct 
// {
//     char name[20];
//     int age;
// }a[10],* p;
// int main()
// {
//     p = &x;
//     //看似可以其实不行会报警告计算机看来类型不同
//     return 0;
// }



//错误的自引用
// struct Node
// {
//     int date;
//     struct Node next;//不可以
// };
// int main()
// {
//     sizeof(struct Node);
//     return 0;
// }




//数据域   指针域
//正确的自引用
// struct Node 
// {
//     int date;
//     struct Node* next;
// };


//链表
// typedef struct  Node
// {
//     int date;
//     struct Node* next;
    
// }* linklist;


// struct Node
// {
//     int date;
//     struct Node* next;
// };
// typedef struct Node* linklist;

//结构体变量的初始化
// struct Point
// {
//     int x;
//     int y;
// }p1 = {2 , 3};


//结构体可嵌套
// struct score
// {
//     int date;
//     char ch;
// };
// struct Stu
// {
//     char name[20];
//     struct score s;
    
// };
// int main()
// {
//     struct Stu s1 = {"zhangsan" ,{11 , 'A'}};
//     return 0; 
// }


// #include <stddef.h>
// #include <stdio.h>
// struct s1
// {
//     char name;
//     int age;
//     int grade;
// };
// struct s2
// {
//     char name;
//     char grade;
//     int age;
// };
// int main()
// {
//     printf("%ld\n",offsetof(struct s1,name));
//     printf("%ld\n",offsetof(struct s1,age));
//     printf("%ld\n",offsetof(struct s1,grade));
//     return 0;
// }



//#include <stdio.h>
// struct S
// {
// 	int date[100];
// 	int num;
// };
// void printf1(struct S ss)
// {
// 	int i = 0;
// 	for(i = 0; i < 3 ; i++)
// 	{
// 		printf("%d\n",ss.date[i]);
// 	}
// 	printf("%d\n",ss.num);
// }
// void pritnf2(struct S* ps)
// {
// 	int i = 0;
// 	for(i = 0; i< 3 ; i++)
// 	{
// 	printf("%d\n",ps->date[i]);
// 	}
// 	printf("%d\n",ps->num);
// }
// //优先选择printf2()
// int main()
// {
// 	struct S s = {{1 , 2 , 3} , 100 };
// 	printf1(s);
// 	pritnf2(&s);
// }

