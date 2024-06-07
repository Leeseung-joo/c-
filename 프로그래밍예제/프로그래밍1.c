#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

// 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수
int check_alpha(char ch) {
    if (isalpha(ch)) {
        return 1; // 알파벳 문자일 경우 1을 반환
    }
    else {
        return 0; // 알파벳 문자가 아닐 경우 0을 반환
    }
}

int main() {
    char input;

    // 사용자로부터 문자를 입력받음
    printf("문자를 입력하세요: ");
    scanf("%c", &input);

    // 입력된 문자가 알파벳인지 체크
    if (check_alpha(input)) {
        printf("입력한 문자는 알파벳입니다.\n");
    }
    else {
        printf("입력한 문자는 알파벳이 아닙니다.\n");
    }

    return 0;
}
