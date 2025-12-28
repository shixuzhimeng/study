// #include <stdio.h>

// int main()
// {
//     int a, b;
//     char c;
//     scanf("%d %d %c", &a, &b, &c);
    
//     double price;
//     if (b == 90) price = 6.95;
//     else if (b == 93) price = 7.44;
//     else price = 7.93;
    
//     double discount;
//     if (c == 'm') discount = 0.95;
//     else discount = 0.97;
    
//     double total = a * price * discount;
//     printf("%.2f\n", total);
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, result;
//     scanf("%d", &n);
    
//     if (n > 0)
//         result = 1;
//     else if (n == 0)
//         result = 0;
//     else
//         result = -1;
    
//     printf("sign(%d) = %d\n", n, result);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double weight, height;
//     scanf("%lf %lf", &weight, &height);
    
//     double bmi = weight / (height * height);
//     printf("%.1f\n", bmi);
    
//     if (bmi > 25) {
//         printf("PANG\n");
//     } else {
//         printf("Hai Xing\n");
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int pa, pb;
//     scanf("%d %d", &pa, &pb);
    
//     int vote[3];
//     int ca = 0, cb = 0; // 评委给a和b的票数
//     for (int i = 0; i < 3; i++) {
//         scanf("%d", &vote[i]);
//         if (vote[i] == 0) ca++;
//         else cb++;
//     }
    
//     if (pa > pb) {
//         if (ca >= 1) {
//             printf("The winner is a: %d + %d\n", pa, ca);
//         } else {
//             printf("The winner is b: %d + %d\n", pb, cb);
//         }
//     } else {
//         if (cb >= 1) {
//             printf("The winner is b: %d + %d\n", pb, cb);
//         } else {
//             printf("The winner is a: %d + %d\n", pa, ca);
//         }
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int year, month, day;
//     scanf("%d/%d/%d", &year, &month, &day);

//     int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     int is_leap = 0;
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//         is_leap = 1;
//     }

//     if (is_leap) {
//         days_in_month[1] = 29;
//     }
    
//     int total_days = 0;
//     for (int i = 0; i < month - 1; i++) {
//         total_days += days_in_month[i];
//     }
//     total_days += day;
    
//     printf("%d\n", total_days);
//     return 0;
// }


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
