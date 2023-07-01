//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int val(void* s1,void* s2) {
//	return (*(int*)s1 - *(int*)s2);
//}
//void myqsort(void* arr,int len,int sz,int (*fun)(void* ,void*)) {
//	int i,x,y;
//	char tmp;
//	for (i = 0; i < len; i++) {
//		for (y = 0; y < len - i-1; y++) {
//			if (fun((char*)arr + y * sz, (char*)arr + (y + 1) * sz) > 0) {
//				for (x = 0; x < sz; x++) {
//					tmp = *((char*)arr + (y * sz + x));
//					*((char*)arr + (y * sz + x)) = *((char*)arr + (y + 1) * sz + x);
//					*((char*)arr + (y + 1) * sz + x) = tmp;
//				}
//			}
//		}
//		
//	}
//}
//int hc(char ch1[], char ch2[], int sz) {
//	int left = 0;
//	int right = sz-1;
//	while (sz--) {
//		if (ch1[left]== ch2[right]) {
//			left++;
//			right--;
//		}
//		else {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void str_rotate(char ch1[],int n) {
//	//字符串旋转
//	int i;
//	int right =(int) strlen(ch1) - 1;
//	char tmp;
//	/*for (i = 0; i < n;i++) {
//		tmp = ch1[i];
//		ch1[i] = ch1[right - i];
//		ch1[right - i] = tmp;
//	}*/
//	/*while (n--) {
//		tmp = ch1[0];
//		for (i = 0; i < strlen(ch1) - 1; i++) {
//
//			ch1[i] = ch1[i + 1];
//		}
//		ch1[i] = tmp;
//	}*/
//	while (n--) {
//		tmp = ch1[0];
//		for (i = 0; ch1[i]; i++) {
//
//			ch1[i] = ch1[i + 1];
//		}
//		ch1[right] = tmp;
//	}
//	
//}
//void reverse(char* ch, int len) {
//	//字符串反转
//	assert(ch);
//	int x;
//	char tmp;
//	int left = 0;
//	int right = len-1;
//	for (x = 0; x < len / 2; x++) {
//		tmp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse2(char* left, char* right) {
//	//字符串反转
//	assert(left);
//	assert(right);
//	char tmp;
//	while (left<right) {
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//
//
//void str_rotate2(char* ch,int n) {
//	assert(ch);
//	//字符串旋转
//	int len =(int) strlen(ch);
//	int i=0,t=0;
//	int left = 0;
//	int right = 0;
//	//char tmp;
//	assert(n <= len);
//	reverse2(ch, ch + n - 1);
//	reverse2(ch + n, ch + len - 1);
//	reverse2(ch, ch + len - 1);
//	
//
//	//反转前部分字符串
//	/*left = 0;
//	right = n-1;
//	for (x = 0; x < n/2;x++) {
//		tmp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = tmp;
//		left++;
//		right--;
//	}*/
//	//reverse(ch,n);
//	//reverse2(ch, ch + n - 1);
//	//反转后部分字符串
//	/*left = n;
//	right = len - 1;
//	for (x = 0; x < (len - n)/2; x++) {
//		tmp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = tmp;
//		left++;
//		right--;
//	}*/
//	//reverse(ch+n, len-n);
//	//reverse2(ch+n,ch+len-1);
//	//字符串整体反转
//	/*left = 0;
//	right = len -1;
//	for (x = 0; x < len / 2; x++) {
//		tmp = *(ch + left);
//		*(ch + left) = *(ch + right);
//		*(ch + right) = tmp;
//		left++;
//		right--;
//	}*/
//	//reverse(ch, len);
//	//reverse2(ch, ch + len - 1);
//}
//int if_str_reverse(char* s1,char* s2) {
//	//判断字符串s2是否为旋转后的s1；
//	int len =(int) strlen(s1);
//	int i;
//	for (i = 0; i < len;i++) {
//		str_rotate2(s1, 1);
//		if (strcmp(s1, s2)==0) {
//			str_rotate2(s1, i+1);
//			return 1;
//		}
//		//str_rotate2(s1, i);
//	}
//	str_rotate2(s1, i+1);
//	return 0;
//}
//int main() {
//	/*int arr[] = { 5,4,3,6,7,8,2,1,9,10 };
//	int x;
//	myqsort(arr,10,4,val);
//
//	for (x = 0; x < 10; x++) {
//				printf(" %d ", arr[x]);
//	}*/
//	char ch1[] = "ABCDEF";
//	char ch2[] = "ABCDEF";
//	str_rotate2(ch2, 3);
//	int n = if_str_reverse(ch1,ch2);
//	printf("%d\n", n);
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	return 0;
//}