#include <stdio.h>

int main()// ��ø for �ݺ���
{
    int i = 2;
    int j = 1;

    for(i = 2; i < 10; i++)
    {
        printf("-- %d�� --\n", i);
        for(j = 1; j < 10; j++)// for�� �ȿ� for���� ����� �� �ִ�
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("------------------\n");
    }

    return 0;
}
