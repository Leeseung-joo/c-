#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1부터 n까지의 합을 계산하는 재귀 함수
int sum_recursive(int n) {
    if (n == 1) {
        return 1; // 기본 조건: n이 1이면 1을 반환
    }
    else {
        return n + sum_recursive(n - 1); // 재귀 호출: n + (n-1까지의 합)
    }
}

int main() {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);


    int result = sum_recursive(n);
    printf("1부터 %d까지의 합 =  %d\n", n, result);
    

    return 0;
}
