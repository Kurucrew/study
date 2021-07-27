#include <stdio.h>

int main()
{
    for(int i = 2; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");
    }

    printf("\nÈ¦¼ö\n");
    printf("----------------\n");
    for(int i = 3; i < 10; i+= 2)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");
    }

    printf("\nÂ¦¼ö\n");
    printf("----------------\n");
    for(int i = 2; i < 10; i += 2)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");
    }

    //or

    printf("----------------\n");
    for(int i = 2; i < 10; i++)
    {
        if(i % 2 != 0)
        {
        for(int j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");
        }
    }

    printf("----------------\n");
    for(int i = 2; i < 10; i++)
    {
        if(i % 2 == 0)
        {
        for(int j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");
        }
    }

    printf("----------------\n");
    for(int i = 2; i < 10; i++)
    {
        if(i % 2 != 0)
        {
        for(int j = 1; j < 10; j++)
        {
            if(j % 2 != 0)
            printf("%d X %d = %d\n", i, j, i * j);
        }

        printf("----------------------\n");
        }
        else
        {
        for(int j = 1; j < 10; j++)
        {
            if(j % 2 == 0)
            printf("%d X %d = %d\n", i, j, i * j);
        }

        printf("----------------------\n");
        }
    }

    //or

    for(int i = 2; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            if(i % 2 != 0 && j % 2 != 0) // if(i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0)
            printf("%d X %d = %d\n", i, j, i * j);

            if(i % 2 == 0 && j % 2 == 0)
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("----------------------\n");

    }

    for(int i = 2; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            if(i % 2 == j % 2) // if(i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0)
            printf("%d X %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
