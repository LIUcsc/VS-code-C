//#include <stdio.h>
//int t(int money) {
//	//n ÿƿ����Ǯ�� x ����ƿ�ӻ�һƿ
//	int n = 1, x = 2;
//	int sum=0 , empty = money/n;
//	sum += empty;
//	while (empty>=x) {
//		sum += empty/x;
//		empty -= empty / x;
//	}
//	
//	return sum;
//}
//void mystrcpy(char *ch1,char *ch2) {
//	//�ַ�������
//	while (*ch1++ = *ch2++) {
//		;
//	}
//}
//void numb(int* arr,int sz) {
//	int i,x,n=sz;
//	int tmp;
//	int left = 0;
//	int right = sz - 1;
//	/*for (i = 0; i < sz; i++) {
//		if (arr[i]%2==0) {
//			cmp = arr[i];
//			for (x = i; x < sz;x++) {
//				arr[x] = arr[x+1];
//			}
//			arr[n - 1] = cmp;
//		}
//	}*/
//	/*while (left<right) {
//		while (arr[left] % 2 == 0) {
//			if (arr[right] % 2 == 1) {
//				tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//				break;
//			}
//			right--;
//			if (right==left) {
//				break;
//			}
//		}
//		left++;
//	}*/
//	while (left < right) {
//		//���������ҵ�ż���˾�ͣ����
//		while ((left < right) && (arr[left] % 2 == 1)) {
//			left++;
//		}
//		//���������ҵ������˾�ͣ����
//		while ((right > left) && (arr[right] % 2 == 0)) {
//			right--;
//		}
//		if (left< right) {
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		
//	}
//}
//int main() {
//	char ch1[] = "abcd";
//	char ch2[] = "########";
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int x;
//	numb(arr,sz);
//	for (x = 0; x < sz; x++) {
//		printf(" %d ", arr[x]);
//	}
//	return 0;
//}