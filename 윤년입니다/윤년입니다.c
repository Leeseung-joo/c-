#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전달된 연도가 윤년인지 아닌지를 검사하는 함수
int is_leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 윤년일 경우 1을 반환
    }
    else {
        return 0; // 윤년이 아닐 경우 0을 반환
    }
}

int main() {
    int year;

    // 사용자로부터 연도를 입력받음
    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    // 입력된 연도가 윤년인지 체크
    if (is_leap(year)) {
        printf("%d년은 윤년입니다. (366일)\n", year);
    }
    else {
        printf("%d년은 윤년이 아닙니다. (365일)\n", year);
    }

    return 0;
}
