//#include <stdio.h>
//
////ö�ٳ���,Ĭ�ϳ�ʼֵΪ 0��1��2......
//enum Sex {//ö��
//	 MALE,
//	 FEMALE = 9,
//	 SECRET
//};
//enum Colo {//ö��
//	red,//0
//	green,//1
//	blue//2
//};
//
//
//union Un {//�����岢�� 
//	char c[5];
//	int a;
//};
//int check_sys() {
//	int a = 1;
//	return *((char*)&a);
//}
//int check_sys2() {
//	union Un {//������
//		char c;
//		int a;
//	};
//	union Un a1;
//	a1.a = 1;
//	return a1.c;
//}
//int main() {
//	//ö�ٵ�ֵֻ���Ƕ���ʱ���õ�ֵ
//	/*enum Sex s = MALE;
//	enum Colo c = blue;*/
//
//	union Un a1;
//	printf("%d\n", sizeof(a1));
//	/*a1.a = 1;
//	if (a1.c) {
//		printf("С��%d\n", a1.c);
//		
//	}
//	else {
//		printf("���\n");
//	}*/
//	/*int a = check_sys();
//	
//	if (a) {
//		printf("С��%d\n",a);
//		
//	}
//	else {
//		printf("���\n");
//	}*/
//	return 0; 
//}