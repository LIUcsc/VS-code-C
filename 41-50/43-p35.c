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

//����������ָ������
typedef  int (*Pfun_t)(int, int);
*/
/*
int main() {
	//ָ������
	int* arr[5];
	//����ָ��
	int (*pAdd)(int, int) = &Add;
	
	//����ָ������ , �Ѻ����ĵ�ַ�浽һ�������У����������ͽк���ָ������
	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//������ź���������
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

	//����ָ��
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

	//&������ �� ������ ���Ǻ����ĵ�ַ��
	printf("%p\n", &add);
	printf("%p\n",add);

	//�洢�����ĵ�ַ
	int (*padd)(int,int) = &add;

	//����һ������ָ��
	c = (*padd)(a, b);
	printf("%d\n",c);




	//����ָ��
	//void (*Ppr)(char*) = &print;//��������Ϊ void(*)(char*)
	//char* pc = "aaa";

	//(*Ppr)(pc);
	//(*Ppr)("abcd");

	//(void (*)()) 0  ǿ������ת�� 
	//(*(void (*)())0)(); //��0ǿ������ת��Ϊ���޷���ֵ�ĺ���ָ������ void(*)() ��0 ������������ĵ�ַ��������0���ǣ�����0��ַ���ĸú���

	void(*signal(int, void(*)(int)))(int);
	//signal��һ������������signal������2����������һ��������int���ڶ��������Ǻ���ָ�룬�ú���ָ��ָ��ĺ�������Ϊint ��������Ϊ void��signal�����ķ�������Ϊ����ָ�����ͣ�void(*)(int)
	//signal(int, void(*)(int)),Ϊһ���������������������������һ��int�ͣ�һ��void(*)(int)�ͣ��ڶ�������Ϊһ������ָ��
	//��������ķ�������Ϊ void(*)(int),����һ���˺���ָ��
	//
	// ����������⣬���ſ������������ض���typedef���� void(*)(int) ����Ϊ Pfun_t.
	// typedef void(*  Pfun_t )(int) ���� void(*)(int) ������Ϊ Pfun_t
	// 
	// ��ǰ
	// void(*signal(int, void(*)(int)))(int);
	// �򻯺�
	// Pfun_t signal(int, Pfun_t��




	return 0;
}

*/