#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 3;
	int y = -3;
	printf("x = %08X\n", x); 
	printf("y = %08X\n", y); 
	printf("x+y = %08X\n", x + y);
	return 0;
}