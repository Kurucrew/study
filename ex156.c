#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1 = 32;
    int num2 = 7;
    float num3;

    num3 = (float)num1 / num2;// int 타입 이하의 크기를 가진 자료형 끼리 연산할 경우에는 모두 int 공간에서 연산된다, 따라서 소수점이 생략된다
    // num1 앞의 (float)는  소수점 생략을 하지않게 int타입의 데이터를 float타입 으로 형변환을 시켜주는것이다

    printf("num3 : %.10f\n", num3);
    printf("----------------------\n");

    int *ip = malloc(sizeof(int));
    char *cp;

    *ip = 0x12345678;
    cp = (char *)ip;

    printf("cp : %p\n", cp);
    printf("cp : 0x%x\n", *cp);

    printf("ip : %p\n", ip);
    printf("ip : 0x%x\n", *ip);

    free(ip);

    return 0;
}
