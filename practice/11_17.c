// #include <stdio.h>
// #include <string.h>

// void T(char* str)
// {
//     int i = 0;
//     while(str[i])
//     {
//         if(str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] += 32;
//         }
//         i++;
//     }
// }
// int main()
// {
//     char str[15] = { 0 };
//     char str2[1000010] = { 0 };

//     int i = 0;
//     int count = 0;

//     fgets(str, sizeof(str), stdin);
//     fgets(str2, sizeof(str2), stdin);

//     str[strlen(str) - 1] = '\0';
//     str2[strlen(str2) - 1] = '\0';

//     T(str);
//     T(str2);

//     int a = 0;
//     int b = 0;
//     int cp = 0;
    
//     while(str2[cp])
//     {
//         a = cp;
//         b = 0;
//         while(str2[a] == str[b] && str[b] != '\0')
//         {
//             a++;
//             b++;
//         }
//         if(str[b] == '\0' && (str2[a] == '\0' || str2[a] == ' ') && (cp == 0 || str2[cp - 1] == ' ' ))
//         {
//             count++;
//             if(count == 0)
//             {
//                 i = cp;
//             }
//         }
//         cp++;
//     }

//     if(count > 0)
//     {
//         printf("%d %d",count, i);
//     }
//     else
//     {
//         printf("-1");
//     }
    
//     return 0;

// }





// #include <stdio.h>
// int main()
// {
//     char arr[100] = { 0 };
//     char arr1[100] = { 0 };

//     fgets(arr, sizeof(arr), stdin);
//     fgets(arr1, sizeof(arr1), stdin);

//     printf("%s",arr);
//     printf("%s",arr1);


//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char* sep = "@.";
// 	char email[100000] = "zhangpengwei@bitejiuyeke.com.net";
// 	char cp[30] = {0};
// 	strcpy(cp , email);
	
// 	/*char* ret = strtok(cp , sep);
// 	printf("%s\n",ret);
	
// 	ret = strtok(NULL, sep);
// 	printf("%s\n", ret);
	
// 	ret = strtok(NULL, sep);
// 	printf("%s\n",ret);
	
// 	ret = strtok(NULL , sep)
// 	printf("%s\n",ret);*/
	
// 	char* ret = NULL;
// 	//用for循环封装strtok的分割流程
// 	for(ret = strtok(cp , sep) ; ret != NULL ; ret = strtok(NULL , sep))
// 	{
// 		printf("%s\n",ret);
// 	}
	
// 	return 0;
// }