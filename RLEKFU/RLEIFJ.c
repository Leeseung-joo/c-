#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, j;

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    // 1���� n������ �ٿ� ���� �ݺ�
    for (i = 1; i <= n; i++) {
        // �� �ٸ��� 1���� ���� �� ��ȣ���� ���� ���
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // �� �ٲ�
        printf("\n");
    }

    return 0;
}
