//#include <stdio.h>
//#include <string.h>
//struct s {
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* s1, void* s2, int sz) {
//	//所有类型拷贝
//	void* p1 = (char)s1;
//	int i = 0;
//	for (i = 0; i <= sz; i++) {
//		*(((char*)s1) + sz - i) = *(((char*)s2) + sz - i);
//	}
//	return p1;
//}
//
//
//void* my_memmove(void* s1, void* s2, int sz) {
//	//所有类型拷贝，内存重叠也可以
//	void* ss1 = s1;
//
//	if (s1 < s2 || s1> (char*)s2+sz) {
//		while (sz--) {
//			*((char*)s1)++ = *((char*)s2)++;
//		}
//	}
//	else {
//		while (sz--) {
//			*((char*)s1 + sz) = *((char*)s2 + sz);
//		}
//	}
//	/*if (s1<s2) {
//		while (sz--) {
//			*((char*)s1)++ = *((char*)s2)++;
//		}
//	}
//	else {
//		while (sz--) {
//			*((char*)s1 + sz) = *((char*)s2 + sz);
//		}
//	}*/
//	return ss1;
//}
//int main() {
//	int arr1[100] = { 1,2,2,4,5,6,7,8,9,10}; 
//	char arr2[20] = "***************";
//	int i;
//
//	//int ret = memcmp(arr1, arr2, 9);//比较字节
//
//	memset(arr2, '@', 10);
//
//	printf("%s ", arr2);
//
//	/*int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	struct s s1[] = { {"xiaoliu",18},{"hehe",88} };
//	struct s s2[3] = { 0 };
//	my_memcpy(s2, s1, sizeof(s1));*/
//
//	/*my_memcpy(arr1+2, arr1, 20);*/
//
//	/*my_memmove(arr1+10, arr1, 20);
//	for (i = 0; i < 20; i++) {
//		printf("%d ",arr2[i]);
//	}*/
//	return 0;
//}