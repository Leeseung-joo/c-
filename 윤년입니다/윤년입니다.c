#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���޵� ������ �������� �ƴ����� �˻��ϴ� �Լ�
int is_leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // ������ ��� 1�� ��ȯ
    }
    else {
        return 0; // ������ �ƴ� ��� 0�� ��ȯ
    }
}

int main() {
    int year;

    // ����ڷκ��� ������ �Է¹���
    printf("������ �Է��ϼ���: ");
    scanf("%d", &year);

    // �Էµ� ������ �������� üũ
    if (is_leap(year)) {
        printf("%d���� �����Դϴ�. (366��)\n", year);
    }
    else {
        printf("%d���� ������ �ƴմϴ�. (365��)\n", year);
    }

    return 0;
}
