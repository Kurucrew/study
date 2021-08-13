#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

void gree()
{
    printf("hello,\n");
}

void numts(int n, char *s1)
{
    sprintf(s1, "%d", n);
}

int main()
{
    void (*po1)();
    void (*p2)();
    char s[20];
    po1 = gree;
    p2 = numts;

    po1();
    p2(100, s);
    printf("s : %s\n", s);
    printf("----------\n");

    int(*p1)();
    p1 = add;
    printf("add : %d\n", p1(2, 3));

    p1 = mul;
    printf("mul : %d\n", p1(2, 3));

    return 0;
}
