#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= (5 - i); j++)
        {
        printf("  ");
        }
        for(int j = 1; j <= i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
        if(i == j)
        {
        printf("* ");
        }
        else
        {
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= (5 - i); j++)
        {
        printf("  ");
        }
        printf("* ");
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 6 - i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j < i; j++)
        {
        printf("  ");
        }
        for(int k = 1; k <= 6 - i; k++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j < i; j++)
        {
        printf("  ");
        }
        for(int j = 1; j <= 6 - i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("-------------------\n");

    return 0;
}
