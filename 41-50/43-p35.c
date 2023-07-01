#include <stdio.h>

/*
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}

//重命名函数指针类型
typedef  int (*Pfun_t)(int, int);
*/
/*
int main() {
	//指针数组
	int* arr[5];
	//函数指针
	int (*pAdd)(int, int) = &Add;
	
	//函数指针数组 , 把函数的地址存到一个数组中，那这个数组就叫函数指针数组
	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//用来存放函数的数组
	Pfun_t parr2[4] = { Add,Sub,Mul,Div };


	int i;
	for (i = 0; i < 4; i++) {
		printf("%d\n", (*parr2[i])(3, 2));//5  1  6   1
	}


	return 0;
}
*/

//char* my_strcpy(char* dest,const char* src) {
//	while (*(dest++) = *(src++)) {
//		;
//	}
//		
//	
//	return dest;
//}
//int main() {
//	char ch[5] = "abcd";
//	char ch2[5] = {'\0'};
//	int i;
//	char* (*pf)(char*,const char*) = &my_strcpy;
//	char* (*pfarr[3])(char*,const char*) = { &my_strcpy };
//	//for (i = 0; i < 5; i++) {
//	//	//printf("%c",my_strcpy(ch,ch2)[i]);
//	//	my_strcpy(ch2, ch);
//	//	//printf("%c ", ch[i]);
//	//	printf("%c ", ch2[i]);
//	//}
//	printf("ch =%s \n", ch);
//	printf("ch2 = %s \n", ch2);
//	//printf("my_strcpy = %s \n", my_strcpy(ch2, ch));
//	printf("pf = %s\n",(*pf)(ch2, ch));
//	printf("pfarr = %s\n", pfarr[0](ch2, ch));
//	
//	return 0;
//}



/*
int add(int x, int y) {
	return x + y;
}
int main() {

	//函数指针
	int x = 1, y = 2;
	int (*padd)(int, int) = &add;
	
	printf("%d\n", (padd)(2, 1));
	printf("%d\n", padd(2, 1));
	printf("%d\n", (*padd)(2, 1));
	
	
	return 0;
}
*/

/*
int main() {
	int a = 10;
	int b = 20;
	int c = add(a, b);

	//&函数名 和 函数名 都是函数的地址。
	printf("%p\n", &add);
	printf("%p\n",add);

	//存储函数的地址
	int (*padd)(int,int) = &add;

	//调用一个函数指针
	c = (*padd)(a, b);
	printf("%d\n",c);




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