#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double cm, inches;
    int feet;

    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm);

    // 키를 피트로 변환
    feet = (int)(cm / 30.48); // 1피트는 30.48cm이므로 키를 30.48로 나누면 피트가 됨

    // 나머지를 인치로 변환
    inches = (cm - feet * 30.48) / 2.54; // 1인치는 2.54cm이므로 키에서 피트로 변환한 부분을 뺀 뒤 2.54로 나누면 인치가 됨

    printf("%.0fcm는 %d피트 %.6f인치입니다.\n", cm, feet, inches);

    return 0;
}
