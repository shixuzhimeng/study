// #include <stdio.h>
// #include <stdlib.h>

// struct student
// {
//     char name[20];
//     int num;
// };


// struct Node{
//     struct student date;
//     struct Node* next;
// };

// void insert(struct Node** head , struct student new_date)
// {
//     struct Node* new_node  = (struct Node*)malloc(sizeof(struct Node));
//     new_node -> date = new_date;
//     new_node -> next = *head;
//     *head = new_node;
// }

// int main()
// {
//     struct student s;
//     struct Node* head;


//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct student
// {
//     char name[20];
//     int num;
// };

// struct Node{
//     struct student date;
//     struct Node* next;
// };

// void insert(struct Node** head , struct Node** tail , struct student date)
// {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node -> date = date;
//     new_node -> next = NULL;
//     if(*head != NULL)
//     {
//         *head = new_node;
//         *tail = new_node;
//     }
//     else
//     {
//         (*tail) -> next = new_node;
//         *tail = new_node;
//     }
// }

// int main()
// {
//     struct Node* head = NULL;
//     struct Node* tail = NULL;
    
//     struct student s;

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