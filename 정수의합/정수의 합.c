#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1���� n������ ���� ����ϴ� ��� �Լ�
int sum_recursive(int n) {
    if (n == 1) {
        return 1; // �⺻ ����: n�� 1�̸� 1�� ��ȯ
    }
    else {
        return n + sum_recursive(n - 1); // ��� ȣ��: n + (n-1������ ��)
    }
}

int main() {
    int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);


    int result = sum_recursive(n);
    printf("1���� %d������ �� =  %d\n", n, result);
    

    return 0;
}
