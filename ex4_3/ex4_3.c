#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
	int x = 10;
	int y = 20;
	printf("x=%d y=%d\n", x, y);
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x=%d y=%d", x, y);


}