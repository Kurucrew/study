#include <stdio.h>
// 1 + (-2) + 3 + (-4) + 5 + (-6) + 7 + (-8) + ... + ???
// ���հ谡 100�� ���� ���� ��??
int main()
{
    int sum = 0;
    int i = 1;
    int sign = 1;
    int number = 0;

    while(1)
    {
        number = sign * i;
        sum += number;
        if(sum > 100)
        {
            break;
        }
        i++;
        sign = -1 * sign;
    }

    printf("1���� %d���� ���ؾ� 100�� �ѽ��ϴ�\n", i);
    printf("�հ�� %d�Դϴ�\n", sum);

    return 0;
}
