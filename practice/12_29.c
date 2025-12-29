// #include <stdio.h>

// struct student
// {
//     int data;
//     char name;
// };

// struct Node{
//     struct student data;
//     struct Node* next;
// };

// void insert(struct Node **head , struct student data)
// {
//     struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//     new->data = data;
//     new->next = head;
//     head = new;
// }

// int main() {
//     struct Node* head = NULL; 

//     struct student s;
//     while(1)
//     {
//         scanf("%c %d",&s.name ,&s.data);
//         insert(&head, s);
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

#include <stdio.h>

struct student
{
    char name[10];
    int data;
};

struct Node{
    struct student data;
    struct Node *next;
};

void insert(struct Node **head , struct Node **tail ,struct student data)
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    new->next = NULL;
    if(head == NULL)
    {
        *head = new;
        *tail = new;
    }
    else
    {
        (*tail)->next = new;
        *tail = new;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* tail = NULL;

    struct student s;

    while(1)
    {
        scanf("%s %d",s.name , &s.data);
        insert(&head, &tail ,s);
        print(head);
        char ch;
        scanf("%c", &ch);
        if(ch == 'Y' || ch == 'y')
        {
            break;
        }
    }
    return 0;
}
