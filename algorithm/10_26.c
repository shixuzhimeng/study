// #include  <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     double a;
//     a = (1+sqrt(5))/2;
//     double c;
//     c = (1- sqrt(5))/2;
//     double f = (pow(a,n)-pow(c,n))/sqrt(5);
//     printf("%.2lf",f);
// }



// #include <stdio.h>
// int max(int a,int b)
// {
//    return a>b?a:b;
// }
// int min(int a,int b)
// {
//    return a<b?a:b;
// }
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d\n",&a,&b,&c);
//     char i,j,k;
//     scanf("%c %c %c",&i,&j,&k);

//     int arr[3];
//     arr[2] = max(a,max(b,c));
//     arr[0] = min(a,min(b,c));
//     int x,y,z;
//     x = max(a,b);
//     y = max(a,c);
//     z = max(b,c);
//     if(x==y)
//         arr[1] = z;
//     if(x==z)
//         arr[1] = y;
//     if(y==z)
//         arr[1] = x;
//     printf("%d %d %d\n",arr[i-65],arr[j-65],arr[k-65]);
//     // printf("%d %d %d\n",i-'A', j - 'A', k -'A');
    
    
//     return 0;
// }




#include <stdio.h>
#include <string.h>
#include <math.h>

struct student
{
    char name[10];
    int chinese;
    int math;
    int english;
    int total ; 
};

int main()
{
    struct student Student[1010];
    int N;
    scanf("%d",&N);

    for(int i = 0;i<N;i++)
    {
        scanf("%s %d %d %d",Student[i].name, &Student[i].chinese, &Student[i].math, &Student[i].english);
        Student[i].total = Student[i].chinese + Student[i].math + Student[i].english;
    }
    for(int i = 0;i<N;i++)
    {
        for(int j = i + 1;j<N;j++)
        {
            if(abs(Student[i].chinese-Student[j].chinese)<=5)
            {
                if(abs(Student[i].math-Student[j].math)<=5)
                {
                    if(abs(Student[i].english-Student[j].english)<=5 && abs(Student[i].total-Student[j].total)<=10)
                    {
                            printf("%s %s\n",Student[i].name,Student[j].name);
                    }
                    
                }
            }
        }
    }
}