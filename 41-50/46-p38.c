#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *e1,char* e2,int sz) {
	int i;
	char tmp;
	for (i = 0; i < sz;i++) {
		/*tmp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = tmp;*/

		/*tmp = *(char*)e1;
		*(char*)e1 = *(char*)e2;
		*(char*)e2 = tmp;
		((char*)e1)++;
		((char*)e2)++;*/

		tmp = *e1;*e1 = *e2;*e2 = tmp;e1++;e2++;

	}
}
void bubble_sort(void* base,int num,int width, int (*smp)(void* e1,void* e2)) {
	int i, n,m;
	for (i = 0; i < num - 1;i++) {
		for (n = 0; n < num - 1 - i; n++) {
			if ((*smp)((char*)base + (n * width), (char*)base + ((n + 1) * width))  > 0) {
				swap((char*)base + (n * width), (char*)base + ((n + 1) * width), width);
			}
		}
	}
}
cmpfun1(void* s1,void* s2) {
	return *((int*)s1) - *((int*)s2);
}
cmpfun2(void* s1, void* s2) {
	return *((char*)s1) - *((char*)s2);
}
struct Stu {
	char name[10];
	int age;
};
cmpfun3(void* s1, void* s2) {
	return (*(struct Stu*)s1).age - (*(struct Stu*)s2).age;
}

cmpfun4(void* s1, void* s2) {
	return strcmp((*(struct Stu*)s1).name, (*(struct Stu*)s2).name);
}

int main() {
	int arr[] = { 2,1,3,5,4,7,6,9,8 };
	char arr2[] = "BCADGEFHI";
	struct Stu s1[] = { {"cliu",20},{"acheng",18},{"bwang",19} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int sz3 = sizeof(s1) / sizeof(s1[0]);
	int i;
	bubble_sort(arr, sz, sizeof(arr[0]), cmpfun1);
	bubble_sort(arr2, sz2, sizeof(arr2[0]), cmpfun2);
	bubble_sort(s1, sz3, sizeof(s1[0]), cmpfun4);
	for (i = 0; i < sz; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < sz2;i++) {
		printf(" %c",arr2[i]);
	}
	printf("\n");
	for (i = 0; i < sz3; i++) {
		printf("  %s %d", (s1[i]).name,(s1[i]).age);
	}
	return 0;
}  