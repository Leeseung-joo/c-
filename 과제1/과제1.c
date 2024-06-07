#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c = 3;
	int max;
	int k = 3;

	printf("%d개의 정수를 입력하시오: ", k);
	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	printf("최대값:%d\n", max);
	return 0;
}


