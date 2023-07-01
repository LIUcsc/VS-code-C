//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//int my_strlen(char* ch) {
//	assert(ch);
//	if (*ch=='\0') {
//		return 0;
//	}
//	return 1 + my_strlen(ch+1);
//}
//char* my_strcpy(char* ch1, const char* ch2) {
//	assert(ch2);
//	assert(ch1);
//	//×Ö·û´®¿½±´
//	char* ret = ch1;
//	while (*ch1++ = *ch2++) {
//		;
//	}
//	return ret;
//}
//
//char* mt_strcat(char* dest, const char* src) {
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest) {
//		dest++;
//	}
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//
//int my_strcmp(const char* dest, const char* src) {
//	assert(dest && src);
//	/*while (*dest) {
//		if (*dest == *src) {
//			dest++;
//			src++;
//		}
//		else {
//			return *dest - *src;
//		}
//	}
//	return 0;*/
//
//	while (*dest==*src) {
//		if (*dest == '\0')return 0;
//		dest++;
//		src++;
//	}
//	/*if (*dest>*src) {
//		return 1;
//	}
//	else {
//		return -1;
//	}*/
//	return (*dest - *src); 
//}
//char* my_strncpy(char* dest,const char* src, int num) {
//	char* start = dest;
//	/*while (num--) {
//		*dest = *src;
//		dest++;
//		src++;
//		while (*src == '\0') {
//			*dest = '\0';
//			dest++;
//			num--;
//			if (num==0) {
//				break;
//			}
//		}
//		
//	}*/
//	
//	while (num && (*dest++ = *src++))
//		num--;
//	if(num)
//		while(--num)
//			*dest++ = '\0';
//	return start;
//}
//int main() {
//	char ch[10] = "kkkkkkkkk";
//	char ch2[] = "ab\0cd";
//	//int n;
//	//n = my_strcmp(ch, ch2);
//	strncpy(ch,ch2,5);
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//	//printf("%d\n", n);
//
//	return 0; 
//}