#include <stdio.h>
#include <stdbool.h>
// 1 ���� �� ���� ���ؾ� �� ������ 100�� �Ѵ���
int main()
{
    int i = 1;
    int sum = 0;

    for(i = 1; i <= 50; i++)
    {
        sum += i;
        if(sum >= 100)
        {
            break;
        }
    }
    printf("1 ~ %d : %d\n", i, sum);

    //or
    sum = 0;
    i = 1;
    while (true)
    {
        sum += i;
        if (sum > 100)
        {
            break;
        }
        i++;
    }

        printf("1���� %d���� ���ϸ� �հ谡 100�� �ѽ��ϴ�\n", i);
        printf("�հ�� %d�Դϴ�\n", sum);

    return 0;
}
