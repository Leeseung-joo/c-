#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

// ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ�
int check_alpha(char ch) {
    if (isalpha(ch)) {
        return 1; // ���ĺ� ������ ��� 1�� ��ȯ
    }
    else {
        return 0; // ���ĺ� ���ڰ� �ƴ� ��� 0�� ��ȯ
    }
}

int main() {
    char input;

    // ����ڷκ��� ���ڸ� �Է¹���
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &input);

    // �Էµ� ���ڰ� ���ĺ����� üũ
    if (check_alpha(input)) {
        printf("�Է��� ���ڴ� ���ĺ��Դϴ�.\n");
    }
    else {
        printf("�Է��� ���ڴ� ���ĺ��� �ƴմϴ�.\n");
    }

    return 0;
}
