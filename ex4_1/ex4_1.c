#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double x;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�Ǽ� �������δ� %.6lf�Դϴ�\n", x);
	printf("���� �������δ� %e�Դϴ�",x);
}