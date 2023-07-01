////#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
////int main() {
////	int x, y;
////	for (x = 1; x <= 5; x++) {
////		for (y = 1; y <= 5 - x;y++) {
////			printf(" ");
////		}
////		for (y = x; y > 0;y--) {
////			printf("* ");
////		}
////		printf("\n");
////	}
////	for (x = 1; x <= 4; x++) {
////		for (y = x; y > 0; y--) {
////			printf(" ");
////		}
////		for (y = 1; y <= 5 - x; y++) {
////			printf("* ");
////		}
////		
////		printf("\n");
////	}
////
////	
////	return 0;
////}
//
//
//#include <stdio.h>
//#define X 100
//#define Y 20
//int main() {
//int k, m,x=0;
//for (k = 0; k <= 20;k++) {
//	for (m = 0; m <= 33;m++) {
//		for (i = 0; i <= 300;i++) {
//			if ( (k + m + i == 100) && (k * 5 + m * 3 + i /3.0 == 100)) {
//				printf("公鸡=%d，母鸡=%d，小鸡=%d\n",k,m,i);
//				x++;
//			}
//		}
//	}
//}

//for (k = 0; k <= 20; k++) {
//	for (m = 0; m <= 33; m++) {
//		if ((k + m + (100 - (k + m)) == 100) && (k * 5 + m * 3 + ((k*5 + m*3 )) == 100)) {
//			printf("公鸡=%d，母鸡=%d，小鸡=%d\n", k, m, (100 - (k + m)));
//				x++;
//			}
//	}
//}
//printf("%d\n", x);
	/*int a = 255, b = 8;*/
	//printf("%d\n", (-1)-(1));
	// 
	// 
	//int arr[X][Y] = { 0 };
	//int x, y;
	//for (x = 0; x < X;x++) {
	//	arr[x][0] = 1;
	//	for(y = 1; y <= x;y++) {
	//		arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
	//	}
	//}
	//for (x = 0; x < X; x++) {
	//	for (y = 0; y <= x; y++) {
	//		printf("%-5d ", arr[x][y]);
	//	}
	//	printf("\n");
	//}
////
////
////
////	int a, b, c, x;
////	for (a = 1; a < X;a++) {
////		for (b = 0; b < X; b++) {
////			for (c = 0; c < X; c++) {
////				for (x = 0; x < X; x++) {
////					if (((a * (x * x) + b * x + c) == 0)&&(a!=b&&a!=c&&a!=x&&b!=c&&b!=x&&c!=x)) {
////						printf("%d*%d^2+%d*%d+%d=0\n", a, x, b, x, c);
////						return 0;
////					}
////				}
////			}
////		}
////	}
////	printf("无解");
//return 0;
//}
////#include _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////int main() {
////	double a, b, c, x1, x2, r, i, delt;
////	printf("Please input the equation coefficients a,b,c: ");
////	scanf_s(" %lf, %lf, %lf", &a, &b, &c);
////	printf("\n Then equation ");
////	if (fabs(a) <= 1e-6) {
////		printf("is not a quadratic|n");
////	}
////	else
////	{
////		delt = b * b - 4 * a * c;
////		if (fabs(delt)<= 1e-6) {
////			printf("has two equal roots: %8.4f\n", (-b / (2 * a)));
////		}
////		else {
////			if (delt > 1e-6) {
////				x1 = (-b + sqrt(delt)) / (2 * a);
////				x2 = (-b - sqrt(delt)) / (2 * a);
////				printf("has distinct real roots: %8.4f and %8.4f\n", x1, x2);
////
////			}
////			else {
////				r = -b / (2 * a);
////				i = sqrt(-delt) / (2 * a);
////				printf("has complex roots; \n");
////				printf(" %8.4f+%8.4fi\n", r, i);
////				printf(" %8.4f- %8.4fi\n", r, i);
////			}
////		}
////	}
////}
//
////int main() {
////	double a, b; char x;
////	scanf("%lf%c%lf", &a, &x, &b);
////	switch (x) {
////	case '+':
////		printf("%lf%c%lf=%lf",a,x,b,a+b);
////		break;
////	case '-':
////		printf("%lf%c%lf=%lf", a, x, b, a - b);
////		break;
////	case '*':
////		printf("%lf%c%lf=%lf", a, x, b, a * b);
////		break;
////	case '/':
////		if (a && b) printf("%lf%c%lf=%lf", a, x, b, (a / b));
////		else printf("除数不能为0");
////		break;
////	difault : printf("错误");
////	}
////	return 0;
////} 
//
//float fun(float x) {
//	float n = 1000,t;
//	if (x <= 10000) {
//		n = 1000;
//	}
//	else {
//		if (x >= 100000) {
//			t = x - 100000;
//			n += t * 0.08;
//			x -= t;
//			t = x - 50000;
//			n += t * 0.07;
//			x -= t;
//			t = x - 20000;
//			n += t * 0.06;
//			x -= t;
//			t = x - 10000;
//			n += t * 0.05;
//		}
//		else if (x >= 50000) {
//			t = x - 50000;
//			n += t * 0.07;
//			x -= t;
//			t = x - 20000;
//			n += t * 0.06;
//			x -= t;
//			t = x - 10000;
//			n += t * 0.05;
//		}
//		else if (x >= 20000) {
//			t = x - 20000;
//			n += t * 0.06;
//			x -= t;
//			t = x - 10000;
//			n += t * 0.05;
//		}
//		else if (x >= 10000) {
//
//			t = x - 10000;
//			n += t * 0.05;
//		}
//	}
//	
//	return n;
//}
//float fun2(float sale) {
//
//	float salary;
//	if (sale < 10000)
//		salary = 1000;
//	else if (sale < 20000)
//		salary = 1000 + (sale - 10000) * 0.05;
//	else if (sale < 50000)
//		salary = 1000 + (sale - 20000) * 0.06;
//	else if (sale < 100000)
//		salary = 1000 + (sale - 50000) * 0.07;
//	else
//		salary = 1000 + (sale - 100000) * 0.08;
//
//	return salary;
//}
////#include <string.h>
////int main() {
////	float n=-1, x;
////	//scanf("%f",&x);
////	//n = fun(x);
////	char ch1[10] = "abcdef";
////	char ch2[10] = "a\\0";
////	printf("%d\n",strlen(strcpy(ch1,ch2)));
////	return 0;
////}
////#include <stdio.h>
////int main()
////{
////	int a[] = { 6,3,4,1,2 }; int n = 5;
////	int m, j, k, temp;
////	for (m = n / 2; m > 1; m /= 2)
////		for (j = m; j < n; j++)
////			for (k = j - m; k >= 0 && a[k] >= a[k + m]; k -= m)
////			{
////				temp = a[k];
////				a[k] = a[k + m];
////				a[k + m] = temp;
////			}
////				for (k = 0; k < 5; k++)
////					printf("%2d", a[k]);
////				
////			
////	return 0;
////}
////#include <stdio.h>
////#define n 8
////int main()
////{
////	/*int sum, num = 0,i; int x,y,n=0;
////	for (i = 1; i < 1000;i++) {
////		sum = 0;
////		for (x = 1; x < i;x++) {
////			for (y = 1; y <= i; y++) {
////				if (y*x==i && x!=i) {
////					sum += x;
////				}
////				if (sum > i) break;
////				if (sum == i) {
////					printf(" %3d ", i);
////					num++;
////					sum = 0;
////					n++;
////					break;
////				}
////			}
////			
////			
////		}
////		if (num == 5) {
////			printf("\n");
////			num = 0;
////		}
////
////	}
////	printf("\n%d\n",n);*/
////	/*int j, n = 0;
////	for (i = 3; i <= 1000; i++) {
////		sum = 0;
////		for (j = 1; j < n-1; j++) {
////			if (n % j == 0) sum += j;
////
////			if (i == sum) {
////				printf(" %d ", i);
////				n++;
////				if(n%5==0)printf("\n");
////			}
////
////
////		}
////		
////	}*/
////		
////
////	int Q[n + 1], k, m;
////	for (k = 1; k <= n;k++) {
////		Q[k] = k;
////
////	}
////	k = 1;
////	m = 0;
////	do {
////		printf("%2d",Q[k]);
////		k = (k + 1) % (n + 1);
////		Q[m] = Q[k];
////		m = (m + 1) % (n + 1);
////		k = (k + 1) % (n + 1);
////	} while (k!=m);
////	return 0;
////}
//
////#include "stdio.h"
////#include "stdlib.h"
////#define N 10
////int main()
////{
////	int i, j = N - 1, x, a[N] = { 12,3,11,14,21,8,25,18,7,2 };
////	for (i = 0; i < N;i++) {
////		printf("%3d ", a[i]);
////	}
////	i = 0;
////	x = a[0];
////	while (i < j) {
////		while ((i<j)&&x<a[j]) {
////			j--;
////		}
////		a[i] = a[j];
////		while ((i < j) && x > a[i]) {
////			i++;
////		}
////		a[j] = a[i];
////	}
////	a[i] = x;
////	printf("\n");
////	for (i = 0; i < N; i++) {
////		printf("%3d ", a[i]);
////	}
////	return 0;
////}
//
//
//
////#define N 20
////int main() {
////	int i, j, k, a[N][N];
////	for (i = 1; i < N;i++) {
////		a[i][1] = 1;
////		a[i][i] = 1;
////	}
////	for (i = 3; i < N;i++) {
////		for (j = 2; j < i;j++) {
////			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
////		}
////	}
////	for (i = 1; i < N;i++) {
////		for (k = 1; k < 60 - 3 * i;k++) {
////			printf("*");
////		}
////		for (j = 1; j <= i; j++) {
////			printf("%6d",a[i][j]);
////		}
////		printf("\n");
////
////	}
////	return 0;
////}
//
//
//struct stu {
//	char name[20];
//	int yw;
//	int sx;
//	int yy;
//	int zf;
//};
//
//
////int main() {
////	/*struct stu arr[100];
////	int input,i;
////	long int ywz=0,sxz=0,yyz=0;
////	printf("输入学生人数");
////	scanf("%d",&input);
////	for (i = 0; i < input;i++) {
////		printf("输入学生姓名");
////		scanf("%s", arr[i].name);
////		printf("\n");
////		printf("语文，数学，英语");
////		scanf("%d,%d,%d", &arr[i].yw, &arr[i].sx, &arr[i].yy);
////		printf("\n");
////	}
////	for (i = 0; i < input;i++) {
////		ywz += arr[i].yw;
////		sxz += arr[i].sx;
////		yyz += arr[i].yy;
////		arr[i].zf = arr[i].sx + arr[i].yw + arr[i].yy;
////	}
////	printf("语文总分：%3d，数学总分：%3d，英语总分：%3d\n",ywz,sxz,yyz);
////	printf("语文平均分：%.2f，数学平均分：%.2f，英语平均分：%.2f\n", (float)ywz/input, (float)sxz/input, (float)yyz/input);
////	for (i = 0; i < input;i++) {
////		printf("%s的总分为:%d,平均分为:%.2f\n", arr[i].name, arr[i].zf, arr[i].zf / 3.0);
////
////	}*/
////
////
////
////
////
////
////
////
////
////	/*int* p;
////	int a[5] = { 4,3,6,5,11 };
////	p = a;
////	printf("%d %d", *p++,(*p)++);*/
////	int arr[5][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
////	int x, y,z,n,t,max,min;
////	for (x = 0; x < 5;x++) {
////		n = x;
////		for (y = 1; y < 5; y++) {
////			if(arr[x][y]>arr[x][n]) {
////				n = y;
////			}
////		}
////		max = arr[x][n];//找到该行上最大的数
////		t = x;
////		for (z = 1; z < 5;z++) {
////			if (arr[z][n]<arr[t][n]) {
////				t = y;
////			}
////		}
////		min = arr[t][n];//找到该列上最小的数
////		if (&arr[x][n] == &arr[t][n]) {//比较该行上最大的数和该列上最小的数的地址是否相等
////			printf("arr[%d][%d]=%d  arr[%d][%d]=%d\n",x,n,arr[x][n],t,n,arr[t][n]);
////			break;
////		}
////	}
////	if (max != min) {
////		printf("NO\n");
////	}
////	for (x = 0; x < 5; x++) {
////		
////		for (y = 0; y < 5; y++) {
////			printf("%3d ", arr[x][y]);
////		}
////		printf("\n");
////	}
////
////	return 0;
////}
//
//void funsort(int arr[], int n) {
//	int x, y, j, m, temp;
//	for (x = 0; x < n; x++) {
//		j = n - x - 1; m = x;
//		for (y = x + 1; y < n - x - 1; y++) {
//			if (arr[y] > arr[j]) j = y;
//			if (arr[y] < arr[m]) m = y;
//		}
//		if (m != x) {
//			temp = arr[m];
//			arr[m] = arr[x];
//			arr[x] = temp;
//		}
//		if (j != n - x - 1) {
//			temp = arr[j];
//			arr[j] = arr[n - x - 1];
//			arr[n - x - 1] = temp;
//		}
//	}
//}
////int main() {
////	/*int y;
////	int arr[20] = { 17,18,8,9,10,19,20,4,5,6,7,14,15,16,11,12,13,14};
////	for (y = 0; y < 20; y++) {
////		printf("%3d ", arr[y]);
////	}
////	printf("\n");
////	funsort(arr, 20);
////	for (y = 0; y < 20; y++) {
////		printf("%3d ", arr[y]);
////	}*/
////	char a[5] = { 'A','B','C','D','E' }, * p = a, i;
////	for (i = 0; i < 5; i++) printf("%c", *a+i);
////	return 0;
////}
//
//
//int f1(int n,int(*p)(int)) {
//	return p(n);
// }
//
//int f2(int n) {
//	return n + n;
//}



