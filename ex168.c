#include <stdio.h>

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
    int(*p)() = NULL;

    printf("함수 번호와 계산할 값을 입력하세요 : ");
    scanf("%d %d %d", &fnum, &num1, &num2);

    switch (fnum)
    {
    case 0:
        p = add;
        break;
    case 1:
        p = sub;
        break;
    case 2:
        p = mul;
        break;
    case 3:
        p = div;
        break;
    default:
        printf("0 ~ 3 사이의 번호를 입력하세요\n");
    }

    printf("결과 : %d\n", p(num1, num2));

    return 0;
}
