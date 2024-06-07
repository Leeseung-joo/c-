#include <stdio.h>
#include <stdlib.h>

int main() {
    int count[10] = { 0 }; // 각 숫자(0-9)의 출현 횟수를 저장할 배열
    int maxCount = 0;    // 가장 많이 생성된 수의 횟수
    int mostFrequent;    // 가장 많이 생성된 수

    // 0부터 9까지의 난수를 100번 생성하여 출현 횟수 기록
    for (int i = 0; i < 100; i++) {
        int num = rand() % 10; // 0부터 9까지의 난수 생성
        count[num]++;
    }

    // 가장 많이 생성된 수 찾기
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    // 가장 많이 생성된 수 출력
    printf("가장 많이 나온수=%d\n", mostFrequent);

    return 0;
}
