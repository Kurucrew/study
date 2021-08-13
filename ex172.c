#include <stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}
//함수 포인터를 반환값으로 지정
int (*getadd())(int, int)
{
    return add;
}

int main()
{
    printf("%d\n", getadd()(11, 22));

    return 0;
}
