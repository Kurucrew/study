#include <stdio.h>

struct calc
{
    int(*p)();
};

int add(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    struct calc c;
    c.p = add;

    printf("%d\n", c.p(11, 22));

    return 0;
}
