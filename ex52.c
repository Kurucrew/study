#include <stdio.h>

int main()
{
    unsigned char flag = 7;

    flag = flag & ~2;
    printf("flag : %u\n", flag);

    if(flag & 1)
    {
        printf("00000001�� ��������\n");
    }
    else
    {
        printf("00000001�� ��������\n");
    }

    if(flag & 2)
    {
        printf("00000001�� ��������\n");
    }
    else
    {
        printf("00000001�� ��������\n");
    }

    if(flag & 4)
    {
        printf("00000001�� ��������\n");
    }
    else
    {
        printf("00000001�� ��������\n");
    }

    return 0;
}
