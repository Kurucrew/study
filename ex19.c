#include <stdio.h>

int main()
{
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;

    num1 %= num3;//����Ǻ��� �Ҷ� ���־��̴� �ڵ�
    num2 %= num3;

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}
