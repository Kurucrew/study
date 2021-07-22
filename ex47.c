#include <stdio.h>

int main()
{
    unsigned char num1 = 240;// char <- 1byte == 8bit
    unsigned char num2 = 15;

    unsigned char num3, num4;

    num3 = num1 << 2;
    num4 = num2 >> 2;

    printf("num3 : %d\n", num3);
    printf("num4 : %d\n", num4);

    return 0;
}
