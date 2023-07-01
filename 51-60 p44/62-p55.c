//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stddef.h>
////#pragma pack(1)//设置默认对齐数
//
//struct s3 {
//	double a;
//	char c;
//	int i;
//};
//struct s4 {
//	char c;
//	struct s3 ss3;
//	double a;
//};
//struct s5 {
//	char a;
//	struct s3 st;
//	double b;
//};
////#pragma pack()//取消设置的默认对齐数
//int main() {
//
//	struct s5 s1;
//	printf("%d\n", sizeof(s1));
//
//	
//	printf("%d\n", offsetof(struct s5,a));
//	printf("%d\n", offsetof(struct s5, st));
//	printf("%d\n", offsetof(struct s5, b));
//	return 0;
//}