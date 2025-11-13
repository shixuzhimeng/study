//枚举
//枚举类型的定义
// #include <stdio.h>
// enum day
// {
//     //默认的值
//     Mon,//0
//     Tues,//1
//     Wes,//2
//     Thur,//3
//     Fri,//4
//     Sat,//5
//     Sun,//6
// };
// enum day
// {
    
//     Mon = 1,
//     Tues,
//     Wes,
//     Thur,
//     Fri,
//     Sat,
//     Sun,
// };
// int main()
// {
//     enum day d = Fri;
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wes);
//     printf("%d\n",Thur);
//     return 0;
// }


//联合体
// #include <stdio.h>

// union Un
// {
// 	int a;
// 	char b;
// };

// struct St
// {
// 	int a;
// 	char b;
// };


// int main()
// {
// 	union Un u;
// 	printf("%p\n",&u);
// 	printf("%p\n",&(u.a));
// 	printf("%p\n",&(u.b));
// 	return 0;
// }


// #include <stdio.h>
// int check_sys()
// {
// 	int a = 1;
// 	return *(char *)&a;
// }
// int main()
// {
// 	int ret = check_sys();
// 	if(ret = 1)
// 	{
// 		printf("小端\n");
// 	}
// 	else
// 	{
// 		printf("大端\n");
// 	}
// 	return 0;
// }


#include <stdio.h>
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_sys();
	if(ret = 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}