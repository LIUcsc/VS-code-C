//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//
//int my_strncmp(char* s1,char* s2,int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if ((*(s1 + i) == *(s2 + i))) {
//
//		}
//		else {
//			if (*(s1 + i) > *(s2 + i)) {
//				return 1;
//			}
//			else {
//				return -1;
//			}
//		}
//	}
//	return 0;
//}
//
///*while (*ss1) {
//		if (*ss1 == *ss2) {
//			ss2++;
//			ss1++;
//			if (*ss2=='\0') {
//				return ss2;
//			}
//		}
//		else if(ss1==){
//			ss2 = s2;
//			ss1++;
//		}
//
//	}
//	return NULL;*/
//char* my_strstr(const char *p1,const char* p2) {
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = (char*)p1;
//	
//	
//	while (*s2 == '\0') {
//		return s1;
//	}
//	while (*cur) {
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0') {
//			return cur;  
//		}
//		cur++;
//	}
//	return NULL;
//	
//}
//
//
//
//
//char* my_strstr2(char* p1,char* p2) {
//	char* s1 = p1;
//	char* s2 = p2;
//	char* str = p1;
//	while (!*s2) {
//		return s1;
//	}
//	while (*str) {
//		s1 = str;
//		s2 = p2;
//		while (*s1 && *s2 && (*s1==*s2)) {
//			s1++;
//			s2++;
//		}
//		if (!*s2) {
//			return str;
//		}
//		str++;
//	}
//	return NULL;
//}
//int main() {
//	char ch[20] = "abbbcdef";
//	char ch2[20] = "";
//	char* n = my_strstr(ch, ch2);
//	
//	
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//	printf("n=%p\n", n);
//	printf("*n=%s\n", n);
//	printf("%p\n", ch+2);
//
//	return 0;
//}