#include <stdio.h>

void Hnum(int num1)
{
    printf("hello, %d\n", num1);
}

int add(int n1, int n2)
{
    int result = n1 + n2;
    return result;
}

int main()
{
    Hnum(10);
    Hnum(20);
    Hnum(30);

    printf("%d", add(11, 22));

    return 0;
}
