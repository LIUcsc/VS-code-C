//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//char* my_strtok(char* p1,char* p2) {
//	char* s1 = p1;
//	char* s2 = p2;
//	static char*  ss1 = NULL;
//	char* ss2 = NULL;
//	 while (*s1) {
//		while (*s2) {
//			if (*s1==*s2) {
//				*s1 = '\0';
//				s1++;
//				ss1 = s1;
//				return p1;
//			}
//			s2++;
//		}
//		s2 = p2;
//		s1++;
//	}
//	 s1 = ss1;
//	 ss2 = ss1;
//	while (*s1) {
//		
//			while (*s2) {
//				if (*s1 == *s2) {
//					*s1 = '\0'; 
//					s1++;
//					ss1 = s1;
//					return ss2;
//				}
//				s2++;
//			}
//		s2 = p2;
//		s1++;
//	}
//	return NULL;
//
//}
//
//char* my_strtok2(char* p1, char* p2) {
//	//×Ö·û´®ÇÐ¸î£¬ÒÔp2ÖÐµÄ×Ö·ûÎªÇÐ¸î·û
//	char* s1 = p1;
//	char* s2 = p2;
//	static char* p3 = NULL;
//	char* s4 = p1;
//	static int n = 1;
//	if (n == 0) {
//		return NULL;
//	}
//	if (p1 == NULL) {
//		 s1 = p3;
//		 s4 = p3;
//	}
//	if (!*p2) {
//		 return NULL;
//	}
//	while (*s1) {
//		while (*s2) {
//			if (*s1 == *s2) {
//				*s1 = '\0';
//				s1++;
//				p3 = s1;
//				return s4;
//			}
//			s2++;
//		}
//		s2 = p2;
//		s1++;
//	}
//	if (*s1 == '\0') {
//		n = 0;
//	}
//	return s4;
//}
//int main() {
//	char ch[200] = "200@qeev.vc";
//	char ch1[200] = "";
//	strcpy(ch1, ch);
//	char ch2[20] = "@.";
//	char* ch3 = NULL;
//	
//
//	for (ch3 = my_strtok2(ch1, ch2); ch3 != NULL; ch3 = my_strtok2(NULL, ch2)) {
//		printf("%s\n", ch3);
//	}
//
//	/*ch3 = strtok(ch, ch2);
//	printf("%s\n", ch3);
//	ch3 = strtok(NULL, ch2);
//	printf("%s\n", ch3);
//	ch3 = strtok(NULL, ch2);
//	printf("%s\n", ch3);*/
//	return 0;
//}