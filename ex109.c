#include <stdio.h>

int main()
{
    //�迭�� ��� ��Ҹ� 0���� �ʱ�ȭ

    int arrnum[10] = {0,};

    for(int i = 0; i < 10; i++)
    {
        printf("arrnum[%d] : %d\n", i, arrnum[i]);
    }

    printf("-------------------\n");

    for(int i = 0; i < 10; i++)
    {
        arrnum[i] = 10;
        printf("arrnum[%d] : %d\n", i, arrnum[i]);
    }

    printf("-------------------\n");

    for(int i = 0; i < 10; i++)
    {
        arrnum[i] = 10 + i;
        printf("arrnum[%d] : %d\n", i, arrnum[i]);
    }

    printf("-------------------\n");




    return 0;
}
