#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int max, min;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 배열에 난수 저장 및 초기 최대값, 최소값 설정
    for (int i = 0; i < 10; i++) {
        arr[i] = rand();
    }

    max = arr[0];
    min = arr[0];

    // 배열 순회하면서 최대값과 최소값 찾기
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 최대값과 최소값 출력
    printf("최대값은 %d\n", max);
    printf("최소값은 %d\n", min);

    return 0;
}
