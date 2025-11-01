 
 
#include <stdio.h> 
 
union data {
    void**** p;
    char arr[20];
};
typedef struct node {
    int a;
    union data b;
    void (*use)(struct node* n);
    char string[0];
} Node;
void func2(Node* node);

void func1(Node* node) {
    node->use = func2;
    printf("%s\n", node->string);
}
void func2(Node* node) {
    node->use = func1;
    printf("%d\n", ++(node->a));
}
int main() {
    const char* s = "Your journey begins here!";
    Node* P = (Node*)malloc(sizeof(Node) + (strlen(s) + 1) * sizeof(char));
    strcpy(P->string, s);
    P->use = func1;
    P->a = sizeof(Node) * 50 + sizeof(union data);
    while (P->a < 2028) {
        P->use(P);
    }
    free(P);
    return 0;
}


int fib(int n) {
    if(n == 0)
    return 0;
    if(n == 1 || n == 2)
    return 1;
    int a = 1,b = 1 , c;
    for(int i = 3;i<=n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
