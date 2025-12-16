// #include <stdio.h>
// #include <stdlib.h>

// struct student{
//     char name[10];
//     int num;
// };


// struct Node{
//     struct student date;
//     struct Node* next;  
// };

// void insert(struct Node** head , struct student new_date)
// {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->date = new_date;
//     new_node->next = *head;
//     *head = new_node; 
// }

// int main()
// {
//     struct Node* head = NULL;

//     struct student s;
    
//     while(1)
//     {
//         scanf("%s %d",s.name ,&s.num);
//         insert(&head, s);
//         char ch;
//         scanf(" %c", &ch);
//         if(ch == 'n' || ch == 'N')
//         {
//             break;
//         }
//     }
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

// void insert(struct Node** head , struct Node** tail , struct student new_date)
// {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->date = new_date;
//     new_node->next = NULL;
    
//     if(*head == NULL)
//     {
//         *head = new_node;
//         *tail = new_node;
//     }
//     else
//     {
//         (*tail)->next = new_node;
//         *tail = new_node;
//     }
// }

// void print(struct Node* head)
// {
//     struct Node* temp = head;
//     while(temp != NULL)
//     {
//         printf("%s %d\n", temp->date.name, temp->date.num);
//         temp = temp->next;
//     }
//     printf("jieshu\n");
// }

// int main()
// {
//     struct Node* head = NULL;
//     struct Node* tail = NULL;

//     struct student s;
//     while(1)
//     {
//         scanf("%s %d",s.name, &s.num);
//         insert(&head , &tail , s);
//         char ch;
//         scanf(" %c",&ch);
//         if(ch == 'N' || ch == 'n')
//         {
//             break;
//         }
//     }
//     print(head);
//     return 0;
// }


