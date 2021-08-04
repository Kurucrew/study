#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p = malloc(sizeof(int *) * 3);//행의 개수 (int * : int공간에 주소를 저장하는 포인터의 바이트 수)

    for(int i = 0; i < 3; i++)//열의 개수
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
        free(p[i]);//2차원 배열의 열에 할당된 메모리 해제
    }

    free(p);//2차원 배열의 행에 할당된 메모리 해제

    return 0;
}
