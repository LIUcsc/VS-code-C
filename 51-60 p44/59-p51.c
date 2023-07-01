//#define _CRT_SECURE_NO_WARNINGS
////#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//
//
///*字符分类函数：
//* 头文件为： ctype.h
//
//函数			如果他的参数符合下列条件就返回真
//iscntrl		任何控制字符
//isspace		空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//isdigit		十进制数字 0~9
//isxdigit	    十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
//islower		小写字母a~z
//isupper		大写字母A~Z
//isalpha		字母a~z或A~Z
//isalnum		字母或者数字，a~z,A~Z,0~9
//ispunct		标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph		任何图形字符
//isprint		任何可打印字符，包括图形字符和空白字符
//
//*/
//
//
//
//int main() {
//	// 0 - No error 
//	// 1 - Operation not permitted
//	// 2 - No such file or directory
//	/*char* str = strerror(2);
//	printf("%s\n",str);*/
//
//
//	/*FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n",strerror(errno));
//	}else {
//		printf("0000" );
//	}*/
//
//
//	char ch[] = "I Abb Cdd F";
//	char* ch2 = tolower(ch);
//	int i = 0;
//	while (ch[i]) {
//		ch [i] = tolower(ch[i]);//大写字母转小写
//		i++;
//	}
//	printf("%s\n", ch);
//	i = 0;
//	while (ch[i]) {
//		
//		ch[i] = toupper(ch[i]);//小写字母转大写
//		i++;
//	}
//	printf("%s\n", ch);
//	return 0;
//}