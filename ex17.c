#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 1 % 3);
    printf("%d\n", 2 % 3);
    printf("%d\n", 3 % 3);
    printf("%d\n", 4 % 3);
    printf("%d\n", 5 % 3);
    printf("%d\n", 6 % 3);

    printf("--------------------------\n");

    /*
    �Ǽ����� ������ ��� �������� math.h ���������
    fmod() : double type �Ǽ�
    fmodf() : float type �Ǽ�
    fmodl() : long type �Ǽ�
    �Լ��� ����
    */
    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));
    printf("------------------\n");

    float num3 = 10.843F;
    float num4 = 3.79F;
    printf("%f\n", fmodf(num3, num4));
    printf("------------------\n");

    long double num5 = 10.843L;
    long double num6 = 3.79L;
    printf("%f\n", fmodl(num5, num6));
    printf("------------------\n");


    return 0;
}
