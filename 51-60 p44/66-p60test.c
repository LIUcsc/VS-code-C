#define _CRT_SECURE_NO_WARNINGS 1
#include "66-p60contact.h"
// �˵���
void menu() {
	printf("**********************************\n");
	printf("*****          �˵�          *****\n");
	printf("***** 1.add         2.del    *****\n");
	printf("***** 3.sezrch      4.modify *****\n");
	printf("***** 5.show        6.sort   *****\n");
	printf("*****        0.exit          *****\n");
	printf("**********************************\n");
}
int main() {
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��>>");
		scanf("%d", &input);
		switch (input) {
			case ADD: {
				//���
				AddContact(&con);
				break;
			}
			case DEL: {
				//ɾ��
				DelContact(&con);
				break;
			}
			case SEZRCH: {
				//����
				SezrchContact(&con);
				break;
			}
			case MODIFY: {
				//�޸�
				ModuleContact(&con);
				break;
			}
			case SHOW: {
				//��ʾ
				ShowContact(&con);
				break;
			}
			case SORT: {
				//����
				SortContact(&con);
				break;
			}
			case EXIT: {
				//����ͨѶ¼

				DestroyContact(&con);
				printf("�˳�\n");
				break;
			}
			default: {
				printf("�������\n");
				break;
			}

		}

	} while (input);
	return 0;
}



//#include <stdio.h>
//
//int main() {
//
//
//	float sum = 0;
//	int k;
//	int x, y, n = 20;
//	x = 2;
//	y = 1;
//	while (n--) 
//	{
//		sum += x / y;
//		k = x;
//		x = x + y;
//		y = k;
//	}
//	printf("%.2f\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#define N 20
//int main()                                                               
//{
//	int i;
//	float sum = 0, fz = 1, fm = 1, t;                                              
//		//���еĹؼ����ҳ�����֮��Ĺ��ɣ�fz��ʾ���ӣ�fm��ʾ��ĸ
//		for (i = 0; i < N; i++)
//		{
//			t = fz;
//			fz += fm;//����fz=fz+fm; 
//			fm = t;
//			sum += fz / fm;//����sum=sum+fz/fm; 
//		}                                                               
//			printf("sum=%.2f\n", sum);
//		return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//int main() {
//
//	int arr[20] = { 0 };
//	int n = 20,i;
//	int max = 0, min = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", arr + i);
//		if (*(arr + i) > max) max = *(arr + i);
//		if ((*(arr + i) > min)&&(*(arr + i) < max) ) min = *(arr + i);
//	}
//	printf("���ֵΪ��%d\n", max);
//	printf("�δ�ֵΪ��%d\n", min);
//
//	return 0;
//}

//int fun(int n) {
//	int i;
//	for (i = 2; i < n;i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int i ;
//	for (i = 2; i < 10; i++)
//	{
//		if (fun(i)) {
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}



