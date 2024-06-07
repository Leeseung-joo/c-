#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, sum; // 변수 선언
	printf("정수를 입력하시오:"); // 입력 안내 메시지 출력
	scanf("%d", &n); // 정수값 입력
	i = 0; // 변수 초기화
	sum = 0;
	while (i <= n)
	{
		sum += i; 
		i = i + 2;
	}
	printf("1부터 %d까지의 짝수합은 %d입니다\n", n, sum);
	return 0;
}