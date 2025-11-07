// #include <stdio.h>
// #define base_hour 40
// #define base_pay 10.0
// #define overtime_rate 1.5
// #define tax_rate1 0.15 
// #define tax_rate2 0.20 
// #define tax_rate3 0.25
// #define tax_bracket1 300
// #define tax_bracket2 150
// int main()
// {
//     float hours,grosspay,tax,netpay;
//     printf("输入一周工作时间：");
//     scanf("%f",&hours);
//     if(hours<=base_hour)
//     {
//         grosspay = hours * base_pay;
//     }
//     else
//     {
//         grosspay = base_hour *base_pay + (hours - base_hour)*base_pay*overtime_rate;
//     }
//     if(grosspay <= tax_bracket1)
//     {
//         tax = grosspay * tax_rate1;
//     }
//     else if(grosspay<=tax_bracket1+tax_bracket2)
//     {
//         tax=tax_bracket1*tax_rate1+(grosspay - tax_bracket1)*tax_rate2;        
//     }
//     else
//     {
//         tax = tax_bracket1*tax_rate1+tax_bracket2*tax_rate2+(grosspay-tax_bracket1-tax_bracket2)*tax_rate3;
//     }
//     netpay = grosspay -tax;
//     printf("工资总额：%.2f",grosspay);
//     printf("税收：%.2f",tax);
//     printf("净收入：%.2f",netpay);
//     return 0;

// }

// #include <stdio.h>

// void threedoubles(double *a,double *b,double *c)
// {
//     double tempA = *a;
//     double tempB = *b;
//     double tempC = *c;
//     if(tempA <= tempB && tempA <= tempC)
//     *a = tempA;
//     else if(tempB <= tempA && tempB <= tempC)
//     *a = tempB;
//     else
//     *a = tempC;
//     if(tempA >= tempB && tempA >= tempC)
//     *c = tempA;
//     else if(tempB >= tempA && tempB >= tempC)
//     *c = tempB;
//     else 
//     *c = tempC;
//     *b = tempA + tempB + tempC - *a - *c;
// }
// int main()
// {
//     double num1,num2,num3;
//     scanf("%lf %lf %lf",&num1,&num2,&num3);
//     threedoubles(&num1,&num2,&num3);
//     printf("%.2lf %.2lf %.2lf",num1,num2,num3);
// }

// #include <stdio.h>
// int Fib(int n)
// {
// 	int a = 1;
// 	int b = 1;
// 	int c = 0;
// 	while(n>=3)
// 	{
// 		c = a+b;
// 		a = b;
// 		b = c;
// 		n--;
// 	}
// 	return c;
// }
// int main()
// {
// 	int n = 0;
// 	scanf("%d",&n);
// 	int ret = Fib(n);
// 	printf("%d",ret);
// 	return 0;
// }


// #include <stdio.h>
// void copy_arr(double target[] , const double source[] , int n)
// {
//     for(int i = 0;i<n;i++)
//     {
//         target[i] = source[i];
//     }
// }
// void copy_ptr(double *target , const double *source , int n)
// {
//     for(int i = 0;i<n;i++)
//     {
//         *target = *source;
//         target++;
//         source++;
//     }
// }
// void copy_ptrs(double *target , const double *source_start , const double *source_end)
// {
//     while(source_start < source_end)
//     {
//         *target = *source_start;
//         target++;
//         source_start++;
//     }
// }
// int main(void)
// {
//     double source[5] = {1.1 , 2.2 , 3.3 , 4.4 , 5.5};
//     double target1[5];
//     double target2[5];
//     double target3[5];
//     copy_arr(target1 , source , 5);
//     copy_ptr(target2 , source , 5);
//     copy_ptrs(target3 , source , source + 5);
//     for(int i = 0;i<5 ; i++)
//     {
//         printf("%.2lf ",target1[i]);
//     }
//     printf("\n");
//     for(int i = 0;i<5 ; i++)
//     {
//         printf("%.2lf ",target2[i]);
//     }
//     printf("\n");
//     for(int i = 0;i<5 ; i++)
//     {
//         printf("%.2lf ",target3[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int findmaxIndex(double arr[] , int size)
// {
//     if(size <= 0)
//     {
//         return -1;
//     }
//     int maxIndex = 0;
//     for(int i = 1;i<size;i++)
//     {
//         if(arr[i] >arr[maxIndex])
//         {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
// int main()
// {
//     double arr[1000010] = {3.5 , 1.2 , 7.8 , 5.6 , 2.3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int maxIndex = findmaxIndex(arr,size);
//     printf("%d",maxIndex);
//     return 0;
// }

// #include <stdio.h>
// double findmaxmin(double arr[] , int size)
// {
//     if(size <= 0)
//     {
//         return 0.0;
//     }
//     double maxVal = arr[0];
//     double minVal = arr[0];
//     for(int i = 1;i<size; i++)
//     {
//         if(arr[i]>maxVal)
//             maxVal = arr[i];
//         if(arr[i]<minVal)
//             minVal = arr[i]; 
//     }
//     printf("%lf",maxVal);
//     printf("%lf",minVal);
//     return maxVal - minVal;
// }

// int main()
// {
//     double arr[] = {3.5 , 1.2 , 7.8 , 5.6 , 2.3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     double diff = findmaxmin(arr,size);
//     printf("%lf",diff);
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int word = 0;
//     int upper = 0;
//     int lower = 0;
//     int punct = 0;
//     int digit = 0;
//     int in_word = 0;
//     int c;
//     while((c = getchar()) != EOF)
//     {
//         if(c == ' ' || c == '\t' || c == '\n')
//         in_word = 0;
//         else if(c >= 'A' && c <= 'Z')
//         {
//             upper++;
//             if( c != in_word)
//             {
//                 word++;
//                 in_word = 1;
//             }
//         }
//         else if(c >= 'a' && c <= 'z')
//         {
//             lower++;
//             in_word = 1;
//         }
//         else if(c >= '0' && c <= '9')
//         {
//             digit++;
//             in_word == 0;
//         }
//         else if(c >= 33 && c <= 126)
//         {
//             punct++;
//             in_word = 0;
//         }
//     }
//     printf("单词数%d\n",word);
//     printf("大写字母%d\n",upper);
//     printf("小写字母%d\n",lower);
//     printf("标点数%d\n",punct);
//     printf("数字个数%d\n",digit);
//     return 0;
// }