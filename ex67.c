#include <stdio.h>

int main()// 중첩 for 반복문
{
    int i = 2;
    int j = 1;

    for(i = 2; i < 10; i++)
    {
        printf("-- %d단 --\n", i);
        for(j = 1; j < 10; j++)// for문 안에 for문을 사용할 수 있다
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("------------------\n");
    }

    return 0;
}
