#include <stdio.h>

// ��ȯ ȣ���� ����Ͽ� ���ڸ� �������� ����ϴ� �Լ�
void reversePrint() {
    char c;
    if ((c = getchar()) != '\n') {  // �Է¿��� ���ڸ� �ϳ� �о��
        reversePrint();  // ���� ���ڸ� ���� ��� ȣ��
        putchar(c);  // ���� ���ڸ� ��� (��� ȣ���� ��� ���� �Ŀ� ��µ�)
    }
}

int main() {
    printf("������ �Է��Ͻÿ�: ");
    reversePrint();  // ���� ��� �Լ� ȣ��
    printf("\n");  // �ٹٲ�
    return 0;
}
