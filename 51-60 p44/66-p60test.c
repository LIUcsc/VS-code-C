#define _CRT_SECURE_NO_WARNINGS 1
#include "66-p60contact.h"
// 菜单、
void menu() {
	printf("**********************************\n");
	printf("*****          菜单          *****\n");
	printf("***** 1.add         2.del    *****\n");
	printf("***** 3.sezrch      4.modify *****\n");
	printf("***** 5.show        6.sort   *****\n");
	printf("*****        0.exit          *****\n");
	printf("**********************************\n");
}
int main() {
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do 
	{
		menu();
		printf("请选择>>");
		scanf("%d", &input);
		switch (input) {
			case ADD: {
				//添加
				AddContact(&con);
				break;
			}
			case DEL: {
				//删除
				DelContact(&con);
				break;
			}
			case SEZRCH: {
				//查找
				SezrchContact(&con);
				break;
			}
			case MODIFY: {
				//修改
				ModuleContact(&con);
				break;
			}
			case SHOW: {
				//显示
				ShowContact(&con);
				break;
			}
			case SORT: {
				//排序
				SortContact(&con);
				break;
			}
			case EXIT: {
				//销毁通讯录

				DestroyContact(&con);
				printf("退出\n");
				break;
			}
			default: {
				printf("输入错误\n");
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
//		//数列的关键是找出各项之间的规律，fz表示分子，fm表示分母
//		for (i = 0; i < N; i++)
//		{
//			t = fz;
//			fz += fm;//或者fz=fz+fm; 
//			fm = t;
//			sum += fz / fm;//或者sum=sum+fz/fm; 
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
//	printf("最大值为：%d\n", max);
//	printf("次大值为：%d\n", min);
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



