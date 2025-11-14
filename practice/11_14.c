// //动态内存管理
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <errno.h>
// int main()
// {

//     int arr[10] = {0};
//     //动态内存开辟
//     int *p = (int*)malloc(40);
//     if(p == NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     //使用
//     int i = 0;
//     for( i = 0;i<10;i++)
//     {
//         *(p + i) = i;
//     }
//     for(i = 0; i < 10;i++)
//     {
//         printf("%d ",*(p +i));

//     }
//     //没有free
//     //并不是内存空间就不回收了
//     //当程序退出时，系统会自动回收内存空间的


//     free(p);

//     return 0;
// }




// #incldue <stdio.h>
// int main()
// {
// 	//分配一个int
// 	int p = (int *)malloc(sizeof(int));
// 	if(!p)
// 	{
// 		return;
// 	}
// 	*p = 10;
// 	prinf("%d\n",*p);
// 	free(p);
	
// 	//分配一个数组
// 	int n = 5;
// 	int arr[] = (int *)malloc(n * sizeof(int));
	
// 	return 0;
// }



// struct Node
// {
//     int a;
// };
// #include <stdio.h>
// int main()
// {
// 	int * a = calloc(10 , sizeof(int));
// 	int *arr = calloc(100 , sizeof(char));//分配数组
// 	struct Node* x = calloc(1, sizeof(struct Node));//分配结构体
// }



// #include <stdio.h>
// #include <stdlib.h>
//扩容数组
// typedef struct {
//     int *data;
//     int size;
//     int capacity;
// } Vector;

// void init(Vector *v) {
//     v->capacity = 4;
//     v->size = 0;
//     v->data = malloc(v->capacity * sizeof(int));
// }

// void push(Vector *v, int x) {
//     if (v->size == v->capacity) {
//         int new_cap = v->capacity * 2;
//         int *tmp = realloc(v->data, new_cap * sizeof(int));
//         if (!tmp) exit(1);
//         v->data = tmp;
//         v->capacity = new_cap;
//     }
//     v->data[v->size++] = x;
// }

// void destroy(Vector *v) {
//     free(v->data);
// }

// int main() {
//     Vector v;
//     init(&v);

//     for (int i = 0; i < 10; i++)
//         push(&v, i * 10);

//     destroy(&v);
//     return 0;
// }


// //缩减数组
// int capacity = 4;
// int *a = malloc(capacity * sizeof(int));
// int size = 0;

// void push(int x) {
//     if (size == capacity) {
//         int new_cap = capacity * 2;
//         int *tmp = realloc(a, new_cap * sizeof(int));
//         if (!tmp) exit(1);
//         a = tmp;
//         capacity = new_cap;
//     }
//     a[size++] = x;
// }

// void shrink() {
//     if (size <= capacity / 4 && capacity > 4) {
//         int new_cap = capacity / 2;
//         int *tmp = realloc(a, new_cap * sizeof(int));
//         if (!tmp) return;   // 保持原数组不变
//         a = tmp;
//         capacity = new_cap;
//     }
// }

// void pop() {
//     if (size > 0) size--;
//     shrink();
// }
