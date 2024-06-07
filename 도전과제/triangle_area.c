#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double w; // 삼각형의 밑변
	double h; //삼각형의 높이
	double area;
	

	
	
	printf("삼각형의 밑변:");
	scanf("%lf", &w);
	printf("삼각형의 높이:");
	scanf("%lf", &h);

	area = (w * h) / 2;
	printf("삼각형의 넓이: %lf", area);
	return 0;
}