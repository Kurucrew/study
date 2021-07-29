#include <stdio.h>

int main()//피보나치 수열을 프로그램으로 작성하세요
{
    int num1 = 1;
    int num2 = 1;
    int num3 = 0;

    printf("%d, %d", num1, num2);

    for(int i = 0; i < 8; i++)
    {
        num3 = num1 + num2;
        printf(", %d", num3);
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
