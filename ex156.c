#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1 = 32;
    int num2 = 7;
    float num3;

    num3 = (float)num1 / num2;// int Ÿ�� ������ ũ�⸦ ���� �ڷ��� ���� ������ ��쿡�� ��� int �������� ����ȴ�, ���� �Ҽ����� �����ȴ�
    // num1 ���� (float)��  �Ҽ��� ������ �����ʰ� intŸ���� �����͸� floatŸ�� ���� ����ȯ�� �����ִ°��̴�

    printf("num3 : %.10f\n", num3);
    printf("----------------------\n");

    int *ip = malloc(sizeof(int));
    char *cp;

    *ip = 0x12345678;
    cp = (char *)ip;

    printf("cp : %p\n", cp);
    printf("cp : 0x%x\n", *cp);

    printf("ip : %p\n", ip);
    printf("ip : 0x%x\n", *ip);

    free(ip);

    return 0;
}
