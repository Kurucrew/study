#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    for(i = 2; i < 10; i++)
    {
        printf("-- %d�� --\n", i);
        for(j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("-------------------\n");
    }
    printf("���� for���� ���� �� i�� j�� ��\n");
    printf("i : %d, j : %d", i, j);

    return 0;
}
