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
//	//printf("%d\n", strlen(&p));		// ���ֵ
//	//printf("%d\n", strlen(&p + 1));	// ���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	////��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//48
//	printf("%d\n", sizeof(a[0][0]));	//4		��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a[0]));		//16	��һ��
//	printf("%d\n", sizeof(a[0] + 1));	//4\8	��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4		��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));		//4\8	�ڶ��еĵ�ַ 
//	printf("%d\n", sizeof(*(a + 1)));	//16    �ڶ���
//	printf("%d\n", sizeof(&a[0] + 1));	//4\8	�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16	�ڶ���
//	printf("%d\n", sizeof(*a));			//16	��һ��
//	printf("%d\n", sizeof(a[3]));		//16	�����У������Ѿ�Խ���ˣ�����sizeof��ͨ�������������С�ģ�������������Ԫ�ء�int [4]
//
//	printf("%p\n", &a[0][0]);
//	printf("%p\n",&a[0] + 1);
//
//	return 0;
//}