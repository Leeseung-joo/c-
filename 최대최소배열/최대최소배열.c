#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int max, min;

    // ���� ������ ���� �õ� ����
    srand(time(NULL));

    // �迭�� ���� ���� �� �ʱ� �ִ밪, �ּҰ� ����
    for (int i = 0; i < 10; i++) {
        arr[i] = rand();
    }

    max = arr[0];
    min = arr[0];

    // �迭 ��ȸ�ϸ鼭 �ִ밪�� �ּҰ� ã��
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // �ִ밪�� �ּҰ� ���
    printf("�ִ밪�� %d\n", max);
    printf("�ּҰ��� %d\n", min);

    return 0;
}
