#include <stdio.h>

int main()
{
    int num1 = 7;
    int num2 = 2;

    num1 %= num2;//num1 %= 2;, num1 = num1% 2; ����

    printf("%d\n", num1);
    printf("-------------------\n");

    printf("%d\n", 5 % 3);
    printf("%d\n", 5 % -3);
    printf("%d\n", -5 % 3);
    printf("%d\n", -5 % -3);// ������ ���� ���� ��ȣ�� ���󰣴�

    /*
    int a;
    int c;
    a == (a/b) * b + a % b : cǥ�ع������� ������ ����
    5 == (5/3) * 3 + 5 % 3
    5 == (5/-3) * -3 + 5 % -3
    -5 == (-5/3) * 3 + -5 % 3
    -5 == (-5/-3) * -3 + -5 % -3
    */


    return 0;
}