//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main() {
//	char a[20]="cehiknqtw";
//	char s[] = "fbla";
//	int i, k, j;
//	for (k = 0; s[k] != '\0';k++) {
//		j = 0;
//		while (s[k] >= a[j]&& a[j]!='\0')j++;
//		for (i = strlen(a); i >= j;i--) {
//			a[i+1] = a[i];
//		}
//		a[j] = s[k];
//
//		
//	}
//	puts(a);
//	
//	/*double x, y, z;
//	x = 2;
//	y = 2;
//	z = 2;
//	printf("%lf\n", x / y);
//	printf("%lf\n", x / y * z);
//	printf("%lf\n", x * (1 / (y * z)));
//	printf("%lf\n", x / y *1/ z);
//	printf("%lf\n", x / y / z);*/
//	/*int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	printf("x+y+z=%d\n",x+y+z);*/
//	/*int a[10] = { 5,3,6,2,8,1,9,7,4,0 };
//	int i, j, m;
//	for (i = 1; i < 10;i++) {
//		m = a[i];
//		j = i - 1;
//		while (j >= 0&&m<a[j]) {
//			a[j + 1] = a[j];
//			j--;
//		}
//		a[j + 1] = m;
//	}
//	for (i = 0; i <10; i++) {
//		printf("%d ", a[i]);
//	}*/
//
//	/*float x, y, z,sum;
//	sum = scanf("%f,%f,%f", &x, &y, &z);
//	sum = f(x, y, z)+ f(y,z,x)+ f(z,x,y);
//	printf("%f\n",sum);
//	sum = f2(x, y, z) + f(y, z, x) + f(z, x, y);
//	printf("%f\n", sum);*/
//
//	/*int i, s, n, t;
//	for (i = 100; i < 1000; i++) {
//		s = i;
//		n = i;
//		while (n) {
//			t = n % 10;
//			s = s - t * t * t;
//			n = n / 10;
//		}
//		if (s == 0)printf("%3d ", i);
//	}*/
//	return 0;
//}
//float f(float a,float b,float c) {
//	float sum;
//	sum = sin(a) / (sin(a - b) * sin(a - c));
//	return sum;
//} 
//float f2(float a, float b, float c) {
//	float sum;
//	sum = sin(a) / sin(a - b) / sin(a - c);
//	return sum;
//}


//int main() {
//	char a[2][80],b[80];
//	int max = 0, i = 1,x=0;
//	char t[80];
//	scanf("%s", a[0]);
//	while (a[0][i]) {
//		if (a[0][i] > a[0][max]) max = i;
//		i++;
//	}
//	i = max;
//	scanf("%s", b);
//	while (t[x++] = a[0][++max]);
//	x = 0;
//	while (a[0][++i] = b[x++]);
//	x = 0;
//	while (a[0][i++] = t[x++]);
//	puts(a);
//	puts(b);
//	
//	return 0;
//}

//int main() {
//	int a[5][5], x, y, n = 1;
//	for (x = 0; x < 5;x++) {
//		for (y = 0; y < 5;y++) {
//			a[x][y] = n++;
//		}
//	}
//	for (x = 0; x < 5; x++) {
//		for (y = 0; y < 5; y++) {
//			printf("%-2d ", a[x][y]);
//		}
//		printf("\n");
//	}
//	for (x = 0; x < 5;x++) {
//		for (y = 0; y <= x;y++) {
//			printf("%-2d ",a[x][y]);
//		}
//		printf("\n");
//	}
//	for (x = 0; x < 5; x++) {
//		for (n = 0; n < x;n++) {
//			printf("   ");
//		}
//		for (y = x; y < 5; y++) {
//			printf("%-2d ", a[x][y]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main() {
//	int a[2][3], x, y, n = 2;
//	for (x = 0; x < 2; x++) {
//		for (y = 0; y < 3; y++) {
//			a[x][y] = n;
//			n += 2;
//		}
//	}
//	for (x = 0; x < 2; x++) {
//		for (y = 0; y < 3; y++) {
//			printf("%-2d ", a[x][y]);
//		}
//		printf("\n");
//	}
//	for (x = 0; x < 3; x++) {
//		for (y = 0; y < 2; y++) {
//			printf("%-2d ", a[y][x]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}



//void fun(int* s, int n1, int n2) {
//	int i, j, t;
//	i = n1;
//	j = n2;
//	while (i < j)
//	{
//		t = s[i];
//		s[i] = s[j]; 
//		s[j] = t;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }, k;
//	for (k = 0; k < 10; k++) {
//		printf("%d ", a[k]);
//	}
//	printf("\n");
//	fun(a, 0, 3); 
//	for (k = 0; k < 10; k++) {
//		printf("%d ", a[k]);
//	}
//	printf("\n");
//	fun(a, 4, 9);
//	for (k = 0; k < 10; k++) {
//		printf("%d ", a[k]);
//	}
//	printf("\n");
//	fun(a, 0, 9);
//	for (k = 0; k < 10; k++){
//		printf("%d ", a[k]);
//	}
//	printf("\n");
//}
//void sort(char *pch1, char *pch2) {
//	char tmp;
//	while (*pch1 || *pch2) {
//		tmp = *pch1;
//		*pch1 = *pch2;
//		*pch2 = tmp;
//		pch1++;
//		pch2++;
//	}
//	*pch1 = '\0';
//	*pch2 = '\0';
//}
//#define MAX 6
//int main() {
//	//输入3个字符串，按由小到大顺序输出
//	char ch1[MAX] = "cdcd", ch2[MAX] = "bcbca", ch3[MAX] = "aa";
//	//scanf("%s,%s,%s",ch1,ch2,ch3);
//	if (strcmp(ch1,ch2)>0) {
//		sort(ch1, ch2);
//	}
//	if(strcmp(ch1, ch3) > 0) {
//		sort(ch1, ch3);
//	}
//	if (strcmp(ch2, ch3) > 0) {
//		sort(ch2, ch3);
//	}
//	puts(ch1);
//	puts(ch2);
//	puts(ch3);
//	return 0;
//}


//int main() {
//	//找出ch1 和 ch2 最长的公共子串
//	char ch1[] = "aabbbccccddddd", ch2[] = "aabbbbcccdddd", ch3[20] = "\0", ch4[20] = "\0";
//	int x, y,x1,n,i=0,f=1;
//	for (x = 0; x < strlen(ch1); x++) {
//		x1 = x;
//		n = 0;
//		for (y = 0; y < strlen(ch2); y++) {
//			if ((ch1[x1] == ch2[y]) && (ch1[x1] != '\0')) {
//				ch3[n] = ch2[y];
//				n++;
//				x1++;
//				ch3[n] = '\0';
//			}
//			else {
//				//puts(ch3);
//				if (strlen(ch3) > strlen(ch4)) {
//					i = 0;
//					printf("%d,%d\n", strlen(ch3) ,strlen(ch4));
//					/*puts(ch3);
//					puts(ch4);*/
//					while (ch4[i] = ch3[i]) i++;
//				}
//				n = 0;
//				x1 = x;
//			}
//			
//		}
//		/*if (strlen(ch3)>strlen(ch4) ) {
//			i = 0;
//			while (ch4[i] = ch3[i]) i++;
//		}*/
//	}
//	puts(ch4);
//	
//	return 0;
//}

//double p(double eps) {
//	double s = 0, t = 1.0;
//	int n;
//	for (n = 1; t > eps;n++) {
//		s += t;
//		t =t* n / (2 * n + 1);
//	}
//}
//int main() {
//	double e = 10;
//	printf("%lf", p(e));
//	return 0;
//}


//int main() {
//	int a[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
//	printf("%d", ((a)[1])[2]);
//	return 0;
//
//}

//int numfun(int a,int b) {
//	int c;
//	c = a % 10 * 1000;
//	c += a - a % 10;
//	c += b / 10;
//	c += b % 10 * 100;
//	return c;
//}
//
//void strfun(int* a, int x) {
//	int n,t;
//	for (n = 0; n < x / 2; n++) {
//		t = a[n];
//		a[n] = a[x - n - 1];
//		a[x - n - 1] = t;
//	}
//}
//int main() {
//	int a[3][5], x, y;
//	for (x = 0; x < 3; x++) {
//		for (y = 0; y < 5; y++) {
//			scanf("%d", &a[x][y]);
//		}
//	}
//	for (x = 0; x < 3;x++) {
//		strfun(a[x], 2);
//		strfun(a[x]+2, 3);
//		strfun(a[x], 5);
//	}
//	for (x = 0; x < 3; x++) {
//		for (y = 0; y < 5; y++) {
//			printf("%d  ",a[x][y]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main() {
//	char c[100];
//	int i = 0,n=0;
//	scanf("%s",c);
//	while (c[n]) {
//		if (c[n] != '*') {
//			c[i] = c[n];
//			i++;
//		}
//		n++;
//	}
//	c[i] = '\0';
//	printf("%s\n",c);
//	return 0;
//}


/*

#define N 10
#include <stdio.h>  
#include<math.h>

int main() {
//从键盘输入N个数，计算N个数的平均值(规定所有数均为正数)，输出平均值，并将将小于平均值且最接近平均值的数找出并输出
	int arr[N], i, m=0,m2=0;
	double sum = 0, max;
	for (i = 0; i < N;i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum = sum / N;
	for (i = 0; i < N;i++) {
		if (arr[i]<sum) {
			printf("%d ",arr[i]);
		}
	}
	max = fabs(sum - arr[0]);
	for (i = 0; i < N;i++) {
		if (fabs(sum - arr[i]) < max) {
			max = fabs(sum - arr[i]);
			m = arr[i];
		}
		else if (fabs(sum - arr[i]) == max) {
			m2 = arr[i];
		}
	}
	printf("\n平均值为：%lf", sum);
	printf("\n最接近平均数的值为：%d,%d", m,m2);
}
*/





