#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char code = 'A';
	printf("%d %d %d \n", code, code + 1, code + 2); 
	printf("%c %c %c \n", code, code + 1, code + 2); 
	return 0;
}