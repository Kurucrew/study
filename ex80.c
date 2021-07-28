#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % 15 == 0)
        {
            printf("더조은아카데미\n");
        }
        else if(i % 3 == 0)
        {
            printf("더조은\n");
        }
        else if(i % 5 == 0)
        {
            printf("아카데미\n");
        }
        else
            printf("%d\n", i);
    }

    return 0;
}
