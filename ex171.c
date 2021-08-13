#include <stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

void exe(int(*p)())
{
    printf("result : %d\n", p(11, 22));
}

int main()
{
    exe(add);

    return 0;
}
