#include <stdio.h>

int main()
{
    float num1 = 0.1f;
    char c1 = 'a';

    if(num1 == 0.1f)
    {
        printf("num1�� %.1f�Դϴ�\n", num1);
    }

    if(c1 == 'a')
    {
        printf("c1�� %c�Դϴ�\n", c1);
    }

    if(c1 == 97)
    {
        printf("c1�� %c�Դϴ�\n", c1);
        printf("c1�� %d�Դϴ�\n", c1);
    }

    return 0;
}
