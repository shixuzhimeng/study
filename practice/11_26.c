// #include <stdio.h>

// #define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT"\n" , N)

// int main()
// {
// 	int a  = 10;
// 	PRINT(a,"%d");
	
// 	float b = 20;
// 	PRINT(b, "%lf");
	
// 	return 0;
	
// }



// #include <stdio.h>

// #define CAT(Class,Num) Class##Num

// int main()
// {
//     int Class1 = 120;
//     printf("%d\n", CAT(Class,1));
// }

// #include <stdio.h>

// #define MAX(a,b) ((a) > (b) ? (a) : (b))

// int main()
// {
// 	int a = 5;
// 	int b = 4;
// 	int m = MAX(a++,b++);
// 	//int n = ((a++) > (b++) ? (a++) : (b++));
	
// 	printf("%d\n", m);
// 	printf("%d %d\n",a,b);
	
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define MALLOC(num,type) (type*)malloc((num)*sizeof(type))

// int main()
// {
//     int *p = MALLOC(10,int);
//     //int* p = (int*)malloc((10)*sizeof(int));

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
// #if 1
//     printf("haihai\n");

// #endif

//     return 0;
// }

// #ifndef __TEST_H__
// #define __TEST_H__
// //头文件的内容
// // {
    
// // }
// #endif


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *fp = fopen("test2.txt","wb");
    
//     char arr[1000010] = "哇哈哈wahaha";
//     printf("%ld\n", strlen(arr));
//     printf("%ld\n", sizeof(arr));

//     fwrite(arr, strlen(arr), 1, fp);
    
//     fclose(fp);
//     return 0;
// }