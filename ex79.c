#include <stdio.h>

int main()
{
    int num1 = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(num1 == 10)
            {
                goto OUT2;
            }
            num1++;
        }
    }
    OUT1:
        printf("100\n");
        goto EXIT;
    OUT2:
        printf("200\n");
        goto EXIT;
    OUT3:
        printf("300\n");
        goto EXIT;

    EXIT:
        printf("프로그램 종료\n");

    return 0;
}
