#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double cm, inches;
    int feet;

    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%lf", &cm);

    // Ű�� ��Ʈ�� ��ȯ
    feet = (int)(cm / 30.48); // 1��Ʈ�� 30.48cm�̹Ƿ� Ű�� 30.48�� ������ ��Ʈ�� ��

    // �������� ��ġ�� ��ȯ
    inches = (cm - feet * 30.48) / 2.54; // 1��ġ�� 2.54cm�̹Ƿ� Ű���� ��Ʈ�� ��ȯ�� �κ��� �� �� 2.54�� ������ ��ġ�� ��

    printf("%.0fcm�� %d��Ʈ %.6f��ġ�Դϴ�.\n", cm, feet, inches);

    return 0;
}