/*
#define N 3
#include <stdio.h>
void fun(int(*a)[N], int m);
int main() {
//输入一个N×N的二维数组，使数组右上半三角元素中的值乘以m。
	int arr[N][N], x, y, m=2;

	for (x = 0; x < N;x++) {
		for (y = 0; y < N; y++) {
			scanf("%d", &arr[x][y]);
		}
	}
	fun(arr, m);
	for (x = 0; x < N; x++) {
		for (y = 0; y < N; y++) {
			printf("%d ", arr[x][y]);
		}
		printf("\n");
	}
	return 0;

}
void fun(int(*a)[N], int m) {
	int x, y;
	for (x = 0; x < N; x++) {
		for (y = x; y < N; y++) {
			a[x][y] = a[x][y] * m;
		}
	}
}

*/


/*
#include <stdio.h>
#include <string.h>

int main() {
	//输入一个原字符串str以及子串substr，统计substr所指的子符串在str所指的字符串中出现的次数。例如，若字符串为aaas 1kaaas，子字符串为as，则应输出2。

	char str[100], substr[100];
	int x, y, sum = 0, n;
	gets(str);
	gets(substr);
	for (x = 0; str[x];x++) {
		n = x;
		for (y = 0; substr[y];y++) {
			if (str[n] == substr[y]) {
				n++;
			}
			else {
				break;
			}
		}
		if (substr[y] == '\0') {
			sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}

*/


#include <stdio.h>
/*
* 输入一个9个元素数组,函数fun的功
能是：把形参a所指数组中的偶数按原顺序
依次存放到a［0］、a［1］、a［2］…中,把
奇数从数组中删除,偶数的个数通过函数值
返回。
例如,若a所指数组中的数据最初排列
为：9,1,4,2,3,6,5,8,7,删除奇数后a所指
数组中的数据为：4,2,6,8,返回值为4。


int fun(int a[],int num) {
	int x, n=0;
	for (int x = 0; x < num;x++) {
		if (a[x]%2==0) {
			a[n] = a[x];
			n++;
		}
		else {
			a[x] = 0;
		}
	}
	return n;
}

int main() {
	int arr[9],x,n;
	for (x = 0; x < 9; x++) {
		scanf("%d", &arr[x]);
	}
	n = fun(arr, 9);
	for (x = 0; x < n; x++) {
		printf("%d ", arr[x]);
	}
}
*/
/*
#include <stdio.h>
//从键盘输入项数，按以下递归公式求函数的值。
//例如,当给n输入5时,函数值为18；当给n输入3时, 函数值为14。
int fun(int n) {
	if (n == 1) return 10;
	return (fun(n - 1) + 2);
}

int main() {
	int n;
	scanf("%d", &n);
	n = fun(n);
	printf("%d\n",n);
	return 0;
}

*/
/*#include <stdio.h>
#include <string.h>
int main() {
	int n, len;
	char ch[100];
	gets(ch);
	scanf("%d", &n);
	len = strlen(ch);
	while (ch[--len] == '*');
	ch[len + n+1] = '\0';
	puts(ch);
	printf("%d\n", n);
} */

//#include <stdio.h>
//int main() {
//
//	
//	printf("%d", -11/(10 / -4));
//
//	return 0;
//}



//#include <stdio.h>
//int iLine = 1;
//int main(void)
//{
//	printf("%*s \n", 7 - (iLine > 4 ? iLine - 4 : 4 - iLine), "*******" + 2 * (iLine > 4 ? iLine - 4 : 4 - iLine));
//	if (++iLine < 8) main();
//	return 0;
//}

/*
* //围圈报数
#include <stdio.h>
#define N 19
int main() {
	int arr[N] = {1};
	int i, n,y=0;
	for (i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	for (i = 0; i <= N; i++) {
		for (n = 0; n < N; n++) {
			if (arr[n]!=0) {
				y++;
			}
			if (y == 3) {
				printf("%d ", arr[n]);
				arr[n] = 0;
				y = 0;
				
			}
		}
		
	}
	return 0;
}
*/


/*
* //16进制转10进制
#include <stdio.h>
#include <string.h>
#include <math.h>
int htoi(char s[]) {
	int i = strlen(s), n = 0, j = 0;
	char* p = s;
	*p == '0' && (*(p + 1) == 'x' || *(p + 1) == X) ? p += 2 : p;
	for (; *p != '\0'; p++) {
		if (*p >= '0' && *p <= '9')
			n = n + (*p - '0') * pow(16, --i);
		else if (*p >= 'a' && *p <= 'f')
			n = n + (*p - 'a' + 10) * pow(16, --i) ;
		
	}
	return n;
}
void main() {
	char s[100];
	printf("Iputs:");
	gets(s);
	printf("%d\n", htoi(s));
}

*/

/*
//求派的近似值
#include <stdio.h>
#include <math.h>
int main() {
	double e = 1e-6,t=1,n = 1,i=0;
	int f = 1;
	while (fabs(t) >= e) {
		i += t;
		n += 2;
		f = -1 * f;
		t = f / n;
		
	}
	printf("i=%lf\n",e);
	i *= 4;
	printf("i=%lf\n", i);
	return 0;
}
*/


/*
#include <stdio.h>
void mo(int *arr,int n) {
	int i = 0,t;
	while(i<n/2) {
		t = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = t;
		i++;
	}
}
void move(int arr[], int n, int m) {
	mo(arr,n-m);
	mo(arr + n - m, m);
	mo(arr,n);
}
int main() {
	int arr[100],n,m,i=1;
	scanf("%d,%d",&n,&m);
	while (i <= n) { 
		arr[i - 1] = i;
		i++;
	}
	move(arr, n, m);
	i = 0;
	while (i<n) printf("%d ",arr[i++]);
	return 0;
}

*/



//#include <stdio.h>
//void calc_matric(int n) {
//	int arr[100][100];
//	int x, y, sum = 0;
//	for (x = 0; x < n;x++) {
//		for (y = 0; y < n;y++) {
//			scanf("%d", &arr[x][y]);
//		}
//	}
//	/*for (x = 0; x < n; x++) {
//		for (y = 0; y < n; y++) {
//			if (x==y || y==n-x-1) {
//				sum += arr[x][y];
//			}
//		}
//	}*/
//
//	for (x = 0; x < n;x++) {
//		sum += arr[x][x];
//		sum += arr[x][n - x-1];
//	}
//	if (n%2!=0) {
//		sum -= arr[n / 2][n / 2];
//	}
//	
//	printf("%d\n", sum);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	calc_matric(n);
//
//	return 0;
//}


//void fun(char* s1, char* s2) {
//	int i = 0,n=0,x=0;
//	while (s1[i] != '\0') {
//		n = 0;
//		while (s2[n] != '\0') {
//			if (s1[i] == s2 [n]) {
//				break;
//			}
//			n++;
//		}
//		if (s2[n] == '\0') {
//			s1[x] = s1[i];
//			x++;
//		}
//		i++;
//	}
//	s1[x] = '\0';
//}
//void main() {
//	char s1[300] = { "abcaa63akdfk" }, s2[300] = { "ayk5" };
//	fun(s1, s2);
//	printf("%s",s1);
//}


/*
#include <stdio.h> 
#include <string.h>
long fun(char *p) {
	long n = 0;
	int i=0;
	if (p[0] == '-') {
		i = 1;
		while (p[i] != '\0') {
			n = n * 10 + (p[i] - '0');
			i++;
		}
		n = -1 * n;
	}
	else {
		i = 0;
		while (p[i]) {
			n = n * 10 + (p[i] - '0');
			i++;
		}
	}
	return n;
}

int main() {
	char c[10] = { "-1234" };
	long  n;
	gets(c);
	n = fun(c);
	printf("%ld", n);
	return 0;
}
*/

/*
#include <stdio.h> 
int fun(int a, int b) {
	return a > b ? a + b : ++b;
}
int main() {
	int x = 3, y = 9, z;
	z = fun(fun(x++, y++), fun(--x, --y));
	printf("%d", z);
	return 0;
}
*/

/*
#include <stdio.h> 

int main() {
	int a,b;
	for (a = 1, b = 1; a <= 100;a++) {
		if (b >= 20)break;
		if (b % 3 == 1) { b += 3; continue;}
		b = b - 5;
	}
	printf("%d", a);
	return 0;
}*/


//#include <stdio.h>
//#include <string.h>
//int main() {
//	int k; 
//	char cp;
//	cp = getchar();
//	if (cp >= '0' && cp <= '9')
//		k = cp - '0';
//	else if (cp >= 'a' && cp <= 'f')
//		k = cp - 'a' + 10;
//	else
//		k = cp - 'A' + 10;
//
//	printf("%d\n", k);
//	return 0;
//}


//#include <stdio.h>
//
//int fun(int n,int x) {
//	printf("%d%d\n", n, x);
//	return 3;
//}
//
//void main() {
//	fun(fun(1,1), fun(2,2));
// }




//#include <stdio.h>
//#define N 10
//int main() {
//	int arr[N], i, max1, max2,k;
//	for (i = 0; i < N;i++) {
//		scanf("%d", &arr[i]);
//	}
//	max1 = arr[0];
//	k = 0;
//	for (i = 1; i < N;i++) {
//		if (arr[i]>max1) {
//			max1 = arr[i];
//			k = i;
//		}
//	}
//	for (i = k; i < N; i++) {
//		arr[i] = arr[i + 1];
//	}
//	max2 = arr[0];
//	for (i = 1; i < N - 1; i++) {
//		if (arr[i] > max2) {
//			max2 = arr[i];
//			
//		}
//	}
//	/*max1 = max2 = 0;
//	for (i = 0; i < 20;i++) {
//		if (arr[i]>max1) {
//			max1 = arr[i];
//		}
//	}
//	for (i = 0; i < 20; i++) {
//		if (arr[i] > max2&& arr[i]<max1) {
//			max2 = arr[i];
//		}
//	}*/
//	printf("1=%d,2=%d\n", max1, max2);
//}






//#include <stdio.h>
//int main() {
//	int i,x, n,sum=0,t;
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		t = 1;
//		for (x = 1; x <= i;x++) {
//			t *= x;
//			
//		}
//		printf("%d的阶乘为%d\n", i, t);
//		sum += t;
//	}
//	printf("和为%d\n",sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()                                                                    
//{
//	int i, n;
//	long p = 1, sum = 0;
//	scanf("%d", &n);                                                          
//		for (i = 1; i <= n; i++)
//		{
//			p *= i;
//			sum += p;
//			printf("%d!=%ld\n", i, p);
//		}	                                                                    
//			printf("sum=%ld\n", sum);
//		return 0;
//}


//#include <stdio.h>
//double fun(int n) {
//	int i;
//	double sum = 0;
//	for (i = 1; i <= n;i++) {
//		if (i%5==0||i%9==0) {
//			sum += 1 / (double)i;
//		}
//	}
//	return sum;
//}
//
//double fun2(int n)
//{
//	int i;
//	double d, sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 5 == 0 || i % 9 == 0)                                    
//		{
//			d = 1 / (double)i;
//			sum += d;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	double s;
//	int n = 10;
//	s = fun(n);
//	printf("%lf", s);
//	return 0;
//}



//求圆周率
//#include <stdio.h>
//#include <math.h>
//int main() {
//	double i = 0, f = 1,t =1,e = 1e-7;
//	int n = 1;
//	while (fabs(t)>=e) {
//		t = f / n;
//		i += t;
//		n += 2;
//		f = -1 * f;
//	}
//	i *= 4;
//	printf("%lf", i);
//}


