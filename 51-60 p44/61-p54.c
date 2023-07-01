//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
////声明一个结构体变量
//struct stu {
//	char name[10];
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s2,s3;
//
//
//struct {
//	int a;
//	char b;
//}sa;
//
//struct {
//	int a;
//	char b;
//}*psa;
////int main() {
////	//psa = &sa; 不能这样使用，因为即使在定义的时候他们的类型完全一样，但是在计算机处理的时候还是会把它们当作不同的类型来处理
////
////	struct stu s1;
////	//printf("%d\n",sizeof(s1));
////	return 0;
////}
//
//
////struct Node {
////	int data;
////	struct Node* next;//一定要是指针
////};
////
////int main() {
////	
////	return 0;
////}
//
//
////typedef struct Node {
////	int data;
////	struct Node* next;
////}Node;
////
////int main() {
////
////	return 0;
////}
//
//struct t {
//	short a;
//	char b;
//};
//
// struct s {
//	 int a;
//	 double b;
//	 struct t st;
//	 char c[10];
//	 char d;
//};
//
// struct s3 {
//	 double a;
//	 char c;
//	 int i;
// };
//
// struct s4 {
//	 char c;
//	 struct s3 ss3;
//	 double a;
// };
// struct s5 {
//	 char a;
//	 struct s3 st;
//	 double b;
// };
//int main() {
//	/*struct s s1 = { 1,3.141592,{4,'B'},"CCC",'D'};*/
//	/*printf("%d\n", s1.a);
//	printf("%lf\n", s1.b);
//	printf("%d\n", s1.st.a);
//	printf("%c\n", s1.st.b);
//	printf("%s\n", s1.c);
//	printf("%c\n", s1.d);*/
//
//	struct s5 s1 ;
//	printf("%d\n",sizeof(s1));
//	struct t t1;
//	printf("%d\n", sizeof(t1));// 
//	return 0;
//}
//
