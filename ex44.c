#include <stdio.h>

int main()
{
    int num = 20;//1 0 1 0 0

    printf("%d\n", num >> 1);//1 0 1 0
    printf("%d\n", num >> 2);//0 1 0 1
    printf("%d\n", num >> 3);//0 0 1 0 2^n�¸�ŭ ���� �ڷ����� int�̱⶧���� �Ҽ����� ����



    return 0;
}