//求三角形的面积
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int a = 2, b = 3, c = 2;
//	double s ,n;
//	s = (a + b + c) / 2.0;
//	n = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("%lf", n);
//	return 0;
//}




//#include "string.h"
//#define N 100
//void sort(char**, int n);
//main()
//{
//	int i, n;
//	char** p, * str[N], name[N][20];
//	printf("n=");
//	scanf("%d", &n);
//	if (n<2||n>N) /*exit(0)*/;
//	for (i = 0; i < n; i++)
//	{
//		str[i] = name[i];
//	}
//	printf("Input %d strings:\n", n);
//	for (i = 0; i < n; i++)
//	{
//		printf("name[%d]=", i);
//		scanf("%s",name[i]);
//	}
//	printf("String arry:\n");
//	for (i = 0; i < n; i++)
//	{
//		p=str+i;
//		printf("%s\n", *p);
//	}
//	p = str;
//	sort(p, n);
//	printf("String sort:\n");
//	for (i = 0; i < n; i++)
//	{
//		p = str + i;
//		printf("%s\n", *p);
//	}
//	//getch();
//}
//void sort(char **p, int n)
//{
//	int i, j;
//	char* s;
//	for (i = 0; i < n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			if (strcmp(p[i], p[j]) > 0)
//			{
//				s = p[i];
//				p[i] = p[j];
//				p[j] = s;
//			}
//}





//#include <string.h>
//#include <stdio.h>
//
//void fun(char a[]) {
//	int i = 0,n= 0;
//	while (a[i]) {
//		if (a[i] < '0' || a[i] > '9') { //判断这个字符不为数字字符
//			a[n] = a[i];
//			n++;
//		}
//		i++;
//	}
//	a[n] = '\0';
//}
//
//int main() {
//	char a[20] = "a1b2c3";
//	//                   n     i
//	//gets(a);
//	fun(a);
//	puts(a);
//	return 0;
//}









//#include<stdio.h>
//#define M 5
//void move(int* pointer);
//int main()
//{
//
//	int a[M][M];
//	int* p, i, j,x,y , t=1;
//	for (x = 0; x < M; x++) {
//		for (y = 0; y < M;y++) {
//			a[x][y] = t++;
//		}
//	}
//	//printf("input matrix:\n");
//	//for (i = 0; i < M; i++)
//	//{
//	//	for (j = 0; j < M; j++)
//	//		scanf("%d", &a[i][j]);
//	//}
//	printf("Before  transposition matrix:\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//			printf("%-2d ", a[i][j]);
//		printf("\n");
//	}
//	p = &a[0][0];
//	move(p);
//	printf("Now,matrix:\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//			printf("%-2d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//void move(int* pointer)
//{
//	int i, j, t;
//	for (i = 0; i < M; i++)
//	{
//		for (j = i; j < M; j++)
//		{
//			t = *(pointer + M * i + j);
//			*(pointer + M * i + j) = *(pointer + M * j + i);
//			*(pointer + M * j + i) = t;
//		}
//	}
//}

//#include <stdio.h>
//#define N 5

