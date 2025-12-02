// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     char arr[2511] =  { 0 };
//     int count11_left = 0;
//     int count11_right = 0;
//     int count21_left = 0;
//     int count21_right = 0;
//     int i = 0;

//     while(1)
//     {
//         char ch;
//         //ch = getchar();
//         scanf("%c",&ch);
//         if(ch == 'E')
//         {
//             break;
//         }
        
//         arr[i] = ch;
//         i++;
//     }


//     for(int i = 0; i < strlen(arr);i++)
//     {
//         if(arr[i] == 'W')
//         count11_left++;
//         //printf("%d",count11_left);
//         if(arr[i] == 'L')
//         count11_right++;
//         if((count11_left >= 11  || count11_right >= 11) && abs(count11_left - count11_right) >= 2)
//         {
//             printf("%d:%d",count11_left,count11_right);
//             printf("\n");
//             count11_left = 0;
//             count11_right = 0;
//         }
//     }
//     printf("%d:%d",count11_left,count11_right);
//     printf("\n");

//     printf("\n");

//     for(int i = 0; i < strlen(arr);i++)
//     {
//         if(arr[i] == 'W')
//         count21_left++;
//         if(arr[i] == 'L')
//         count21_right++;
//         if((count21_left >= 21  || count21_right >= 21) && abs(count21_left - count21_right) >= 2)
//         {
//             printf("%d:%d",count21_left,count21_right);
//             printf("\n");
//             count21_left = 0;
//             count21_right = 0;
//         }
//     }
//     printf("%d:%d",count21_left,count21_right);
//     printf("\n");
    
    

//     return 0;

// }

#include <stdio.h>
int main()
{


    
    return 0;
}