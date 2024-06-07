#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역 변수를 이용해 각 연산의 호출 횟수를 저장합니다.
int add_count = 0;
int subtract_count = 0;
int multiply_count = 0;
int divide_count = 0;
int x, y;
char operator;
int result;

// 덧셈 함수
int add(int a, int b) {
    add_count++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", add_count);
    return a + b;
}

// 뺄셈 함수
int subtract(int a, int b) {
    subtract_count++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", subtract_count);
    return a - b;
}

// 곱셈 함수
int multiply(int a, int b) {
    multiply_count++;
    printf("곱셈은 총 %d번 실행되었습니다.\n ", multiply_count);
    return a * b;
}

// 나눗셈 함수
int divide(int a, int b) {
    divide_count++;
    printf("나눗셈은 총 %d번 실행되었습니다.\n", divide_count);
    if (b != 0) {
        return a / b;
    }
    else {
        printf("오류: 0으로 나눌 수 없습니다.\n");
        return 0; // 0으로 나눌 수 없으므로 0을 반환
    }
}

int main() {


    while (1) {
        printf("연산을 입력하시오:");
        if (scanf("%d %c %d", &x, &operator, &y) != 3) {
            printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
            break;
        }

        switch (operator) {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = subtract(x, y);
            break;
        case '*':
            result = multiply(x, y);
            break;
        case '/':
            result = divide(x, y);
            break;
        default:
            printf("지원하지 않는 연산자입니다.\n");
            continue;
        }

        printf("결과: %d\n", result);
    }

    return 0;
}
