#include <stdio.h>

int main() {
    // 2���� �迭 �ʱ�ȭ (���� ������)
    int arr[3][5] = {
        {12,  56,  32, 16, 98},
        { 99, 56,  34, 41, 3},
        { 65, 3,  87, 78, 21}
    };

    int rows = 3;
    int cols = 5;

    // �� ���� �հ踦 ���ϰ� ���
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("%d���� �հ�: %d\n", i, rowSum);
    }

    // �� ���� �հ踦 ���ϰ� ���
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("%d���� �հ�: %d\n", j, colSum);
    }

    return 0;
}