//void fun(/*int(*a)[N]*/ int *a) {
//	int x,y,t[N][N] , n;
//	/*for (x = 1; x < N; x++) {
//		t = a[0][x];
//		a[0][x] = a[x][0];
//		a[x][0] = t;
//	}
//	for (x = N-1; x > 0 ;x--) {
//		t = a[x][N - 1];
//		a[x][N - 1] = a[N - 1][x];
//		a[N - 1][x] = t;
//	}*/
//
//	/*for (x = 0; x < N;x++) {
//		for (y = 0; y < N; y++) {
//			t[y][x] = a[x][y];
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N; y++) {
//			a[x][y] = t[x][y];
//		}
//	}*/
//
//	/*for (x = 0; x < N; x++) {
//		for (y = x; y < N; y++) {
//			n = a[x][y];
//			a[x][y] = a[y][x];
//			a[y][x] = n;
//		}
//	}*/
//	for (x = 0; x < N; x++) {
//		for (y = x; y < N; y++) {
//			n = *(a+x*N+y);
//			*(a + x * N + y) = *(a+y*N+x);
//			*(a + y * N + x) = n;
//		}
//	}
//	//printf("%p\n", a + 1);
//}
//int main() {
//	int a[N][N], x, y, t = 1;
//	for (x = 0; x < N;x++) {
//		for (y = 0; y < N;y++) {
//			a[x][y] = t++;
//		}
//	}
//
//	printf("未转置\n");
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N; y++) {
//			printf("%-2d ", a[x][y]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	fun(a);
//	printf("转置后\n");
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N; y++) {
//			printf("%-2d ",a[x][y]);
//		}
//		printf("\n");
//	}
//	//printf("%p,%p\n", a+1, &a[0][0]+1);
//}






//#include <stdio.h>
//int main() {
//	int f = 1, n = 1;
//	double s = 0;
//	for (n; n <= 100;n++) {
//		s += (double)f / n;
//		f = -1 * f;
//	}
//	printf("s=%lf\n",s);
//	return 0;
//}



//#include <stdio.h>
//#define N 5
//int main() {
//	char a[N][N], max[N], min = 1, x, y;
//	for (x = 0; x < N;x++) {
//		for (y = 0; y < N;y++) {
//			a[x][y] = min++;
//		}
//	}
//
//	for (x = 0; x < N; x++) {
//		max[x] = a[x][0];
//		for (y = 1; y < N; y++) {
//			if (a[x][y] > max[x])
//				max[x] = a[x][y];
//		}
//	}
//	min = max[0];
//	for (x = 0; x < N;x++) {
//		if (max[x] < min)
//			min = max[x];
//		printf("%d ", max[x]);
//	}
//	printf("\n%d\n", min);
//	return 0;
//}





//#include <stdio.h>
//#include <string.h>
//void replchr(char* s, char ch1, char ch2) {
//	int i = 0;
//	while (s[i]) {
//		if (s[i] == ch1) {
//			s[i] = ch2;
//		}
//		i++;
//	}
//}
//int main() {
//	char s[10] = "\0",ch1,ch2;
//	printf("字符串:");
//	scanf("%s", s);
//	getchar();
//	printf("替换字符1:");
//	scanf("%c",&ch1);
//	getchar();
//	printf("替换字符2:");
//	scanf("%c",&ch2);
//	replchr(s,ch1,ch2);
//	printf("%s",s);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i;
//	for (i = 100; i < 1000;i++) {
//		if (i == (pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3))) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////求最大公因素最小公倍数
//#include <stdio.h>
//int main() {
//	int x , n , t = 1,y,z;
//	scanf("%d,%d", &x, &n);
//	y = x;
//	z = n;
//	if (x<n) {
//		t = x;
//		x = n;
//		n = t;
//	}
//	while (t != 0) {
//		t = x % n;
//		x = n;
//		n = t;
//	}
//	printf("最大公约数%d\n", x);
//	printf("最小公倍数%d\n", y*z/x);
//	return 0;
//}




//void verset() {
//
//}


//#include <stdio.h>
//
//int factsum(int n) {
//	int i, sum = 0;
//	for (i = 1; i <=n/2;i++) {
//		if (n%i==0) {
//			sum += i;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	int i;
//	for (i = 1; i < 1000;i++) {
//		if (factsum(i) == i) {
//			printf("%d,", i);
//		}
//		
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int prime(int m) {
//	int i;
//	for (i = 2; i < m; i++) {
//		if (m%i==0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	int n,i,m;
//	printf("输入n:");
//	scanf("%d", &n);
//	m = n;
//	while(m>0)
//		for (i = 2; i <= m; i++) {
//			if (prime(i)&&m%i==0) {
//				printf("%d,", i);
//				m = m / i;
//			}
//		}
//	
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	/*int n;
//	double x,p =1;
//	scanf("%lf", &x);
//	scanf("%d", &n);
//	while (n--) {
//		p *= x;
//		
//	}
//	printf("%lf\n", p);*/
//	int r = 3;
//	printf("%d", sizeof(0* r));
//	return 0;
//}



//#include <stdio.h>
//#define N 3
//#define M 5
//int main() {
//	int a[N][M], x, y, sum = 0;
//	int(*pa)[M];
//	for (x = 0; x < N;x++) {
//		for (y = 0; y < M; y++) {
//			a[x][y] = ++sum;
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < M; y++) {
//			printf("%-2d ",a[x][y]);
//		}
//		printf("\n");
//	}
//	for (x = 0; x < N;x++) {
//		pa = a[x];
//		sum = 0;
//		for (y = 0; y < M;y++) {
//			sum += *(*pa+y);
//		}
//		printf("a[%d]行的和为: %d\n", x, sum);
//	}
//
//
//	return 0;
//}



//int factsum(int n) {
//	int sum = 0, i;
//	for (i = 1; i < n;i++) {
//		if (n % i == 0) {
//			sum += i;
//		}
//	}
//	return sum;
//}
//#include <stdio.h>
//int main() {
//	int i ;
//	for (i = 1; i < 1000;i++) {
//		if (factsum(i) == i) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int fun(int n) {
//	int i,sum = 0;
//	for (i = 2; i < n;i++) {
//		if (n%i ==0) {
//			sum += i;
//		}
//	}
//	return sum;
//}
//
//
//int main() {
//	int n,sum;
//	printf("输入你要计算的数：");
//	scanf("%d",&n);
//	sum = fun(n);
//	printf("%d=%d", n, sum);
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	char c;
//	scanf("%c", &c);
//	c = c +32;
//	printf("%c,%d,%x", c ,c,c);
//
//
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	int l, y, r,f = 0,sum = 0;
//	int a[2][13] = { {0,31,29,31,30,31,30,31,31,30,31,30,31},{0,31,30,31,30,31,30,31,31,30,31,30,31} };
//	scanf("%d,%d,%d", &l, &y, &r);
//	if ((l % 4 == 0 && l % 100 != 0) || (l % 400)) {  //判断这一年是否为润连
//		f = 1;  //数组a[1]行为闰年的每月天数
//	}
//	if(y<13&&r<32){
//		switch (y - 1) {
//		case 11:sum += a[f][11];
//		case 10:sum += a[f][10];
//		case 9:sum += a[f][9];
//		case 8:sum += a[f][8];
//		case 7:sum += a[f][7];
//		case 6:sum += a[f][6];
//		case 5:sum += a[f][5];
//		case 4:sum += a[f][4];
//		case 3:sum += a[f][3];
//		case 2:sum += a[f][2];
//		case 1:sum += a[f][1];
//		}
//		sum += r;
//		printf("%d年的第%d天\n", l, sum);
//	}
//	else {
//		printf("输入错误！");
//	}
//	
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int x=2, y=1, n = 15,t;
//	double sum = 0;
//	while (n--) {
//		sum += (double)x / y;
//		t = x;
//		x = x + y;
//		y = t;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}







//#include<stdio.h>
//void Triangle(int n) {
//	int  i, y;
//	
//	for (i = 1; i <= n; i++) {
//		for (y = 0; y < n * 3 - 2 * i; y++) {
//			printf(" ");
//		}
//		for (y = 0; y < i; y++) {
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n;
//	printf("n = ? ");
//	scanf("%d", &n);
//	//printf("%d\n", n);
//	Triangle(n);
//	
//
//	return 0;
//}




//#include <stdio.h>
//#define N  5
//int main() {
//	int dat = 0;
//	int a1[N] = {1,3,5,7,9}, a2[N + 2] = {2,4,6,8,10,12,13}, a3[N * N+2], x,y, n;
//	n = 0;
//	for (x = 0, y = 0; x < N && y < N + 2;) {
//		if (a1[x] < a2[y]) {
//			a3[n] = a1[x];
//			x++;
//			
//		}
//		else {
//			a3[n] = a2[y];
//			y++;
//		}
//		n++;
//	}
//	if (x == N) {
//		for (y; y < N + 2;y++) {
//			a3[n] = a2[y];
//			n++;
//		}
//	}
//	else {
//		for (x; x < N; x++) {
//			a3[n] = a2[x];
//			n++;
//		}
//	}
//	for (x = 0; x < n;x++) {
//		printf("%d ", a3[x]);
//	}
//
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main() {
//	char ch = 'b';
//	int a[26] = {0},i;
//	int* pa = a;
//	while ((ch = getchar())!='\n') {
//		if (ch>='a'&&ch<='z') {
//			*(pa + ch - 'a') += 1;
//		}
//		else if(ch >= 'A' && ch <= 'Z'){
//			a[ch - 'A']++;
//		}
//	}
//	for (i = 0; i < 26;i++) {
//		if (*(pa + i)!=0) {
//			printf(" %c 出现了 %d 次\n",'a'+i, *(pa + i));
//		}
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//#define N 5
//
//void fun(int* a, int n) {
//	int i,t;
//	for (i = 0; i < n / 2; i++) {
//		t = *(a + i);
//		*(a + i) = *(a + n - i - 1);
//		*(a + n - i - 1) = t;
//	}
//}
//int main() {
//	int arr[N],i,t;
//	int* a = arr;
//	for (i = 0; i < N; i++) {
//		scanf("%d", a+i);
//	}
//	for (i = 0; i < N; i++) {
//		printf("%d ", *(a + i));
//	}
//	printf("\n");
//	fun(arr, N);
//	for (i = 0; i < N; i++) {
//		printf("%d ", *(a + i));
//	}
//	return 0;
//}



//#include <stdio.h>
//int i;
//int main() {
//	i--;
//	if (i > sizeof(i)) {
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//	}
//}


//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	float x, y, z, num,s;
//	scanf("%f,%f", &x, &y);
//	z = sqrt(x*x+y*y);
//	printf("第三条边的长度为%.2f\n", z);
//	s = (x + y + z) / 2;
//	num = sqrt(s * (s - x) * (s - y) * (s - z));
//	printf("面积为%.2f", num);
//}

//#include <stdio.h>
//#include <math.h>
//void main()
//{
//
//	double a = 3, b = -20, c = -10, delta, x1, x2;
//	delta = b * b - 4 * a * c;
//	x1 = (-b + sqrt(delta)) / (2 * a);
//	x2 = (-b - sqrt(delta)) / (2 * a);
//	printf("x1 = % 7.21f，x2 = % 7.21f\n", x1, x2);
//	printf(" 3 * %.21lf * %.21lf - 20 * %.21lf - 10 = %.2lf\n", x1, x1, x1, 3 * x1 * x1 - 20 * x1 - 10);
//	printf(" 3 * %.4lf * %.4lf - 20 * %.4lf - 10 = %.2lf\n", x2, x2, x2, 3 * x2 * x2 - 20 * x2 - 10);
//}




//#include <stdio.h>
//
//int main() {
//	float f ,c;
//	scanf("%f",&f);
//	c = 5.0 / 9 * (f - 32);
//	printf("%.3f", c);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	/*int f ,c,n;
//	scanf("%d",&f);
//	c = f/60;
//	n = f % 60;
//	printf("%d小时%d", c,n);*/
//	int x = 1, y = 0,c;
//	c = x-- > (y + x) ? 10 : 12.5 > y++ ? 'A' : 'Z';
//	printf("%d", c);
//	return 0;
//}



//#include  <stdio.h>
//
//int main() {
//	/*char  a[100],b[100];
//	int max , i = 0;
//	scanf("%s",a);
//	max = 0;
//	while (a[i]) {
//		if (a[i] > a[max])max = i;
//		i++;
//	}
//	scanf("%s", b);
//	i = 0;
//	max += 1;
//	while (b[i]) {
//		a[max] = b[i];
//		i++;
//		max++;
//	}
//	a[max] = b[i];
//
//	printf("%s", a);*/
//
//	int a = 0, b = 3, c = 0;
//	printf("%d", a || b && c);
//	return  0;
//}


//#include <stdio.h>
//int main() {
//	int l,f =1;
//	double m, n, sum,r;
//	printf("请输入本金和期限 m,l：");
//	scanf("%lf,%d", &m, &l);
//	switch (l) 
//	{
//	case 1: {
//		n = 0.00215;
//		break;
//	}
//	case 2: {
//		n = 0.00230;
//		break;
//	}
//	case 3: {
//		n = 0.00245;
//		break;
//	}
//	case 5: {
//		n = 0.00275;
//		break;
//	}
//	case 8: {
//		n = 0.00320;
//		break;
//	}
//	
//	default:{
//		printf("输入错误\n");
//		f = 0;
//		break;
//	}
//
//	}
//	if (f) {
//		sum = m + (m * n * 12 * l);
//		printf("%.2lf\n", sum);
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//int fun(int n) {
//	if (n) {
//		printf("%d", n % 10);
//		return 1 + fun(n / 10);
//	}
//	return 0;
//}
//
//int main() {
//	/*int n = 1234,sum;
//	scanf("%d", &n);
//	sum = fun(n);
//	printf("\n%d位数\n", sum);*/
//	char str2[] = "Hello";
//	printf("%d", sizeof(str2));
//
//	return 0;
//}


//#include <stdio.h>
//
//int  main() {
//	int f = 1, n = 1;
//	double sum = 0;
//	while (n <= 100) {
//		sum += (double)f / n;
//		f = -1 * f;
//		n++;
//	}
//	/*int i, sign = 1;
//	double sum =0;
//	for (i = 1; i <= 100; i++) {
//		sum = sum + sign * 1.0 / i;
//		sign = -sign;
//	}*/
//	printf("%lf", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i;
//	float s = 1.0, e = 1.0;
//	for (i = 1; i <= 10; i++) {
//		s = s * i;
//		e = e + 1 / s;
//	}
//	printf("%f",e);
//	return 0;
//}
//#include <stdio.h>
//int fun(int n) {
//	int i, sum = 1;
//	for (i = 1; i <= n; i++) {
//		sum *= i;
//	}
//	return sum;
//}
//int main() {
//	int i;
//	double n = 1,sum = 1;
//	for (i = 1; i <= 10; i++) {
//		sum += n / fun(i);
//	}
//	printf("%lf", sum);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i = 1;
//	double e = 1e-5, sum = 0, t = 1;
//	while (1/t >= e) {
//		sum =sum+1/t;
//		t *= i;
//		i++;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int i = 1;
//	double e = 1,s = 1;
//	while (1/s>=1e-5) {
//		s = s * i;
//		e = e + 1 / s;
//		i++;
//	}
//	printf("%lf", e);
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int m, n, t;
//	printf("请输入 m,n:");
//	scanf("%d,%d", &m,&n);
//	if (m < n) {
//		m = m + n;
//		n = m - n;
//		m = m - n;
//	}
//	t = m;
//	while (t % n) {
//		t += m;
//	}
//	printf("m:n的最小公倍数为:%d", t);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int m, n, k;
//	printf("请输入 m,n:");
//	scanf("%d,%d", &m, &n);
//	k = m;
//	while (k % m!=0 || k%n!=0) {
//		k++;
//	}
//	printf("m:n的最小公倍数为:%d", k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int x, y;
//	for (x = 0; x < 50; x++) {
//		for (y = 0; y < 50; y++) {
//			if (x * x + y * y == 1989) {
//				printf("%d^2+%d^2=1989\n", x, y);
//			}
//		}
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n, x, y, sum = 0, t = 0;
//
//	scanf("%d", &n);
//	for (x = 1; x <= n;x++) {
//		t = 0;
//		for (y = 1; y <= n;y++) {
//			//sum += y;
//			t += y;
//		}
//		sum += t;
//	}
//	
//	printf("sum=%d", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int x, y,z;
//	/*for (x = 0; x <= 9; x++) {
//		for (y = 0; y <= 12; y++) {
//			if ((x * 4 + y * 3 + (36 - x - y) / 2.0 == 36)&&(x+y+(36-x-y)==36)) {
//				printf("x=%d,y=%d,z=%d\n", x, y, 36 - x - y);
//			}
//		}
//	}*/
//	for (x = 0; x <= 9; x++) {
//		for (y = 0; y <= 12; y++) {
//			z = 36 - x - y;
//			if ((x * 4 + y * 3 + z / 2 == 36)&&z%2==0) {
//				printf("x=%d,y=%d,z=%d\n", x, y, z);
//			}
//		}
//	}
//
//
//	return 0;
//}



 
 

//#include <stdio.h>
//
//int main() {
//	int i = 10, n = 1;
//	while (--i) {
//		n = (n + 1) * 2;
//	}
//	printf("%d\n", n);
//	n = 1;
//	for(i=9;i>0;i--)
//		n = (n + 1) * 2;
//	printf("%d\n", n);
//	return 0;
//}





//#include <stdio.h>
//
//int main() {
//	char a, b, c;
//	for (a = 'x'; a <= 'z'; a++) {
//		for (b = 'x'; b <= 'z'; b++) {
//			if (a != b) {
//				for (c = 'x'; c <= 'z'; c++) {
//					if (c != a && c != b) {
//						if(a!='x'&&c!='x' && c != 'z') {
//							printf("a=%c,b=%c,c=%c", a, b, c);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


#/*include <stdio.h>

int main(){
	int a, b, c;
	for (a = 0; a <= 9;a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				if ((a * 100 + b * 10 + c)+(c*100+b*10+a)==1333) {
					printf("%d%d%d+%d%d%d=1333\n",a,b,c,c,b,a);
				}
			}
		}
	}
	return 0;
}*/

//#include <stdio.h>
//
//int main() {
//	int n,m,i;
//	scanf("%d", &n);
//	printf("%d 的立方为：%d\n", n, n * n * n);
//	m = (n * n - n) / 2;
//	for (i = 0; i < n; i++) {
//		printf("%d ", 2 * m + i * 2 + 1);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//	//int a, b,n;
//	//long long sum = 1;
//	//scanf("%d,%d", &a, &b);
//	//printf("%d的%d次方为:%ld\n", a, b, (long)pow(a, b));
//	//while (b--) {
//	//	sum *= a;
//	//	sum %= 1000;
//	//}
//
//	////n = sum % 1000;
//	////printf("%d的%d次方为:%ld\n", a, b, sum);
//	//printf("最后三位为：%d", sum);
//
//	float s = 2.734;
//	printf("%1.2f\n",s);
//	return 0;
//}


//#include <stdio.h>
//int a[9];
//int OK(int t, int* s)
//{
//	int* p, * q;
//	for (p = s; p<s+3; p++)
//	{
//		*p = t%10;
//		t = t / 10;
//		for (q = a; q < p; q++)
//			if (*p == 0||*q == *p ) return(0);
//	}
//	return 1;
//}
//int main()
//{
//	int m, count = 0;
//	for (m = 123; m <= 333; m++)
//		if (OK(m, a) && OK(m*2, a+3) && OK(m*3, a+6))
//			printf("NO. %d:%d %d %d\n", ++count, m, 2 * m, 3 * m);
//
//	return 0;
//}







//#include "string.h"
//main()
//{
//	char a[] = "ABCDE", b[20], * p1, * p2;
//	int i;
//	p1= a;
//	p2 = b;
//	for (; *p1!='\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2='\0';
//	printf("string a is : %s\n", a);
//	printf("string b is:");
//	for (i = 0; b[i] != '\0'; i++)
//		printf("%c", b[i]);
//	printf("\n");
//}





//main()
//{
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int temp1, temp2, number, end, i, j;
//	printf("original array is:\n");
//	for (i = 0; i < 10; i++) printf("%5d", a[i]);
//	printf("\n");
//	printf("insert a new number:");
//	scanf("%d", &number);
//	end = a[9];
//	if (number > end) a[10] = number;
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] > number)
//			{
//				temp1 = a[i]; a[i]=number;
//				for (j = i + 1; j < 11; j++)
//				{
//					temp2 = a[j]; a[j]=temp1; temp1 = temp2;
//				}
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 11; i++) printf("%5d", a[i]);
//}






