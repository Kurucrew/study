#include <stdio.h>
#include <stdlib.h>

int main()
{
    //malloc -> memory allocate : 메모리 할당하는 함수 (동적 메모리 할당 연산자) 프로그램이 작동하는 동안에 메모리를 할당
    //free : 할당된 메모리를 반납하는 함수
    int num1 = 20;
    int *nump1;

    nump1 = &num1;

    int *nump2;

    nump2 = malloc(sizeof(int));// int타입의 크기만한 메모리 공간을 할당해서 그 주소를 포인터에 저장

    printf("nump1 : %u\n", nump1);
    printf("nump2 : %u\n", nump2);

    free(nump2);

    return 0;
}
