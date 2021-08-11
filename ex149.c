#include <stdio.h>
#include <stdlib.h>

int *adr()
{
    int *intp = malloc(sizeof(int));//함수가 종료되면 함수에 할당된 공간이 사라지기때문에 malloc으로 값을 고정해 주어야 정상적으로 값을 반환할 수 있다
    *intp = 123;
    return intp;
}

int main()
{
    int *iP;
    iP = adr();
    printf("iP : %p\n", iP);
    printf("*iP : %d\n", *iP);
    free(iP);
    return 0;
}
