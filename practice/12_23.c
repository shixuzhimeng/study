#include <stdio.h>

struct student 
{
    char name[20];
    int num;
};

struct Node{
    struct student data;
    struct Node* next;
};

void insert(struct Node** head, struct student new_data)
{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = new_data;
    new->next = head;
    head = new;
}

int main() {
    struct Node* head = NULL; //初始化空链表  

    struct student s;
    while(1)
    {
        scanf("%s %d %d",s.name , &s.num , &s.math);
        insert(&head, s);
        printf("continue(Y/N)?\n");
        char choice = 0;
 		setbuf(stdin, NULL);
 		scanf("%c",&choice);
 		if(choice == 'N' || choice == 'n')
 		{
 			break;
 		}
    }
 

    return 0;
}
