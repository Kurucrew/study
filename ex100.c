#include <stdio.h>

int main()
{
    int *num1p;
    int **num2p;// **(����������) �� ����ϸ� num�� �ּҸ� �����ϰ� �ִ� num1p�� �ּҸ� ������ �� �ִ�
    int num = 11;

    num1p = &num;
    num2p = &num1p;

    printf("num : %d\n", num);
    printf("num1p : %u\n", num1p);
    printf("num2p : %u\n", num2p);

    printf("------------------------\n");

    printf("num1p : %u\n", &num);
    printf("num2p : %u\n", &num1p);

    printf("------------------------\n");

    printf("num : %d\n", *num1p);
    printf("num1p : %d\n", *num2p);

    printf("------------------------\n");

    printf("**num2p : %u\n", **num2p);

    return 0;
}
