#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch;

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf(" %c", &ch);

    // �Էµ� ���ڰ� ���� �Ǵ� �������� �Ǵ��Ͽ� ���
    switch (ch) {
        // ������ ���
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("�����Դϴ�.\n");
        break;
        // ������ ���}
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("�����Դϴ�.\n");
            break;
        }



    }
    return 0;
}
