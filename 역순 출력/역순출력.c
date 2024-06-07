#include <stdio.h>

// 순환 호출을 사용하여 문자를 역순으로 출력하는 함수
void reversePrint() {
    char c;
    if ((c = getchar()) != '\n') {  // 입력에서 문자를 하나 읽어옴
        reversePrint();  // 다음 문자를 위해 재귀 호출
        putchar(c);  // 현재 문자를 출력 (재귀 호출이 모두 끝난 후에 출력됨)
    }
}

int main() {
    printf("문장을 입력하시오: ");
    reversePrint();  // 역순 출력 함수 호출
    printf("\n");  // 줄바꿈
    return 0;
}
