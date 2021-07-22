#include <stdio.h>

int main()
{
    int num = 20;//1 0 1 0 0

    printf("%d\n", num >> 1);//1 0 1 0
    printf("%d\n", num >> 2);//0 1 0 1
    printf("%d\n", num >> 3);//0 0 1 0 2^n승만큼 나눔 자료형이 int이기때문에 소숫점은 버림



    return 0;
}
