#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &n1);
	printf("�и� �Է��Ͻÿ� : ");
	scanf("%d", &n2);
	if (n2 == 0) // �и� 0���� �˻�
	{
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else
	{
		n3 = n1 / n2; // ������ ����
		printf("����� %d�Դϴ�.\n", n3);
	}
	return 0;
}