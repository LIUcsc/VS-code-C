//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main() {
//	//int a[] = { 1,2,3,4 };
//	//printf("1=%d\n", sizeof(a));		//16
//	//printf("2=%d\n", sizeof(a + 0));	//4\8
//	//printf("3=%d\n", sizeof(*a));		//4
//	//printf("4=%d\n", sizeof(a + 1));	//4\8
//	//printf("5=%d\n", sizeof(a[1]));		//4
//	//printf("6=%d\n", sizeof(&a));		//4\8
//	//printf("7=%d\n", sizeof(*&a));		//16
//	//printf("8=%d\n", sizeof(&a + 1));	//4\8
//	//printf("9=%d\n", sizeof(&a[0]));	//4\8
//	//printf("0=%d\n", sizeof(&a[0] + 1));//4\8
//	//
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));		//6
//	//printf("%d\n", sizeof(arr + 0));	//4\8
//	//printf("%d\n", sizeof(*arr));		//1
//	//printf("%d\n", sizeof(arr[1]));	//1
//	//printf("%d\n", sizeof(&arr));		//4\8
//	//printf("%d\n", sizeof(&arr + 1));	//4\8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4\8
//	//
//
//	//printf("%d\n", strlen(arr));         //随机值
//	//printf("%d\n", strlen(arr + 0));     //随机值
//	////printf("%d\n", strlen(*arr));        //err
//	////printf("%d\n", strlen(arr[1]));      //err
//	//printf("%d\n", strlen(&arr));        //随机值
//	//printf("%d\n", strlen(&arr + 1));    //随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1)); //随机值-1
//
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));		//7
//	printf("%d\n", sizeof(arr + 0));	//4\8  是首元素的地址
//	printf("%d\n", sizeof(*arr));		//1
//	printf("%d\n", sizeof(arr[1]));		//1
//	printf("%d\n", sizeof(&arr));		//4\8
//	printf("%d\n", sizeof(&arr + 1));	//4\8
//	printf("%d\n", sizeof(&arr[0] + 1));//4\8
//
//
//	printf("%d\n", strlen(arr));		//6
//	printf("%d\n", strlen(arr + 0));	//6
//	//printf("%d\n", strlen(*arr));		//err
//	//printf("%d\n", strlen(arr[1]));	//err
//	printf("%d\n", strlen(&arr));		//6 
//	printf("%d\n", strlen(&arr + 1));   //随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}