#include <stdio.h>
#include <stdlib.h>

int main() {
    int count[10] = { 0 }; // �� ����(0-9)�� ���� Ƚ���� ������ �迭
    int maxCount = 0;    // ���� ���� ������ ���� Ƚ��
    int mostFrequent;    // ���� ���� ������ ��

    // 0���� 9������ ������ 100�� �����Ͽ� ���� Ƚ�� ���
    for (int i = 0; i < 100; i++) {
        int num = rand() % 10; // 0���� 9������ ���� ����
        count[num]++;
    }

    // ���� ���� ������ �� ã��
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    // ���� ���� ������ �� ���
    printf("���� ���� ���¼�=%d\n", mostFrequent);

    return 0;
}
