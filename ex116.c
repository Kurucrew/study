#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p = malloc(sizeof(int *) * 3);//���� ���� (int * : int������ �ּҸ� �����ϴ� �������� ����Ʈ ��)

    for(int i = 0; i < 3; i++)//���� ����
    {
        p[i] = malloc(sizeof(int) * 4);
    }

    p[0][0] = 1;
    p[2][0] = 5;
    p[2][3] = 2;

    printf("p[0][0] : %d\n", p[0][0]);
    printf("p[2][0] : %d\n", p[2][0]);
    printf("p[2][3] : %d\n", p[2][3]);

    for(int i = 0; i < 3; i++)
    {
        free(p[i]);//2���� �迭�� ���� �Ҵ�� �޸� ����
    }

    free(p);//2���� �迭�� �࿡ �Ҵ�� �޸� ����

    return 0;
}
