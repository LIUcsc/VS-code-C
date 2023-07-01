#include <stdio.h>
#include <windows.h>
#include <string.h>
int main() {


	unsigned char i = 0;
	for (i = 0; i <= 255;i++) {
		printf("hahaha%d\n", i);
	}



	/*
	char a[1000];
	int i;
	for (i = 0; i < 1000;i++) {
		a[i] = -1 - i;
	}
	printf("%d\n",strlen(a));//255
	*/

	/*
	unsigned int i;
	for (i = 9; i >= 0;i--) {
		printf("%u\n",i);//À¿—≠ª∑
		Sleep(1000);
	}
	*/
	return 0;
}