#include <stdio.h>

int main()
{
    unsigned char num1 = 131;
    char num2 = -125;

    unsigned char num3;
    char num4;

    num3 = num1 >> 5;
    num4 = num2 >> 5;

    printf("num3 : %u\n", num3);
    printf("num4 : %d\n", num4);

    return 0;
}