//main()
//{
//	static int k[10];
//	int i, j, n, s;
//	for (j = 2; j<1000; j++)
//	{
//		n = -1; s = j;
//		for (i = 1; i < j; i++)
//		{
//			if (j%i==0)
//			{
//				n++;
//				s=s-i;
//				k[n] = i;
//			}
//		}
//
//		if (s==0)
//		{
//			printf("%d is a wanshu", j);
//			for (i = 0; i < n; i++)
//				printf("%d,", k[i]);
//			printf("%d\n", k[n]);
//		}
//	}
//}


//#include "stdio.h"
//#include <math.h>
//void main()
//{
//	float a[20], pjz = 0, s, t, n = 5;
//	int i, k;
//	for (i = 0; i < n; i++) { scanf("%f", &a[i]); pjz += a[i]; }
//	pjz = pjz / n;
//	s = fabs(a[0] - pjz);
//	for (i = 1; i < n; i++) if (fabs(a[i] - pjz) < s) { s = fabs(a[i] - pjz);t=a[i]; }
//	printf("%f", t);
//}




//#include <stdio.h>
//main() {
//	int n, x = 0, t, i;
//	scanf("%d", &n);
//	do {
//		t = n % 16;
//		x = x * 10 + t;
//	} while (n /= 16);
//	printf("%d", x);
//}


//#define N 10
//main() {
//	int a[N][N], k, i, j, n;
//	scanf("%d", &n);
//	for (k = n; k >= 1; k--) {
//		for (i = 0, j = k - 1; j < n; i++, j++)
//			a[i][j] = k;
//		for (j = 0, i = n + 1 - k; i < n; i++, j++)
//			a[i][j] = k;
//	}
//		for (j = 0; j < n; j++) {
//			for (i = 0; i < n; i++)
//				printf("%4d", a[i][j]);
//			printf("\n");
//		}
//	}



//main()
//{
//	int a[10], b[10], * pa, * pb, i;
//	pa = a; pb = b;
//	for (i = 0; i < 3; i++, pa++, pb++)
//	{
//		*pa = i; *pb = 2 * i;
//		printf("%d\t%d\n", *pa, *pb);
//	}
//	printf("\n");
//	pa = &a[0];
//	pb = &b[0];
//	for (i = 0; i < 3; i++)
//	{
//		*pa = *pa + i;
//		*pb = *pb * i;
//		printf("%d\t%d\n", *pa++, *pb++);
//	}
//}


//#include <stdio.h>
//int c = 5;
//f(int a)
//{
//	static int b;
//	b = a - c; c++; return(a + b + c);
//}
//main()
//{
//	int a = 2, i;
//	for (i = 0; i < 4; i++) printf("%d,", f(i));
//	printf("\n");
//}


//#include <stdio.h>
//void main()
//{
//	char ch, p[20];
//	int i = 0;
//	while ((ch = getchar()) != '\n') {
//		switch (ch) {
//		case '3':
//		case '2': p[i++] = ch;
//		case '1': p[i++] = ch; break;
//		case '0': p[i++] = ch;
//		default: p[i++] = ch + 1;
//		}
//		p[i] = '\0';
//	}
//	printf("%s\n", p);
//}


//#include <stdio.h>
//int func(int x[], int n)
//{
//	int len = 1, t;
//	for (t = 1; t < n; t++)
//		if (x[t] == x[t - len]) len++;
//	return len;
//}
//void main() {
//	int a[10] = { 1,2,3,7,7,10,4,6,5,9 };
//	printf("%d\n", func(a, 10));
//}


//#include <stdio.h>
//int age(int n)
//{
//	int c;
//	if (n == 1)
//		c = 18;
//	else
//		c = age(n - 2) + 1;
//	return(c);
//}
//main()
//{
//	printf("%d\n", age(11));
//}


//int aa[3][3] = { {7},{5},{3} };
//main()
//{
//	int i, * p = &aa[0][0];
//	for (i = 0; i <= 2; i++)
//
//	{
//		if (i == 0)
//			aa[i][i + 1] = *p - 1;
//		else
//			++p;
//		printf("%d\n", *p);
//	}
//}



//#include <stdio.h>
//#include <string.h>
//int main() {
//	char color[] = "BRWWWBWBRBRWBBRRRRRWBWR", t;
//	int i=0, n= 0;
//	int r = strlen(color) - 1;
//	/*while (i<= strlen(color)/2) {
//		while (color[r] == 'R') r--;
//		while (color[n] == 'B') n++,i++;
//		if (color[i] == 'B') {
//			t = color[n];
//			color[n] = color[i];
//			color[i] = t;
//			n++;
//		}
//		else if (color[i] == 'R') {
//			t = color[r];
//			color[r] = color[i];
//			color[i] = t;
//			r--;
//		}
//		i++;
//	}*/
//	while (color[i]) {
//
//		if (color[i] == 'B') {
//			t = color[n];
//			color[n] = color[i];
//			color[i] = t;
//			n++;
//		}
//		i++;
//	}
//	i = n;
//	while (color[i]) {
//
//		if (color[i] == 'W') {
//			t = color[n];
//			color[n] = color[i];
//			color[i] = t;
//			n++;
//		}
//		i++;
//	}
//	printf("%s\n", color);
//}


//#include <stdio.h>
//int ermoveDuplicates(int* nums, int numsSize) {
//
//	int i = 1, n = 0;
//	while (i< numsSize) {
//		if (nums[i]!= nums[n]) {
//			nums[++n] = nums[i++];
//		}
//		else {
//			i++;
//		}
//	}
//	return n+1;
//}
//
//int main() {
//	/*int a[] = { 1,1,2 },i=0,n = 0;
//	n = ermoveDuplicates(a,3);
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}*/
//
//	int k;
//	float s;
//	for (k = 0, s = 0; k < 7; k++)
//		s += k / 2;
//	printf("%d, %f\n", k, s);
//	return 0;
//}



//void sort(int arr[],int n) {
//	int x, y, min,max,tmp;
//	int left = 0, right = n - 1;
//	while (left<right) {
//		min = left;
//		max = right;
//		for (y = left; y <= right;y++) {
//			if (arr[y] < arr[min])min = y;
//			if (arr[y] > arr[max])max = y;
//		}
//		if (min != left) {
//			tmp = arr[min];
//			arr[min] = arr[left];
//			arr[left] = tmp;
//		}
//		if (max == left) max = min;
//		if (max != right) {
//			tmp = arr[max];
//			arr[max] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[] = {12,5,4,6,3,7,2,8,1,9,10,11,13,0 },y,n = 14;
//	sort(arr, n);
//	for (y = 0; y < n; y++) {
//		printf("%d ",arr[y]);
//	}
//	return 0;
//}


//#include <stdio.h>
//main() {
//	int a = 0, b = 0, c = 0; 
//	c = (a -= ++a), (a += b, b += 4);
//	printf("%d,%d,%d\n",a, b, c);
//}


//#include <stdio.h>
//#define N 10
//int main() {
//	int a[N][N] = {0};
//	int x, y;
//	a[0][0] = 1;
//	for (x = 1; x < N;x++) {
//		a[x][0] = 1;
//		for (y = 1; y <= x;y++) {
//			a[x][y] = a[x - 1][y - 1] + a[x - 1][y];
//			
//		}
//		for (y = 0; y <= N - x; y++) {
//			printf("  ");
//		}
//		for (y = 0; y < x;y++) {
//			printf(" %-2d ", a[x-1][y]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//#define N 10
//void fun1(int a[], int n) {
//	int l = 0, r = n - 1,t;
//	while (l < r) {
//		t = a[l];
//		a[l] = a[r];
//		a[r] = t;
//		l++;
//		r--;
//	}
//
//}
//void fun2(int *a, int n) {
//	int *l = a, *r =a+ n - 1, t;
//	while (l < r) {
//		t = *l;
//		*l = *r;
//		*r = t;
//		l++;
//		r--;
//	}
//
//}
//int main() {
//	int a[N],i;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//	fun1(a, N);
//	for (i = 0; i < N; i++) {
//		printf("%d, ", a[i]);
//	}
//	printf("\n");
//	fun2(a, N);
//	for (i = 0; i < N; i++) {
//		printf("%d, ", a[i]);
//	}
//	return 0;
//}

//void nx1(int aa[])
//{
//	int i, t;
//	for (i = 0; i <= 4; i++)
//	{
//		t = aa[i];
//		aa[i] = aa[9 - i];
//		aa[9 - i] = t;
//	}
//}
//void nx2(int* pp)
//{
//	int t, * q, * qq; q = pp + 4; qq = pp + 9;
//	for (; pp <= q; pp++, qq--)
//	{
//		t = *pp;
//		*pp = *qq;
//		*qq = t;
//	}
//}
//main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i, * p; p = a;
//	nx1(a); 
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	nx2(p);
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}


//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	/*int m, n, gbs, gys;
//	scanf("%d,%d",&m,&n);
//	for (gbs = m; gbs%n; gbs = gbs + m);
//	gys = m * n / gbs;
//	printf("%d,%d", gbs, gys);*/
//	printf("%d",strlen("\t\1238\012\xffab\n"));
//}

//#include <stdio.h>
//
//int main() {
//	char str1[20]= "", str2[20] = "";
//	int m, n, i=0,t=0;
//	printf("输入字符串：");
//	scanf("%s",str1);
//	printf("输入m，n:");
//	scanf("%d,%d",&m,&n);
//	while ((str2[i++] = str1[m++]) && (i < n)) {
//		;
//	}
//	str2[i] = '\0';
//	printf("%s",str2);
//	return 0;
//}


//#include <stdio.h>
//typedef char* s;
//int main() {
//	int arr[10],i,max,min,t;
//	for (i = 0; i < 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	max = min = 0;
//	for (i = 1; i < 10;i++) {
//		if (arr[i] > arr[max])max = i;
//		if (arr[i] < arr[min])min = i;
//	}
//	t = arr[max];
//	arr[max] = arr[0];
//	arr[0] = t;
//	if (min == 0) min = max;
//	t = arr[min];
//	arr[min] = arr[9];
//	arr[9] = t;
//	for (i = 0; i < 10; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int fun(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n);i++) {
//		if (n % i == 0)return 0;
//	}
//	return 1;
//}
//int main() {
//	int i,n=0,m;
//	for (i = 2; i <= 2000;i++) {
//		m = i;
//		while (m > 0) {
//			if (fun(m)==0) {
//				break;
//			}
//			m /= 10;
//		}
//		if (m == 0) {
//			printf(" %-4d ", i);
//			n++;
//		}
//		if (n ==5) {
//			n = 0;
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i,f=0,m;
//	for (i = 25; i <= 200;i++) {
//		if (i % 5 == 0) {
//			m = i;
//			while (m) {
//				if (m%10==3) {
//					f = 1;
//					break;
//				}
//				m = m / 10;
//			}
//			if (f) {
//				f = 0;
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//void main(){
//int i,j,n = 0,m,k,a[200],b[5];
//for(i = 25; i <= 200; i++)
//	if(i % 5 == 0) /* 判断是否是5 的倍数 if（i % 5 == 0）*/
//	{	m = i; /* 将判断的数赋给m */
//		j = 0;
//		k = 0;
//		do
//		{
//			b[j] = m % 10;
//			m /= 10;
//			if(b[j] == 3)
//				k++;
//				j++;
//		}while(m > 0);
//		if(k > 0)
//		a[n++] = i;
//	}
//	for(i = 0; i < n; i++)
//	printf("%4d",a[i]);
//}


