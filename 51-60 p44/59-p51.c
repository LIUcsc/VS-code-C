//#define _CRT_SECURE_NO_WARNINGS
////#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//
//
///*�ַ����ຯ����
//* ͷ�ļ�Ϊ�� ctype.h
//
//����			������Ĳ����������������ͷ�����
//iscntrl		�κο����ַ�
//isspace		�հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit		ʮ�������� 0~9
//isxdigit	    ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower		Сд��ĸa~z
//isupper		��д��ĸA~Z
//isalpha		��ĸa~z��A~Z
//isalnum		��ĸ�������֣�a~z,A~Z,0~9
//ispunct		�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph		�κ�ͼ���ַ�
//isprint		�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
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
//		ch [i] = tolower(ch[i]);//��д��ĸתСд
//		i++;
//	}
//	printf("%s\n", ch);
//	i = 0;
//	while (ch[i]) {
//		
//		ch[i] = toupper(ch[i]);//Сд��ĸת��д
//		i++;
//	}
//	printf("%s\n", ch);
//	return 0;
//}