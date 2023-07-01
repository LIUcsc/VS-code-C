//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
////int main() {
////	int i;
////	int* p = (int*)malloc(sizeof(int) * 10);
////	if (!p) {
////		printf("%s\n", strerror(errno)); 
////		return 1;
////	}
////	for (i = 0; i < 10;i++) {
////		//*(p + i) = i;
////		p[i] = i;
////	}
////	for (i = 0; i < 10; i++) {
////		printf("%d,", *(p + i));
////	}
////	free(p);
////	p = NULL;
////	return 0;
////}
//
////对非动态开辟的内存使用free释放
////int main() {
////	int a = 10;
////	int* pa = &a;
////
////	//不是动态开辟的内存不能进行释放
////	free(pa); //对非动态开辟的内存使用free释放
////	pa = NULL;
////	return 0;
////}
//
////使用free释放一块动态开辟内存的一部分
////int main() {
////	int* p = (int *)malloc(40);
////	if( p == NULL ) {
////		printf("%s\n",strerror(errno));
////		return 0;
////	}
////	int i;
////	for (i = 0; i < 10; i++) {
////		p[i] = i;
////		//p++ 不能使用自增
////	}
////	
////	for (i = 0; i < 10; i++) {
////		printf("%d ", p[i]);
////	}
////	free(p);
////	p = NULL;
////
////	return 0;
////}
//
//void getMemory(char** pp) {
//	*pp = (char*)malloc(100);
//}
//char* getMemory2() {
//	char* pp = (char*)malloc(100);
//	return pp;
//}
//void test(void) {
//	char* p = NULL;
//	//getMemory(&p);
//	p = getMemory2();
//	if (p != NULL) {
//		strcpy(p, "aaa aaaaaa");
//		printf("%s\n", p);
//	}
//	else {
//		printf("%s\n", "p = NULL");
//	}
//	free(p);
//	p = NULL;
//}
//
//int main() {
//	test();
//	return 0;
//}