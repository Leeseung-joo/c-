#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch;

    // 사용자로부터 문자 입력 받기
    printf("문자를 입력하시오: ");
    scanf(" %c", &ch);

    // 입력된 문자가 자음 또는 모음인지 판단하여 출력
    switch (ch) {
        // 자음인 경우
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("모음입니다.\n");
        break;
        // 모음인 경우}
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("자음입니다.\n");
            break;
        }



    }
    return 0;
}
