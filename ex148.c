#include <stdio.h>
#include <stdbool.h>

int one()
{
    return 1;// 리턴뒤에 값이 없을 경우 흐름만 돌아오지만 값이 있을경우 값을 가지고 돌아옴
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
