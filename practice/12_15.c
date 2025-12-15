// #include  <stdio.h>
// #include <stdlib.h>

// struct student
// {
// 	char name[20];
// 	int num;
// 	int math;
// };

// struct Node {
// 	struct student date; //数据域
// 	struct Node* next;   //指针域
// };

// //
// struct Node* creatList()
// {
// 	struct Node* headNode =(struct Node*)malloc(sizeof(struct Node));
// 	//headNode 成了结构体变量
// 	//变量使用必须被初始化
// 	//headNode -> date = 1;
// 	headNode -> next = NULL;
// 	return headNode;
// }

// //创建节点
// struct Node* creatNode(struct student date)
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
// 	printf("name\t num\t math\n");
// 	while(pMove)
// 	{
// 		printf("%s\t %d\t %d\n", pMove->date.name,
// 								 pMove->date.num,
// 								 pMove->date.math);
// 		pMove = pMove->next;
// 	}
// 	printf("\n");
// }

// //插入节点
// void insertNode(struct Node* headNode, struct student date)
// {
// 	struct Node* newNode = creatNode(date);
// 	newNode->next = headNode->next;
// 	headNode->next = newNode;
// }

// //删除节点
// void deleteNode(struct Node* headNode, int num)
// {
// 	struct Node* posNode = headNode -> next;
// 	struct Node* posNodeFront = headNode;
// 	if(NULL == posNode)
// 	{
// 		printf("无法删除  链表为空\n");
// 	}
// 	else
// 	{
// 		while(posNode->date.num != num)
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
// 	struct student info;
// 	while(1)
// 	{
// 		scanf("%s %d %d",info.name,&info.num, &info.math);
// 		insertNode(list,info);
// 		printf("continue(Y/N)?\n");
// 		char choice = 0;
// 		setbuf(stdin, NULL);
// 		scanf("%c",&choice);
// 		if(choice == 'N' || choice == 'n')
// 		{
// 			break;
// 		}
// 	}
// 	printfList(list);
// 	scanf("%d",&info.num);
// 	deleteNode(list,info.num);
// 	printfList(list);
// 	system("pause");
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // 定义学生结构体
// struct student
// {
//     char name[5320];  // 学生的名字
//     int num;        // 学生的学号
//     int math;       // 学生的数学成绩
// };

// // 定义链表节点
// struct Node{
//     struct student data;  // 数据域，存储学生信息
//     struct Node* next;    // 指针域，指向下一个节点
// };

// // 头插法：插入节点到链表的头部
// void insert_at_head(struct Node** head_ref, struct student new_data)
// {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;  // 将学生信息赋给新节点的数据域
//     new_node->next = *head_ref;  // 新节点的 next 指向当前链表的头节点
//     *head_ref = new_node;        // 更新头指针，指向新节点
// }

// // 打印链表
// void print_list(struct Node* head)
// {
//     struct Node* temp = head;
//     while (temp != NULL) {  // 遍历链表，直到空节点
//         printf("Name: %s, Num: %d, Math: %d -> ", temp->data.name, temp->data.num, temp->data.math);
//         temp = temp->next;  // 移动到下一个节点
//     }
//     printf("NULL\n");  // 输出链表结束标志
// }

// int main() {
//     struct Node* head = NULL; //初始化空链表  

//     struct student s;
//     while(1)
//     {
//         scanf("%s %d %d",s.name , &s.num , &s.math);
//         insert_at_head(&head, s);
//         print_list(head);
//         printf("continue(Y/N)?\n");
//         char choice = 0;
//  		setbuf(stdin, NULL);
//  		scanf("%c",&choice);
//  		if(choice == 'N' || choice == 'n')
//  		{
//  			break;
//  		}
//     }
 

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct student
// {
//     char name[20];
//     int date;
// };

// struct Node{
//     struct student date;
//     struct Node* next;
// };

// void insert(struct Node** head_ref , struct Node** tail_ref , struct student new_date)
// {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->date = new_date;
//     new_node->next = NULL;
//     if(*head_ref == NULL)
//     {
//         *head_ref = new_node;
//         *tail_ref = new_node;
//     }
//     else
//     {
//         (*tail_ref)->next = new_node;
//         *tail_ref = new_node;
//     }
// }

// void print(struct Node* head)
// {
//     struct Node* temp = head;
//     while(temp != NULL)
//     {
//         printf("%s %d\n", temp->date.name,temp->date.date);
//         temp = temp -> next;
//     } 
//     printf("NULL\n"); 
// }

// int main()
// {
//     struct Node* head = NULL;
//     struct Node* tail = NULL;

//     struct student s;

//     while(1)
//     {
//         scanf("%s %d",s.name , &s.date);
//         insert(&head, &tail ,s);
//         print(head);
//         char ch;
//         scanf("%c", &ch);
//         if(ch == 'Y' || ch == 'y')
//         {
//             break;
//         }
//     }
//     return 0;
// }