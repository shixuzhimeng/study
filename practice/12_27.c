// #include <stdio.h>

// int bsort(int *arr)
// {
//     for(int i = 0; i < 6; i++)
//     {
//         for(int j = 0; j < 6; j++)
//         {
//             if(arr[j] > arr[j]+1)
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp; 
//             }
//         }
//     }
// }

// int main()
// {
//     int arr = {0,5,2,4,6,7,3,10};
//     bsort(arr);
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
