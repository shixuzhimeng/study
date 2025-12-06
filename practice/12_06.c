// #include <stdio.h>

// int determine_winner(int a, int b)
// {
//     int win_matrix[5][5] = {
//         {0, -1, 1, 1, -1},  
//         {1, 0, -1, -1, 1},  
//         {-1, 1, 0, 1, -1}, 
//         {-1, 1, -1, 0, 1}, 
//         {1, -1, 1, -1, 0}  
//     };
//     return win_matrix[a][b];
// }

// int main()
// {
//     int N, NA, NB;
//     scanf("%d %d %d", &N, &NA, &NB);

//     int A_pattern[NA], B_pattern[NB];
    
//     for(int i = 0; i < NA; i++)
//     {
//         scanf("%d", &A_pattern[i]);
//     }

//     for(int i = 0; i < NB; i++)
//     {
//         scanf("%d", &B_pattern[i]);
//     }

//     int score_A = 0, score_B = 0;

//     for (int i = 0; i < N; i++)
//     {
//         int A_move = A_pattern[i % NA];  
//         int B_move = B_pattern[i % NB];  
//         int result = determine_winner(A_move, B_move);
        
//         if (result == 1)
//         {
//             score_A++; 
//         }
//         else if(result == -1)
//         {
//             score_B++; 
//         }
//     }

//     printf("%d %d\n", score_A, score_B);
//     return 0;
// }

// #include <stdio.h>

// #define N 10

// int dx[4] = {-1, 0, 1, 0}; 
// int dy[4] = {0, 1, 0, -1}; 

// int valid(int x, int y, char map[N][N]) {
//     return x >= 0 && x < N && y >= 0 && y < N && map[x][y] != '*';
// }

// int main() {
//     char map[N][N];
//     int fx, fy, cx, cy;
//     int fdir = 0, cdir = 0;

//     for (int i = 0; i < N; i++) {
//         scanf("%s", map[i]);
//         for (int j = 0; j < N; j++) {
//             if (map[i][j] == 'F') {
//                 fx = i;
//                 fy = j;
//             } else if (map[i][j] == 'C') {
//                 cx = i;
//                 cy = j;
//             }
//         }
//     }

//     int time = 0;
//     while (time < 10000)
//     {  
//         time++;
//         if (fx == cx && fy == cy) {
//             printf("%d\n", time);
//             return 0;
//         }

//         int next_cx = cx + dx[cdir];
//         int next_cy = cy + dy[cdir];
//         if (valid(next_cx, next_cy, map)) {
//             cx = next_cx;
//             cy = next_cy;
//         }
//         else
//         {
//             cdir = (cdir + 1) % 4; 


//         int next_fx = fx + dx[fdir];
//         int next_fy = fy + dy[fdir];
//         if (valid(next_fx, next_fy, map))
//         {
//             fx = next_fx;
//             fy = next_fy;
//         }
//         else
//         {
//             fdir = (fdir + 1) % 4;  
//         }
//     }

//     printf("0\n");
//     return 0;
// }


// //头插法
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
// 	int date ;
// 	struct Node* next;
// };

// //插入
// struct Node* creatList()
// {
// 	struct Node* headNode =(struct Node*)malloc(sizeof(struct Node));
// 	//headNode 成了结构体变量
// 	//变量使用必须被初始化
// 	headNode -> date = 1;
// 	headNode -> next = NULL;
// 	return headNode;
// }

// //创建节点
// struct Node* creatNode(int date)
// {
// 	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// 	newNode->date = date;
// 	newNode->next = NULL;
// 	return newNode;
// }

// //打印链表
// void printfList(struct Node* headNode)
// {
// 	struct Node* pMove = headNode->next;
// 	while(pMove)
// 	{
// 		printf("%d  ", pMove->date);
// 		pMove = pMove->next;
// 	}
// 	printf("\n");
// }

// //插入节点
// void insertNode(struct Node* headNode, int date)
// {
// 	struct Node* newNode = creatNode(date);
// 	newNode->next = headNode->next;
// 	headNode->next = newNode;
// }

// //删除节点
// void deleteNode(struct Node* headNode, int posDate)
// {
// 	struct Node* posNode = headNode -> next;
// 	struct Node* posNodeFront = headNode;
// 	if(NULL == posNode)
// 	{
// 		printf("无法删除  链表为空\n");
// 	}
// 	else
// 	{
// 		while(posNode->date != posDate)
// 		{
// 			posNodeFront = posNode;
// 			posNode = posNodeFront->next;
// 			if(NULL == posNode)
// 			{
// 				printf("没有找到 无法删除\n");
// 				break;
// 			}
// 		}
// 		posNodeFront->next = posNode->next;
// 		free(posNode);
// 	}
// }
// int main()
// {
// 	struct Node* list = creatList();
// 	insertNode(list, 1);
// 	insertNode(list, 2);
// 	insertNode(list, 3);
// 	printfList(list);
// 	deleteNode(list,2);
//     printfList(list);
// 	system("pause");
// 	return 0;
// }


//头插法
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[20];
	int num;
	int math;
};

struct Node {
	struct student date; //数据域
	struct Node* next;   //指针域
};

//插入
struct Node* creatList()
{
	struct Node* headNode =(struct Node*)malloc(sizeof(struct Node));
	//headNode 成了结构体变量
	//变量使用必须被初始化
	//headNode -> date = 1;
	headNode -> next = NULL;
	return headNode;
}

//创建节点
struct Node* creatNode(struct student date)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}

//打印链表
void printfList(struct Node* headNode)
{
	struct Node* pMove = headNode->next;
	printf("name\t num\t math\n");
	while(pMove)
	{
		printf("%s\t %d\t %d\n", pMove->date.name,
								 pMove->date.num,
								 pMove->date.math);
		pMove = pMove->next;
	}
	printf("\n");
}

//插入节点
void insertNode(struct Node* headNode, struct student date)
{
	struct Node* newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

//删除节点
void deleteNode(struct Node* headNode, int num)
{
	struct Node* posNode = headNode -> next;
	struct Node* posNodeFront = headNode;
	if(NULL == posNode)
	{
		printf("无法删除  链表为空\n");
	}
	else
	{
		while(posNode->date.num != num)
		{
			posNodeFront = posNode;
			posNode = posNodeFront->next;
			if(NULL == posNode)
			{
				printf("没有找到 无法删除\n");
				break;
			}
		}
		posNodeFront->next = posNode->next;
		free(posNode);
	}
}
int main()
{
	struct Node* list = creatList();
	struct student info;
	while(1)
	{
		scanf("%s %d %d",info.name,&info.num, &info.math);
		insertNode(list,info);
		printf("continue(Y/N)?\n");
		char choice = 0;
		setbuf(stdin, NULL);
		scanf("%c",&choice);
		if(choice == 'N' || choice == 'n')
		{
			break;
		}
	}
	printfList(list);
	scanf("%d",&info.num);
	deleteNode(list,info.num);
	printfList(list);
	system("pause");
	return 0;
}