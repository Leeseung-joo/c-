#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100; 
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer) // ����ڰ� �Է��� ������ ���亸�� ������
			printf("HIGH \n");
		if (guess < answer) // ����ڰ� �Է��� ������ ���亸�� ������
			printf("LOW \n");
	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}