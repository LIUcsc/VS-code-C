#include <stdio.h>
//一维数组的传参

/*
void test(int arr[]) {

}
void test(int arr[10]) {

}
void test(int *arr) {

}
void test2(int *arr[5]) {

}
void test2(int* *arr) {

}
*/


//上面形参的设计都是可以的
/*
int main() {
	int arr[10];
	int* arr2[5];
	test(arr);
	test2(arr2);
	return 0;
}
*/


//二维数组的传参
//可以省略行不能省略列
/*
void test1(int arr[3][5]) {
	printf("1\n");

}
void test2(int arr[][5]) {
	printf("2\n");
}
void test3(int(*arr)[5]) {
	printf("3\n");
}

void test4(int** arr) {
	printf("形参错误\n");
}
int main() {
	int arr[3][5] = { 0 };
	test3(arr);
	return 0;
}
*/
//void test(int** arr) {
//	printf("%d\n",**arr);
//}
//void test2(char** ch) {
//	printf("%c\n", **ch);
//}

//int main() {
//	/*int a = 5 ;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	test(&pa);*/
//
//	char ch = 'a';
//	char* pch = &ch;
//	char** ppch = &pch;
//	test2(ppch);
//	test2(&pch);
//	return 0;
//}


//void test3(int **p) {
//	printf("%d\n",**p);
//}
//int main() {
//	int tr = 3;
//	int* ptr = &tr;
//	int** pp = &ptr;
//	test3(&ptr);
//	test3(pp);
//	int* arr[10] = { &tr };
//	test3(arr);
//
//	return 0;
//}


//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//int add(int x,int y) {
//	return x + y;
//}
//
//void print(char* p) {
//	printf("%s\n", p);
//}
/*
int main() {
	//int a = 10;
	//int b = 20;
	//int c = add(a, b);

	////&函数名 和 函数名 都是函数的地址。
	//printf("%p\n", &add);
	//printf("%p\n",add);

	////存储函数的地址
	//int (*padd)(int,int) = add;

	////调用一个函数指针
	//c = (*padd)(a, b);
	//printf("%d\n",c);




	//函数指针
	//void (*Ppr)(char*) = &print;//它的类型为 void(*)(char*)
	//char* pc = "aaa";

	//(*Ppr)(pc);
	//(*Ppr)("abcd");

	//(void (*)()) 0  强制类型转换 
	//(*(void (*)())0)(); //把0强置类型转换为，无返回值的函数指针类型 void(*)() ，0 就是这个函数的地址，解引用0就是，调用0地址处的该函数
	
	void(*signal(int, void(*)(int)))(int);
	//signal是一个函数声明，signal函数有2个参数，第一个参数是int，第二个参数是函数指针，该函数指针指向的函数参数为int 返回类型为 void，signal函数的返回类型为函数指针类型，void(*)(int)
	//signal(int, void(*)(int)),为一个函数，这个函数有两个参数，一个int型，一个void(*)(int)型，第二个参数为一个函数指针
	//这个函数的返回类型为 void(*)(int),返回一个人函数指针
	//
	// 这样不好理解，我门可以利用类型重定义typedef，将 void(*)(int) 命名为 Pfun_t.
	// typedef void(*  Pfun_t )(int) ，将 void(*)(int) 重命名为 Pfun_t
	// 
	// 简化前
	// void(*signal(int, void(*)(int)))(int);
	// 简化后
	// Pfun_t signal(int, Pfun_t）

	
	
	
	return 0;
}

*/



















//int a;
//int b;
//int c;
//printf("请输入两个整数\n");
//printf("请输入A: ");
//scanf_s("%d", &a);
//printf("请输入B: ");
//scanf_s("%d", &b);
///*c = (a > b ? a : b) - (a > b ? b : a);
//if (c>10) {
//	printf("他们的差大于等于11\n" );
//}
//else {
//	printf("他们的差小于等于10\n");
//}*/
//
//
//if (c > 10) {
//	printf("他们的差大于等于11\n");
//}
//else {
//	printf("他们的差小于等于10\n");
//}

