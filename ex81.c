#include <stdio.h>

int main()
{
    int sum;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0 && i % 3 != 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    sum = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0 || i % 3 != 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    sum = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(!(i % 2 != 0 && i % 3 != 0))//�� �տ� ���� �����ڸ� ����ϸ� ���ǽ� ���ΰ� �ݴ밡 �ȴ� (i % 2 == 0 || i % 3 == 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    return 0;
}
