#include <stdio.h>

int main()
{
    long long *num1p;
    float *num2p;
    char *chp;

    long long num1 = 10;
    float num2 = 3.14f;
    char ch = 'a';

    num1p = &num1;
    num2p = &num2;
    chp = &ch;

    printf("num1p : %u\n", num1p);
    printf("num2p : %u\n", num2p);
    printf("chp : %u\n", chp);

    printf("--------------------\n");

    printf("num1 : %d\n", num1);
    printf("num2 : %f\n", num2);
    printf("ch : %c\n", ch);

    printf("--------------------\n");

    printf("num1p : %d\n", *num1p);
    printf("num2p : %.2f\n", *num2p);
    printf("chp : %c\n", *chp);

    printf("--------------------\n");

    *num1p = 1111;
    *num2p = 234.6f;
    *chp = 'A';

    printf("num1p : %d\n", *num1p);
    printf("num2p : %.2f\n", *num2p);
    printf("chp : %c\n", *chp);

    printf("--------------------\n");

    return 0;
}
