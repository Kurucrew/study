#include <stdio.h>

int main()
{
    unsigned char flag = 0;


    flag |= 1;
    printf("flag : %u\n", flag);
    flag |= 2;
    printf("flag : %u\n", flag);
    flag |= 4;

    printf("flag : %u\n", flag);

    printf("------------------\n");

    if(flag & 1)
    {
        printf("00000001이 켜져있음\n");
    }
    else
    {
        printf("00000001이 꺼져있음\n");
    }

    if(flag & 2)
    {
        printf("00000001이 켜져있음\n");
    }
    else
    {
        printf("00000001이 꺼져있음\n");
    }

    if(flag & 4)
    {
        printf("00000001이 켜져있음\n");
    }
    else
    {
        printf("00000001이 꺼져있음\n");
    }

    return 0;
}
