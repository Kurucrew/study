#include <stdio.h>
#include <stdlib.h>//malloc, free
#include <string.h>//memset

int main()
{
    long long *nump = malloc(sizeof(long long));

    memset(nump, 0x27, 8);// 0x 뒤의 숫자를 16진수로 인식 // nump 주소지에 8바이트 크기만큼 공간을 확보해서 0x27값을 저장

    printf("0x%11x\n", *nump);//0x%~~x 16진수를 출력하는 문자

    free(nump);

    return 0;
}
