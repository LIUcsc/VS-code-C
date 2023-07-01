//#include <stdio.h>
//
////枚举常量,默认初始值为 0，1，2......
//enum Sex {//枚举
//	 MALE,
//	 FEMALE = 9,
//	 SECRET
//};
//enum Colo {//枚举
//	red,//0
//	green,//1
//	blue//2
//};
//
//
//union Un {//联合体并且 
//	char c[5];
//	int a;
//};
//int check_sys() {
//	int a = 1;
//	return *((char*)&a);
//}
//int check_sys2() {
//	union Un {//联合体
//		char c;
//		int a;
//	};
//	union Un a1;
//	a1.a = 1;
//	return a1.c;
//}
//int main() {
//	//枚举的值只能是定义时设置的值
//	/*enum Sex s = MALE;
//	enum Colo c = blue;*/
//
//	union Un a1;
//	printf("%d\n", sizeof(a1));
//	/*a1.a = 1;
//	if (a1.c) {
//		printf("小端%d\n", a1.c);
//		
//	}
//	else {
//		printf("大端\n");
//	}*/
//	/*int a = check_sys();
//	
//	if (a) {
//		printf("小端%d\n",a);
//		
//	}
//	else {
//		printf("大端\n");
//	}*/
//	return 0; 
//}