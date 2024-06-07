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
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer) // 사용자가 입력한 정수가 정답보다 높으면
			printf("HIGH \n");
		if (guess < answer) // 사용자가 입력한 정수가 정답보다 낮으면
			printf("LOW \n");
	} while (guess != answer);
	printf("축하합니다. 시도횟수=%d\n", tries);
	return 0;
}