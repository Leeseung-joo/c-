#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ������ �̿��� �� ������ ȣ�� Ƚ���� �����մϴ�.
int add_count = 0;
int subtract_count = 0;
int multiply_count = 0;
int divide_count = 0;
int x, y;
char operator;
int result;

// ���� �Լ�
int add(int a, int b) {
    add_count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", add_count);
    return a + b;
}

// ���� �Լ�
int subtract(int a, int b) {
    subtract_count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", subtract_count);
    return a - b;
}

// ���� �Լ�
int multiply(int a, int b) {
    multiply_count++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n ", multiply_count);
    return a * b;
}

// ������ �Լ�
int divide(int a, int b) {
    divide_count++;
    printf("�������� �� %d�� ����Ǿ����ϴ�.\n", divide_count);
    if (b != 0) {
        return a / b;
    }
    else {
        printf("����: 0���� ���� �� �����ϴ�.\n");
        return 0; // 0���� ���� �� �����Ƿ� 0�� ��ȯ
    }
}

int main() {


    while (1) {
        printf("������ �Է��Ͻÿ�:");
        if (scanf("%d %c %d", &x, &operator, &y) != 3) {
            printf("�߸��� �Է��Դϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }

        switch (operator) {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = subtract(x, y);
            break;
        case '*':
            result = multiply(x, y);
            break;
        case '/':
            result = divide(x, y);
            break;
        default:
            printf("�������� �ʴ� �������Դϴ�.\n");
            continue;
        }

        printf("���: %d\n", result);
    }

    return 0;
}
