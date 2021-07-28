#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    for(i = 0; i < 5; i += 2)
    {
        for(j = 0; j < i; j+=2)
        {
            printf("  ");
        }
        for(j = 0; j < 5 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("------------\n");



    return 0;
}
