#include <stdio.h>
//һά����Ĵ���

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


//�����βε���ƶ��ǿ��Ե�
/*
int main() {
	int arr[10];
	int* arr2[5];
	test(arr);
	test2(arr2);
	return 0;
}
*/


//��ά����Ĵ���
//����ʡ���в���ʡ����
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
	printf("�βδ���\n");
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


//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
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

	////&������ �� ������ ���Ǻ����ĵ�ַ��
	//printf("%p\n", &add);
	//printf("%p\n",add);

	////�洢�����ĵ�ַ
	//int (*padd)(int,int) = add;

	////����һ������ָ��
	//c = (*padd)(a, b);
	//printf("%d\n",c);




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



















//int a;
//int b;
//int c;
//printf("��������������\n");
//printf("������A: ");
//scanf_s("%d", &a);
//printf("������B: ");
//scanf_s("%d", &b);
///*c = (a > b ? a : b) - (a > b ? b : a);
//if (c>10) {
//	printf("���ǵĲ���ڵ���11\n" );
//}
//else {
//	printf("���ǵĲ�С�ڵ���10\n");
//}*/
//
//
//if (c > 10) {
//	printf("���ǵĲ���ڵ���11\n");
//}
//else {
//	printf("���ǵĲ�С�ڵ���10\n");
//}

