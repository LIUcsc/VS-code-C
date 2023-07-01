//#include <stdio.h>
//#include <string.h>
//int main() {
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));		//4\8
//	//printf("%d\n", sizeof(p + 1));	//4\8
//	//printf("%d\n", sizeof(*p));		//1
//	//printf("%d\n", sizeof(p[0]));	//1
//	//printf("%d\n", sizeof(&p));		//4\8
//	//printf("%d\n", sizeof(&p + 1));	//4\8
//	//printf("%d\n", sizeof(&p[0] + 1));//4\8 
//
//	//printf("%d\n", strlen(p));		//6
//	//printf("%d\n", strlen(p + 1));	//5
//	////printf("%d\n", strlen(*p));		// err
//	////printf("%d\n", strlen(p[0]));	//err
//	//printf("%d\n", strlen(&p));		// 随机值
//	//printf("%d\n", strlen(&p + 1));	// 随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	////二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//48
//	printf("%d\n", sizeof(a[0][0]));	//4		第一行第二个元素
//	printf("%d\n", sizeof(a[0]));		//16	第一行
//	printf("%d\n", sizeof(a[0] + 1));	//4\8	第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4		第一行第二个元素
//	printf("%d\n", sizeof(a + 1));		//4\8	第二行的地址 
//	printf("%d\n", sizeof(*(a + 1)));	//16    第二行
//	printf("%d\n", sizeof(&a[0] + 1));	//4\8	第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16	第二行
//	printf("%d\n", sizeof(*a));			//16	第一行
//	printf("%d\n", sizeof(a[3]));		//16	第四行，这里已经越界了，但是sizeof是通过类型来计算大小的，不会访问里面的元素。int [4]
//
//	printf("%p\n", &a[0][0]);
//	printf("%p\n",&a[0] + 1);
//
//	return 0;
//}