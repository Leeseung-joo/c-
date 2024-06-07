#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, j;

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    // 1부터 n까지의 줄에 대해 반복
    for (i = 1; i <= n; i++) {
        // 각 줄마다 1부터 현재 줄 번호까지 숫자 출력
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // 줄 바꿈
        printf("\n");
    }

    return 0;
}
