#include <stdio.h>

char* getMemory() {
	char c[] = "aaa aaaa";
	return c;
}

void Test() {
	char* p = NULL;
	p = getMemory();
	printf(p);
}

int main() {
	Test();
	return 0;
}