//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include  <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//void bobble_sort(int arr[], int sz) {
//	int x, y, z, flat ;
//	
//	for (y = 0; y < sz-1; y++)
//	{
//		flat = 0;
//		for (x = 0; x < sz-1-y; x++)
//		{
//			if (arr[x] > arr[x + 1]) {
//				z = arr[x];
//				arr[x] = arr[x + 1];
//				arr[x + 1] = z;
//				flat = 1;
//			}
//		}
//		if (flat == 0) {
//			break;
//		}
//	}
//}
//
//struct Stu {
//	char name[10];
//	int age;
//};
//
//int cmpfunc(const void* a,const void* b) {
//	// void* ���ض����͵�ָ��
//	//void* ���͵�ָ�벻��ֱ�ӽ��н����ò�����Ҫ����ǿ������ת��Ϊ�ض�������
//	return *(int*)a - *(int*)b; //a����b����������aС��b���ظ���
//}
//int cfch(const void* a, const void* b) {
//	return *(char*)b - *(char*)a;
//}
//int cmpfunc2(const void* a, const void* b) {
//	if (*(float*)a > *(float*)b) {
//		return 1;
//	}else if (*(float*)a < *(float*)b) 
//	{
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int cmpfunc_agt(const void* a, const void* b) 
//{
//	//int x = ((struct Stu*)a)->age - ((struct Stu*)b)->age;
//	
//	return (*(struct Stu*)a).age - (*(struct Stu*)b).age;
//}
//int cmpfunc_name(const void* a, const void* b)
//{
//	//return strlen((*(struct Stu*)a).name) - strlen( (*(struct Stu*)b).name);
//	return strcmp((*(struct Stu*)a).name ,(*(struct Stu*)b).name);
//}
//
//void intarr(int* arr,int sz ) {
//	int x;
//	qsort(arr, sz, sizeof(int), cmpfunc);
//	for (x = 0; x < sz; x++)
//	{
//		printf("%d", arr[x]);
//	}
//}
//
//int main() {
//	int arr[10] = { 6,5,7,4,8,9,3,2,0,1 };
//	float arr2[5] = { 2.2f,4.4f,1.1f,3.3f,2.2f };
//	char ch[] = "DCBA";
//	struct Stu s[] = { {"zaadd",18},{"dccc",20},{"abb",19} };
//	int arrsz = sizeof(arr) / sizeof(arr[0]);
//	int arr2sz = sizeof(arr2) / sizeof(arr2[0]);
//	int chsz = sizeof(ch) / sizeof(ch[0]);
//	int szs = sizeof(s) / sizeof(s[0]);
//	int x;
//	//bobble_sort(arr, sz);
//	//intarr(arr, arrsz);
//	qsort(arr2, arr2sz, sizeof(arr2[0]), cmpfunc2);
//	qsort(ch, chsz, sizeof(ch[0]), cfch);
//	qsort(s, szs, sizeof(s[0]), cmpfunc_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//���������������������鵥��Ԫ�صĴ�С
//	//���ĸ�����������ָ�룬�Ƚ�����Ԫ�صĺ�����ַ
//
//	/*for (x = 0; x < chsz; x++)
//	{
//		printf("%c", ch[x]);
//	}*/
//
//	for (x = 0; x < szs; x++)
//	{
//		printf(" %s", s[x].name);
//		printf(" %d \n", s[x].age);
//	}
//	
//	return 0;
//}