#include <stdio.h>

int main()
{
    char num1 = 28;
    int num2 = 1000000002;

    char num3 = num1 + num2;//char ���� ū ���� ������� ���� ���ڸ��� ������

    printf("char ũ��(byte) : %d\n", sizeof(char));

    int num4 = num1 + num2;

    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
