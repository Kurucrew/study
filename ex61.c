#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d회차 반복\n", i+1);
        printf("%d\n", i+1);
    }

    printf("---------------------\n");

    for(int i = 1; i <= 10; i++)
    {
        printf("%d회차 반복\n", i);
        printf("%d\n", i);
    }

    printf("---------------------\n");

    for(int i = 1; i <= 10; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n---------------------\n");

    for(int i = 2; i <= 10; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n---------------------\n");

    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
        {
        printf("%d ", i);
        }
    }

    printf("\n---------------------\n");

    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
        printf("%d ", i);
        }
    }

    return 0;
}
