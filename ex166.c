#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gree1()
{
    printf("hello, world");
}

void gree2()
{
    printf("hello, programming");
}

int add(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int(*pa)();

    pa = add;

    printf("add狼 林家 : %p\n", &add);
    printf("pa狼 林家 : %p\n", pa);
    printf("&pa狼 林家 : %p\n", &pa);

    int result = add(11, 22);
    printf("result : %d\n", result);

    result = pa(11, 22);
    printf("result : %d\n", result);

    return 0;
}
