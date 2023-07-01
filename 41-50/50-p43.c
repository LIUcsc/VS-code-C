//#include <stdio.h>
//void fun(char* s1, char* s2) {
//	int x, y, j;
//	for (x = 0; s2[x];x++) {
//		for (y = 0; s1[y]; y++) {
//			if (s2[x] == s1[y] ) {
//				for (j = x; s1[j]; j++) {
//					s1[j] = s1[j + 1];
//				}
//			}
//		}
//	}
//}
//int main() {
//	/*char s1[300] = "abcaa63akdfk", s2[300] = "ayk5";
//	fun(s1,s2);
//	printf("%s\n", s1);*/
//
//
//
//	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));*/
//
//	/*char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);*/
//
//
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c }; 
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}