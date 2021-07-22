#include <stdio.h>

int main()
{
    unsigned char flag = 7;

    flag = flag & ~2;
    printf("flag : %u\n", flag);

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
