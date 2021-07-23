#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n---------------------\n");

    for(int i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n---------------------\n");

    return 0;
}
