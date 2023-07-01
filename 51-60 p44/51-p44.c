//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////#include <amth.h>
//
//void hc(char c[]) {
//	/*逆序字符串*/
//	assert(c);
//	/*int len = strlen(c);
//	char tmp;
//	int x;
//	for (x = 0; x < strlen(c) / 2;x++) {
//		len--;
//		tmp = c[x];
//		c[x] = c[len];
//		c[len] = tmp;
//	}*/
//	int left = 0;
//	int reght = strlen(c) - 1;
//	char tmp;
//	while (left<reght) {
//		tmp = c[left];
//		c[left] = c[reght];
//		c[reght] = tmp;
//		left++;
//		reght--;
//	}
//}
//int Sum(int n,int x) {
//	int sum =n, nn=n,i;
//	for (i = 1; i < x; i++) {
//		nn += n * 10;
//		n *= 10;
//		sum += nn;
//	}
//	return sum;
//}
//
//void Print_Diamond(int n) {
//	//打印菱形
//	int x,y,z=n;
//	for (x = 0; x <= n/2;x++) {//控制输出多少行
//
//		for (y = 0; y <n-x;y++) {//控制每行输出多少个空格
//			printf(" ");
//		}
//		printf("*");
//		for (z = 0; z < 2 * x;z++) {//控制每行输出多少个星
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (x = n / 2; x > 0; x--) {//控制输出多少行
//
//		for (y = 0; y < n-x+1; y++) {//控制每行输出多少个空格
//			printf(" ");
//		}
//		for (z = 0; z < x*2-1;z++) {//控制每行输出多少个星
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//
//
//int NumB(int n) {
//	//求水仙花数
//	/*int  b = n, i = 0,numarr[10] = { 0 };
//
//	long num = 0;
//	while (b) {
//		numarr[i] = b % 10;
//		b = b / 10;
//		num += numarr[i] * numarr[i] * numarr[i];
//		i++;
//	}
//	if (num == n) {
//		return 1;
//	}*/
//	//求自幂数
//	long nn = 1,num = 0;
//	int  b = n, i = 0;
//	int x;
//	long arr[10] = { 0 };
//	while (b/=10) {
//		i++;
//	}
//	b = n;
//	/*while (b) {
//		num += pow(b % 10, i);
//		b /= 10;
//	}*/
//	while (b) {
//		for (x = 0; x <= i; x++) {
//			nn *= b % 10;
//		}
//		b /= 10;
//		num += nn;
//		nn = 1;
//	}
//	
//	/*for (x = 0; x < 10; x++) {
//		for (y = 0; y < i; y++) {
//			if (arr[x]==0) {
//				break;
//			}
//			nn *= arr[x];
//		}
//		num += nn;
//		nn = 1;
//	}*/
//	if (num == n) {
//		return 1;
//	}
//
//
//	return 0;
//}
//
//void Print_Diamond2(int n) {
//	int x, y;
//	for (x = 0; x <= n / 2; x++) {
//		for (y = 0; y < n - x; y++) {
//			printf(" ");
//		}
//		for (y = 0; y < 2 * x + 1; y++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (x = n / 2; x > 0; x--) {
//		for (y = 0; y < n - x + 1; y++) {
//			printf(" ");
//		}
//		for (y = 0; y < 2 * x - 1; y++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//void Print_Diamond3(int n) {
//	int x, y;
//	for (x = 0; x < n / 2+1;x++) {
//		for (y = 0; y < n - x-1;y++) {
//			printf(" ");
//		}
//		for (y = 0; y < 2 * x + 1;y++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (x = n / 2; x >0 ;x--) {
//		for (y =0 ; y < n-x ;y++) {
//			printf(" ");
//		}
//		for (y = 0; y<2*x-1;y++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	char ch[] = "abc defg";
//	int i;
//	//for (i = 0; i <= 99900000; i++) {
//	//	//求水仙花数
//	//	if (NumB(i) == 1) {
//	//		printf(" %d ",i );
//	//	}
//	//}
//	Print_Diamond3(10);
//	
//	
//	return 0;
//}