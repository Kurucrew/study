#include <stdio.h>

int main()
{
    //배열의 모든 요소를 0으로 초기화

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
