#include <stdio.h>
void menu() {
	printf("*******************************************\n");
	printf("******* 1.add ************ 2.sub **********\n");
	printf("******* 3.mul ************ 4.div **********\n");
	printf("******* 5.xor ************ 0.exit *********\n");
	printf("*******************************************\n");
}
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int Xor(int x, int y) {
	return x ^ y;
}
void input_xy(int* x,int*y){
	printf("Ҫ�������>>");
	scanf_s("%d %d", x, y);
}
char fun_c(int input) {
	char c;
	switch(input){
		case 1: {
			c = '+';
			break;
		}
		case 2: {
			c = '-';
			break;
		}
		case 3: {
			c = '*';
			break;
		}
		case 4: {
			c = '/';
			break;
		}
		case 5: {
			c = '^';
			break;
		}
	}
	return c;
}
#define Max 6

 



//int main() {
//	int x, y;
//	int input;
//	
//	char c;
//	int (*ADD)(int, int) = &add;
//	int (*Padd) (int x, int y) = &add;
//	int (*pfarr[Max])(int, int) = {0,Padd,&sub,&mul,&div,&Xor};
//	int num;
//	
//	
//	do{
//		menu();
//		printf("������>>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= Max) {
//			printf("Ҫ�������>>");
//			scanf_s("%d %d", &x, &y);
//			c = fun_c(input);
//			num = (*pfarr[input])(x, y);
//			printf("%d%c%d=%d\n", x,c, y, num);
//		}
//		else if(0 != input) { 
//			printf("�������");
//		}
//	} while (input);  
//
//	return 0;
//}

void Calc(int input, int (*pfun)(int, int)) {
	int x = 0, y = 0;
	int c = fun_c(input);
	printf("Ҫ�������>>");
	scanf_s("%d %d", &x, &y);
	printf("%d%c%d=%d\n", x,c, y, (*pfun)(x, y));
}


int main() {
	int input;
	
	int (*parr[Max])(int, int) = { 0,&add,&sub,&mul,&div,&Xor };
	do
	{
		menu();
		
		printf("������>>");
		scanf_s("%d", &input);
		switch (input) {
			case 1: {
				Calc(input,parr[input]);
				break;
			}
			case 2: {
				Calc(input, parr[input]);
				break;
			}
			case 3: {
				Calc(input, parr[input]);
				break;
			}
			case 4: {
				Calc(input, parr[input]);
				break;
			}
			case 0: {
				break;
			}
			default:{
				printf("�������\n");
				break;
			}
		}
	
	} while (input);
	printf("�˳�");
	return 0;
}
//
//int main() {
//
//	int arr[2] = {0};
//	int(*pa)[2] = &arr; //����ָ��
//	int (*Add)(int, int) = &add;//����ָ��
//	int (*pfarr[6])(int, int) = { 0, add,sub,mul,div,Xor };//����ָ������
//	int(*(*ppfarr)[6])(int, int) = &pfarr;//ָ����ָ�������ָ��
//	//ppfarrָ�����һ������ָ�룬ָ��ָ���������6��Ԫ�أ�
//	//ָ��������ÿ��Ԫ����һ������ָ�� int(*)(int,int)
//
//	return 0;
//}
//
//void test(void(*pr)(char* ch)) {
//	printf("test\n");
//	char cht[] = "abcd";
//	pr(cht);
//}
//void print(char* ch) {
//	printf("hehe:%s\n", ch);
//}
//int main() {
//	test(print);
//	return 0;
//
//}
//
//void BubbleSort(int* arr, int sz) {
//	int n = 0, x,i,y;
//	int o = 0;
//	for (x = sz - 1; x > 1;x--) {
//		for (i = 0; i < x;i++) {
//			if (arr[i]>arr[i+1]) {
//				n = 1;
//				y = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = y;
//				o++;
//			}
//		}
//		if (n == 0) {
//			break;
//		}
//		n = 0;
//	}
//	printf("%d\n", o);
//	
//}
//
//int main() {
//	//ð������
//	int arr[10] = { 6,9,5,2,8,1,4,7,10,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}