#include <stdio.h>

int main()
{
    int num1 = 4;
    int num2 = 4;
    int num3 = 4;
    int num4 = 4;
    int num5 = 4;

    num1 &= 5;
    num2 |= 2;
    num3 ^= 3;
    num4 <<= 2;
    num5 >>= 2;

    printf("---할당연산 후---\n");
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
    printf("num3 : %d\n", num3);
    printf("num4 : %d\n", num4);
    printf("num5 : %d\n", num5);

    int a = 5;
    printf("a : %d\n", a);
    a = ~a;
    printf("a : %d\n", a);

    return 0;
}