//#include<stdio.h>
//int prime(int n) /*判断n 是否为素数的函数*/
//{
//	int i;
//	for (i = 2; i < n - 1; i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//main()
//{
//	int m, n, k=0, flag;
//	for (n = 2; n < 2000; n++)
//		if (prime(n)==0) /*若不是素数则判断下一个*/
//			continue;
//		else
//		{
//			m = n;
//			flag = 1; /*标志变量置为1*/
//			while (m > 0)
//			{
//				m = m / 10; /*依次去掉一位数字*/
//				if (!prime(m))
//				{
//					flag = 0; /*若不是素数标志置为0*/
//					break;
//				}
//				
//			}
//			if (flag) /*若是素数则输出*/
//			{
//				printf("\t%d", n);
//				k++;
//				if (k % 5 == 0)
//					printf("\n");
//			}
//		}
//}


//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str[100],t;
//	int left, right,l,r=0;
//	printf("请输入：");
//	scanf("%s", str);
//	//right = strlen(str)-1;
//	while(str[r]) {
//		left = r;
//		while (!((str[left] >= '0') && (str[left] <= '9'))) {
//			left++;
//		}
//		right = left + 1;
//		while ((str[right] >= '0') && (str[right] <= '9')&& str[right]) {
//			right++;
//		}
//		r = right;
//		if (str[right-1]!='\0') {
//			right -= 1;
//			while (left < right) {
//				t = str[left];
//				str[left] = str[right];
//				str[right] = t;
//				left++;
//				right--;
//			}
//		}
//	}
//	puts(str);
//	return 0;
//}

//#include<stdio.h>
//main()
//{
//	char ch;
//	long m=0, n, nx = 0; /*定义变量并赋初值*/
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= '0' && ch <= '9') /*判断是否为数字*/
//			m = m * 10 + ch - '0'; /*生成数字*/
//		else
//			putchar(ch); /*输出非数字*/
//	}
//	n = m;
//	while (m != 0) /*数字逆序*/
//	{
//		nx = nx * 10 + m % 10;
//		m = m / 10;
//	}
//	printf("\n%d reverse number is %d", n, nx);
//}
/*char c;
	int m = 0, n,t=0;
	while ((c = getchar()) != '\n') {
		if ((c >= '0') && (c <= '9')) {
			m = m * 10 + c - '0';
		}
		else {
			printf("%c", c);
		}
	}
	n = m;
	while (n) {
		t = t * 10 + n % 10;
		n = n / 10;
	}
	printf("\n%d\t%d\n",m,t);*/


//#include <stdio.h>
//#define F(x) x - 2
//#define D(x) x*F(x)

