#include <stdio.h>
#include <string.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int div(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    int fnum;
    int num1, num2;
    int(*p[4])();

    p[0] = add;
    p[1] = sub;
    p[2] = mul;
    p[3] = div;

    printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ��� : ");
    scanf("%d %d %d", &fnum, &num1, &num2);

    printf("��� : %d\n", p[fnum](num1, num2));

    return 0;
}
