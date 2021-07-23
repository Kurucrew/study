#include <stdio.h>

int main()
{
    //1부터 10까지의 합을 출력하세요

    int sum = 0;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;

    printf("%d", sum);
    printf("\n----------------------------\n");

    sum = 0;
    sum = sum + 1;
    sum = sum + 2;
    sum = sum + 3;
    sum = sum + 4;
    sum = sum + 5;
    sum = sum + 6;
    sum = sum + 7;
    sum = sum + 8;
    sum = sum + 9;
    sum = sum + 10;

    printf("%d", sum);
    printf("\n----------------------------\n");

    sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum += i;
        printf("%d\n", sum);
    }

    return 0;
}
