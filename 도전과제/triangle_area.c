#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double w; // �ﰢ���� �غ�
	double h; //�ﰢ���� ����
	double area;
	

	
	
	printf("�ﰢ���� �غ�:");
	scanf("%lf", &w);
	printf("�ﰢ���� ����:");
	scanf("%lf", &h);

	area = (w * h) / 2;
	printf("�ﰢ���� ����: %lf", area);
	return 0;
}