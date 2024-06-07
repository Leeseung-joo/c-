#include <stdio.h>

int main() {
    // 2차원 배열 초기화 (예시 데이터)
    int arr[3][5] = {
        {12,  56,  32, 16, 98},
        { 99, 56,  34, 41, 3},
        { 65, 3,  87, 78, 21}
    };

    int rows = 3;
    int cols = 5;

    // 각 행의 합계를 구하고 출력
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("%d행의 합계: %d\n", i, rowSum);
    }

    // 각 열의 합계를 구하고 출력
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("%d열의 합계: %d\n", j, colSum);
    }

    return 0;
}
