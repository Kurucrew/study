#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 =3.14f;//���� �ڿ� ���̻縦 ������ �ʴ°�� ������ int �Ǽ��� double�� �ν�
    printf("%f\n", num1 + num2);
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);

    printf("-----------------------\n");

    long long num3 = 123456789000;
    int num4 = 10;

    printf("%lld\n", num3 + num4);
    printf("%lld\n", num3 - num4);
    printf("%lld\n", num3 * num4);
    printf("%lld\n", num3 / num4);// �ڷ��� ������ ũ�Ⱑ �ٸ��� ������� �� ū �ڷ������� ǥ���ؾ� �����÷ο찡 �Ͼ�� �ʴ´�


    return 0;
}
//https://www.programiz.com/c-programming/online-compiler/