//enum ABC { A, B, C };
//int main() {
//	
//	//printf("%d,%d", D(3), D(D(3)));
//	//printf("%d\n", B + 1);
//	/*char* s = "%d,%d\n"; int a = 2, b = 3;*/
//	int a[10] = { 0 }, b[10] = { 0 };
//	printf("%d", (a + (int)b));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int n, k, s, m;
//	for (n = 1; n <= 100; ++n) {
//		k = 1;
//		s = 0;
//		m = n;
//		while (m != 0) {
//			k *= m % 10;//每位数乘积
//			s += m % 10;//每位数和
//			m = m / 10;//返回m/10的值，用于跳出while循环
//		}
//		if (k > s) {
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n, x, y;
//	scanf("%d", &n);
//	for (x = n; x > 0; x--) {
//		for (y = x; y < n; y++) {
//			printf(" ");
//		}
//		for (y = 0; y < 2*x - 1; y++) {
//			printf("*"); 
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i > 0; i--) {
//		for (int j = 0; j < n - i; j++) {
//				printf(" ");
//		}
//		for (int k = 0; k < 2 * i - 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//void main() {
//	int i, j,n = 20;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n- i; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d", j);
//		for (j = i - 1; j >= 1; j--)
//			printf("%d", j);
//		printf("\n");
//	}
//}


//#include <stdio.h>
//#define N 4
//int main() {
//	int a[N][N * 2] = {0},x,y;
//	a[0][0] = 1;
//	for (x = 1; x < N;x++) {
//		a[x][0] = 1;
//		for (y = 1; y <= x * 2;y++) {
//			a[x][y] = a[0][0] + a[x - 1][y-1];
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N * 2 - x;y++) {
//			printf(" ");
//		}
//		for (y = 0; y <= x * 2; y++) {
//			printf("%d", a[x][y]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j,n=4;
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++) {
//		for (j = 0; j < n * 2 - i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j < i;j++) {
//			printf("%d", j);
//		}
//		for (j = i; j > 0;j--) {
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#define N 11
//int main() {
//	int a[N] = { 2, 21, 4, 4, 0, 101, 22, 2, 1, 1,10 };
//	int max, min, i;
//	max = min = a[0];
//	for (i = 0; i < N;i++) {
//		if (a[i]>max) {
//			max = a[i];
//		}
//		else if (a[i] < min) {
//			min = a[i];
//		}
//	}
//	printf("max:%d\n", max);//输出最大值
//	printf("min:%d", min);//输出最小值
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n, x, y;
//	scanf("%d", &n);
//	for (x = 0; x < n;x++) {
//		for (y = n; y > n - x;y--) {
//			printf(" ");
//		}
//		for (y = 0; y < (n - x) * 2 - 1;y++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//void main() {
//	int n,m, c, h;
//	for (n = 1; n <= 100; n++) {
//		m = n;
//		c = 1;
//		h = 0;
//		while (m) {
//			c *= m % 10;
//			h += m % 10;
//			m = m / 10;
//		}
//		if (c > h) {
//			printf("%d\n", n);
//		}
//	}
//}
//double myPow(double x, int y) {
//	double sum = 1;
//	while (y--) {
//		sum *= x;
//	}
//	return sum;
//}
//
//void main() {
//	double x,sum;
//	int y;
//	scanf("%lf,%d", &x, &y);
//	sum = myPow(x, y);
//	printf("%.2lf", sum);
//}


//#include <stdio.h>
//#define N 10
//int main() {
//	int a[N][N] = {0}, x, y;
//	for (x = 0; x < N; x++) {
//		a[x][0] = a[x][x] = 1;
//		for (y = 1; y < x; y++) {
//			a[x][y] = a[x - 1][y] + a[x - 1][y - 1];
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y <= (N - x) * 2; y++) {
//			printf("  ");
//		}
//		for (y = 0; y <= x; y++) {
//			printf(" %-6d ", a[x][y]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#define N 10
//int main() {
//	int a[N]= {0}, f = 0, n=0,i;
//	for (i = 0; i < N;i++) {
//		a[i] = i + 1;
//	}
//	while (n < N) {
//		for (i = 0; i < N;i++) {
//			if (a[i])f++;
//			if (f == 3) {
//				n++;
//				printf("第%d出去: %d : %d\n",n, i, a[i]);
//				a[i] = 0;
//				f = 0;
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int x, y ,t;
//	scanf("%d,%d", &x, &y);
//	/*if (x < y) {
//		t = x;
//		x = y;
//		y = t;
//	}
//	t = x % y;
//	while (t) {
//		x = y;
//		y = t;
//		t = x % y;
//	}*/
//	for (t = x; t % y != 0; t += x);
//	printf("最小公倍数：%d\n", t);
//	t = x * y / t;
//	printf("最大公约数：%d\n", t);
//	return 0;
//}

//#include <stdio.h>
//
//long long fun(long long a, int n) {
//	if (n) {
//		return a + fun(a * 10 + a%10, n - 1);
//	}
//	return 0;
//}
//
//int main() {
//	int a, n;
//	printf("输入a，n：");
//	scanf("%d,%d", &a, &n);
//	printf("%lld", fun(a, n));
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int n, a, s = 0, t;
//	scanf("%d", &n);//n表示要计算的个数
//	scanf("%d", &a);//a的值
//	t = a;
//	for (int i = 0; i < n; i++) {
//		s += a;
//		a = 10 * a + t;//10a+a=>aa...
//	}
//	printf("a+aa+aaa+aaaa+aa...a=%ld", s);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int f = 1, b = 0, t,n =5,i=0;
//	while (n--) {
//		t = b + f;
//		b = f;
//		f = t;
//		printf("%d ", t);
//		i++;
//		if (i % 5 == 0)printf("\n");
//	}
//	return 0;
//}

//unsigned int FactorialByIteration(unsigned int n);
///**
//* 斐波那契数递归
//* @param n
//* @return
//*/
//unsigned int Fibonacci(unsigned int n);
///**
//* 循环实现斐波那契额
//* @param n
//* @return
//*/
//unsigned int FibonacciByIteration(unsigned int n);
//int main() {
//	printf("Fibonacci(1) = %d\n", Fibonacci(1));
//	printf("Fibonacci(5) = %d\n", Fibonacci(5));
//	printf("Fibonacci(10) = %d\n", Fibonacci(10));
//	printf("FibonacciByIteration(1) = %d\n",
//		FibonacciByIteration(1));
//	printf("FibonacciByIteration(5) = %d\n",
//		FibonacciByIteration(5));
//	printf("FibonacciByIteration(10) = %d\n",
//		FibonacciByIteration(10));
//	return 0;
//}
///**
//* 斐波那契数递归实现
//* @param n
//* @return
//*/
//unsigned int Fibonacci(unsigned int n) {
//	if (n == 1 || n == 0) {
//		//f(0) = 0, f(1) = 1
//		return n;
//	}
//	else {
//		//f(n) = f(n - 1) + f(n - 2)
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
///**
//* 循环实现斐波那契额
//* @param n
//* @return
//*/
//unsigned int FibonacciByIteration(unsigned int n) {
//	if (n == 0 || n == 1) {
//		return n;
//	}
//	unsigned int last = 0;
//	unsigned int current = 1;
//	for (int i = 0; i <= n - 2; ++i) {
//		//临时变量
//		unsigned int temp = current;
//		current += last;
//		last = temp;
//	}
//	return current;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10, x = 1,t;
//	//printf("%d天有%d个桃\n", n, x);
//	while (--n>0) {
//		x = (x + 1) * 2;
//		//printf("%d天有%d个桃\n", n, x);
//	}
//	printf("%d", x);
//	return 0;
//}

//#include "stdio.h"
//int main() {
//	int num = 0;
//	int last = 1;
//	printf("第10天有1个桃子\n");
//	for (int i = 9; i > 0; i--) {
//		num = (last + 1) * 2;
//		last = num;
//		printf("第%d天有%d个桃子\n", i, last);
//	}
//	return 0;
//}


//#include <stdio.h>

//int main() {
//	int t = 10;
//	double n = 100,sum;
//	sum = 0;
//	while (--t) {
//		sum +=n + n / 2;
//		n = n / 2;
//	}
//	printf("%lf\n", sum);
//	printf("%lf\n", n);
//	return 0;
//}

//int main() {
//	int i;
//	double n = 100, m = 0;//n:高度 m:路径和
//	for (i = 1; i < 10; i++) {
//		m += n + n / 2;// 一次走过的路程相当于高度加上一半的高度
//			n = n / 2;//每次弹回一半高度
//	}
//	printf("小球一共经过：%lf ; 第10次反弹高度为: %lf \n", m,n);
//	return 0;
//}

//#include <stdio.h>
//#define PI  3.1415926
//
////计算圆柱体表面积
//double fun1(double r, double h) {
//	//      顶部和底部的表面积  +  侧面的表面积
//	return ((2 * PI * r * r) + (2 * PI * r * h));
//}
////计算圆柱体体积
//double fun2(double r, double h) {
//	return (PI * r * r * h);
//}
//int main() {
//	double r, h;
//	printf("请输入半径和高：");
//	scanf("%lf,%lf", &r, &h);
//	printf("%lf\n", fun1(r, h));
//	printf("%lf\n", fun2(r, h));
//}

//#include <stdio.h>
//
//int main() {
//	char c[10][10] = { "abc","def","ghi" };
//	printf("%p\n",c);
//	printf("%p\n", c[0]);
//	printf("%s\n", c);
//	printf("%s\n", c[0]);
//
//
//	return 0;
//}


//#include <stdio.h>
//void ltim(char *c) {
//	char* t = c;
//	while (*t==' ') {
//		t++;
//	}
//	while (*c) {
//		*c = *t;
//		c++;
//		t++;
//	}
// }
//int main() {
//	char c[100] = "a  ac a b aa";
//	gets(c);
//	ltim(c);
//	printf("%s",c);
//	return 0;
//}

//void fun(char* c, int n) {
//	int i = 0,x=0,x1;
//	if (n < 0) {
//		c[i++] = '-';
//		x += 1;
//		n = -n;
//	}
//	x1 = n;
//	while (x1) {
//		x++;
//		x1 = x1 / 10;
//	}
//	c[x] = '\0';
//	x -= 1;
//	while (x >= i) {
//		c[x] = n % 10 + '0';
//		x--;
//		n /= 10;
//	}
//}
//
//int main() {
//	int n = -123;
//	char c[100];
//	scanf("%d", &n);
//	fun(c, n);
//	printf("%s", c);
//	return 0;
//}


//#include <stdio.h>
//#define N 4
//#define M 3
//void fun(int* (*a), int n) {
//	int x, y, t;
//	for (x = 0; x < n ;x++) {
//		for (y = 0; y < n - x- 1;y++) {
//			if (*((*a) + y) > *((*a) + y + 1)) {
//				t = *((*a)+ y);
//				*((*a) + y) = *((*a) + y + 1);
//				*((*a) + y + 1) = t;
//			}
//		}
//	}
//}
//int main() {
//	int a[M][N] = { 4,6,2,7,
//					9,5,12,5,
//					3,7,9,0 },*pa[N];
//	int i,j;
//	printf("\n");
//	for (i = 0; i < M;i++) {
//		pa[i] = a[i];
//		fun(pa+i, N);
//	}
//	for (i = 0; i < M;i++) {
//		for (j = 0; j < N;j++) {
//			printf("%-2d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//#include <stdio.h>
//#define N 4
//#define M 3


//int main() {
//
//
//	int a[M][N] = { 4,6,2,7,9,5,12,5,3,7,9,0 }, i, j, k, t;
//	int** p, * pa[M];
//	//printf("请输入短阵元素：\n");
//	//for (i = 0; i < M; i++)
//	//	//双重循环，按行输入矩阵的每个元素
//	//	for (j = 0; j < N; j++)
//	//		scanf("%d", &a[i][j]);
//	for (i = 0; i < M; i++)
//	{
//		pa[i] = a[i];
//	}
//	p = pa;
//	for (k = 0; k < M; k++, p++)
//	{
//		for (i = 1; i <= N - 1; i++)
//		{
//			for (j = 0; j < N - i; j++)
//			{
//				if (*(*p + j) > *(*p + j + 1))//若同一行相邻元素逆序，则交换
//				{
//					t = *(*p + j);
//					*(*p + j) = *(*p + j + 1);
//					*(*p + j + 1) = t;
//					printf("排序后的矩阵:\n");
//					for (i = 0; i < M; i++) {
//						for (j = 0; j < N; j++) {
//							printf("%-2d ", a[i][j]);
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main() {
//
//	int a[10],i, c = 0;
//	float  sum = 0;
//	for (i = 0; i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10;i++) {
//		if (a[i]>=0) {
//			sum += a[i];
//			c++;
//		}
//	}
//	printf("正数有%d\n平均值%.2f\n", c, sum / c);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a[3][3], i, j, sum=0;
//		for (i = 0; i < 3; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				scanf("%d", &a[i][j]);
//			}
//		}
//		for (i = 0; i < 3; i++)
//		{
//			sum += a[i][i];
//		}
//		printf("主对角线为%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//	char c[100];
//	int i = 0;
//	scanf("%s", c);
//	//while (c[i] != '\0')i++;
//	i = strlen(c);
//	while (--i >= 0)
//		printf("%c", c[i]);
//	return 0;
//}

//#include <stdio.h>
//#define N 3
//int main() {
//	int a[N][N], b[N][N], c[N][N];
//	int x, y;
//	for (x = 0; x < N;x++) {
//		for (y = 0; y < N;y++) {
//			scanf("%d", &a[x][y]);
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N; y++) {
//			c[y][x] = a[x][y];
//			
//		}
//	}
//	for (x = 0; x < N; x++) {
//		for (y = 0; y < N; y++) {
//			b[x][y] = a[x][y] + c[x][y];
//			printf("%-2d ", b[x][y]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	void div(int*, int*);
//	int a[5] = { -5,0,60,45,34 }, i = 0, j = 2;
//	while (a[i] <= 0)
//		i++;
//	while (a[i] != 1)
//		div(a + i, &j);
//}
//void div(int* n, int* k)
//{
//	if (*n % *k == 0) {
//		printf("%d,%d\n", *n, *k);
//		*n /= *k;
//	}
//	else  (*k)++;
//}


//#include <stdio.h>
//void main()
//{
//	int s[8], i; char ch = 'B' - 1;     /* 字符A的ASCII码为65 */
//	printf("%c  %d\n", ch, ch);
//	for (i = 7; i >= 0; i--) {
//		s[i] = ch & 1;
//		ch = ch >> 1;
//	}
//	for (i = 0; i < 8; i++)  printf("%d", s[i]);
//	printf("\n");
//}

//int main() {
//	char str1[100] = "", str2[100] = "";
//	int m, n, j = 0;
//	printf("输入str1:");
//	scanf("%s",str1);
//	printf("输入m,n:");
//	scanf("%d%d",&m,&n);
//	/*while ((str1 + m + j) < (str1+m + n)) {
//		str2[j] = str1[m+j];
//		j++;
//	}*/
//	while (n>0) {
//		//abcdefg
//		//m = 2
//		//n = 0
//		//j = 3
//		//str2 = cde\0
//		str2[j] = str1[m + j];
//		n--;
//		j++;
//	}
//	str2[j] = '\0';
//	puts(str2);
//	return 0;
//}


//#include <stdio.h>
//
//int main(){
//	int n, arr[20] = { 1,1 };
//	for (n = 2; n < 20;n++) {
//		arr[n] = arr[n - 1] + arr[n - 2];
//	}
//	printf("前20项为\n");
//	for (n = 0; n < 20; n++) {
//		printf("第%-2d项为: %d\n", n + 1, arr[n]);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int fun(char str1[], char str2[]) {
//	int n = 0,s1=0,ss1,s2;
//	for (s1 = 0; s1 < strlen(str1); s1++) {
//		ss1 = s1;
//		s2 = 0;
//		while (str1[ss1] == str2[s2]&&str2[s2]!='\0') {
//			ss1++;
//			s2++;
//		}
//		if (str2[s2]=='\0') {
//			n++;
//		}
//	}
//	return n;
//
//}
//
//int main() {
//	char s1[100] = "", s2[100] = "";
//	gets(s1);
//	gets(s2);
//	printf("%d", fun(s1, s2));
//	return 0;
//}


//#include <stdio.h>
//int suffix(int a[], int n) {
//	int max=0, i;
//	for (i = 1; i < n; i++) {
//		if (a[i] > a[max]) max = i;
//	}
//	return max;
//}
//int main() {
//	int a[10], i, max;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	max = suffix(a,10);
//	printf("arr[%d] = %d", max, a[max]);
//}



//#include <stdio.h>
//
//int comp(int x, int y) {
//	int n;
//	if (x > y) n = 1;
//	else if (x == y) n = 0;
//	else n = -1;
//
//	return n;
//
//}
//
//int main() {
//	int a[10], b[10], m, n, d, i;
//	m = n = d = 0;
//	printf("输入数组a");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("输入数组b");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &b[i]);
//	}
//	
//	for (i = 0; i < 10; i++) {
//		switch (comp(a[i], b[i])) {
//		case 1:m++; break;
//		case 0:d++; break;
//		case -1: n++; break;
//		}
//	}
//	printf("a数组中的元素大于b数组元素的有 %d 个\n小于的有%d 个\n等于的有%d 个\n",m,n,d);
//	
//}


//void main()
//{ int x = 3;
//printf("%d ,%d\n", x++, ++x);
//}




//#include <stdio.h>
//
//int main() {
//	float lr, slr=0, sum = 0;
//	scanf("%f",&lr);
//
//	if (lr>1000000) {
//		slr = lr - 1000000;
//		lr -= slr;
//		sum += slr * 0.01;
//	}
//	if (lr > 600000) {
//		slr = lr - 600000;
//		lr -= slr;
//		sum += slr * 0.015;
//	}
//	if (lr > 400000) {
//		slr = lr - 400000;
//		lr -= slr;
//		sum += slr * 0.03;
//	}
//	if (lr > 200000) {
//		slr = lr - 200000;
//		lr -= slr;
//		sum += slr * 0.05;
//	}
//	if (lr > 100000) {
//		slr = lr - 100000;
//		lr -= slr;
//		sum += slr * 0.075;
//	}
//	if (lr <= 100000) {
//		sum += lr * 0.1;
//	}
//	printf("sum = %.2f", sum);
//}


//#include<stdio.h>
//main()
//{
//	int i;
//	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	scanf("%d", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.015;
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000) * 0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000) * 0.015;
//	else
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	printf("bonus=%d\n", bonus);
//}

//#include <stdio.h>
//
//int main() {
//	int n, i, f = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++) {
//		if (n%i==0) {
//			if (f)printf("*");
//			f = 1;
//			printf("%d", i);
//			i = 1;
//			n =n/i;
//		}
//		if (n == 1)break;
//	}
//	return 0;
//}


//main()
//{
//	int n, i;
//	printf("\nplease input a number:\n");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n != i)
//		{
//			if (n % i == 0)
//			{
//				printf("%d*", i);
//				n = n / i;
//			}else break;
//		}
//	}printf("%d", n);
//}


//int main() {
//	int a, i, aa[4], t;
//	scanf("%d", &a);
//	aa[0] = a % 10;
//	aa[1] = a % 100 / 10;
//	aa[2] = a % 1000 / 100;
//	aa[3] = a / 1000;
//	for (i = 0; i <= 3; i++) {
//		aa [i] += 5;
//		aa [i] %= 10;
//	}
//	for (i = 0; i <= 3 / 2; i++) {
//		t = aa[i];
//		aa [i] = aa[3 - i];
//		aa[3 - i] = t;
//	}
//	for (i = 3; i >= 0; i--)
//		printf("%d", aa[i]);
//}

//int main() {
//	int n, i, n1 = 0;
//	scanf("%d", &n);
//	while (n) {
//		n1 = n1 * 10 + (n % 10 + 5) % 10;
//		n = n / 10;
//	}
//	printf("%d", n1);
//	return 0;
//}