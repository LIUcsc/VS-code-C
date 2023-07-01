//#include <stdio.h>
////#include <stdlib.h>
//////动态内存分配chan'su
////int main() {
////	 
////	int* p = (int*)malloc(10*sizeof(int));
////	return 0;
////}
//
////#include <stdio.h>
////
////int main()
////{
////	int a, b, c, x;
////	a = b = c = x = 1;
////	int n;
////
////	for (a = 0; a < 100; a++)
////	{
////		for (b = 0; b < 100; b++)
////		{
////			for (c = 0; c < 100; c++)
////			{
////				for (x = 0; x < 100; x++)
////				{
////					if ((a != b) && (a != c) && (a != x) && (b != c) && (b != x) && (c != x))
////					{
////						n = (a * (x * x)) + (b * x) + c;
////						if (n == 0)
////						{
////							printf("%d*%d^2+%d*%d+%d=0", a, x, b, x, c);
////						}
////					}
////				}
////			}
////		}
////	}
////	printf("无");
////	return 0;
////}
//# include <string.h>
//int fun(int n) {
//	if (n) {
//		return n * fun(n - 1);
//	}else{
//		return 1;
//	}
//	
//}
//int main()
//{
//	/*int a, b;
//	a += a -= (b = 2) * (a = 8);
//	printf("%d\n", a);*/
//	/*int a = 12, b = 3;
//	float x = 18.5, y = 4.6;*/
//	/*printf("%f\n", (float)(a*b) / 2);
//	printf("%d\n", (int)x % (int)y);*/
//	int* p;
//	int a[5] = { 4,3,6,5,1 };
//	p = a;
//	printf("%d%d\n",*p++,(*p)++);
//	return 0;
//}
//
