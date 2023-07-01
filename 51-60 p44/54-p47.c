//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int if_str_reverse(char* s1, char* s2) {
//	//判断字符串s2是否为旋转后的s1；
//	int len = strlen(s1);
//	int len2 = strlen(s2);
//	if (len != len2) return 0;
//	int i;
//	/*for (i = 0; i < len;i++) {
//		if (strcmp((s1+i),s2)==0) {
//			*(s1 + len) = '\0';
//			return 1;
//		}
//		*(s1 + len + i) = *(s1 + i);
//		*(s1 + len + i + 1) = '\0'; 
//	}
//	*(s1 +len ) = '\0';*/
//
//	
//	/*for (i = 0; i < len; i++) {
//		strncat(s1, s1, i);
//		if (strcmp((s1 + i), s2) == 0) {
//			*(s1 + len) = '\0';
//			return 1;
//		}
//		*(s1 + len) = '\0';
//	}
//	*(s1 + len) = '\0';*/
//
//	strncat(s1, s1, len);
//	if (strstr(s1, s2)!=NULL) {
//		return 1;
//	}
//	return 0;
//}
////int main() {
////	char ch1[20] = "ABCDEF";
////	char ch2[] = "EFABCD";
////	if (if_str_reverse(ch1, ch2)) {
////		printf("1\n");
////	}
////	else {
////		printf("0\n");
////	}
////	printf("%s\n",ch1);
////	return 0;
////}
//
//void parr(int arr[][20], int l, int r) {
//	int x, y;
//	for (x = 0; x < l;x++) {
//		for (y = 0; y < r;y++) {
//			arr[x][y] = x + y+1;
//		}
//	}
//}
//
////int sarr(int arr[20][20], int l, int r, int n) {
////	int x=0, y=0;
////	for (x = 0; x < l;x++) {
////		if (arr[x][r - 1] >= n) {
////			for (y = 0; y < r; y++) {
////				if (arr[x][y]==n) {
////					printf("arr[%d][%d]=%d\n", x, y, n);
////					return 1;
////				}
////			}
////		}
////		r--;
////	}
////	printf("没找到%d\n", n);
////		return 0;
////}
//
//int FindNum(int arr[20][20], int n, int row, int col) {
//	int x=0, y=col-1;
//	while (x<row && y>=0) {
//		if (arr[x][y] < n) {
//			x++;
//		}
//		else if (arr[x][y] > n) {
//			y--;
//		}
//		else if (arr[x][y] == n) {
//			printf("arr[%d][%d]=%d\n", x, y, n);
//			return 1;
//		}
//	}
//	printf("没找到%d\n", n);
//	return 0;
//	
//}
//#include <math.h>
//int FindNum2(int arr[20][20], int n, int* row, int* col) {
//	int x = 0, y = *col - 1;
//	while (x < *row && y >= 0) {
//		if (arr[x][y] < n) {
//			x++;
//		}
//		else if (arr[x][y] > n) {
//			y--;
//		}
//		else if (arr[x][y] == n) {
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//
//
//
//int main() {
//	int arr[20][20];
//	int l = 10, r = 10;
//	int x, y;
//	parr(arr, l, r);
//	for (x = 0; x < l; x++) {
//		for (y = 0; y < r; y++) {
//			printf(" %-2d ", arr[x][y]);
//		}
//		printf("\n");
//	}
//	//FindNum(arr,19,l,r);
//	if (FindNum2(arr, 8, &l, &r)) {
//		printf("arr[%d][%d]\n",l,r);
//	}
//	/*printf("%lf\n", exp(3.0));
//	printf("%lf\n",2.718282* 2.718282 * 2.718282);*/
//	return 0;
//}