#include <stdio.h>
#include <stdbool.h>

int one()
{
    return 1;// ���ϵڿ� ���� ���� ��� �帧�� ���ƿ����� ���� ������� ���� ������ ���ƿ�
}

float rnum()
{
    return 1.234567f;
}

bool func()
{
    return true;
}

int float2int()
{
    float fnum2 = 1.234f;
    return (int)fnum2;
}

int add(int n1, int n2)
{
    int result = n1 + n2;
    return result;
}

int main()
{
    int num1;
    float fnum1;
    bool b1;
    int cnum;
    int rsnum;

    num1 = one();
    fnum1 = rnum();
    b1 = func();
    cnum = float2int();
    rsnum = add(11, 22);

    printf("num1 : %d\n", num1);
    printf("fnum1 : %.4f\n", fnum1);
    printf("b1 : %d\n", b1);
    printf("cnum : %d\n", cnum);
    printf("rsnum : %d\n", rsnum);

    return 0;
}
