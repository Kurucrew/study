#include <stdio.h>

int main()
{
    int num1 =10;
    char c1 = 'a';

    int *num1p = &num1;
    char *c1p = &c1;

    printf("*num1p : %d\n", *num1p);
    printf("*c1p : %c\n", *c1p);

    void *vp;

    vp = num1p;
    printf("vp : %d\n", vp);

    int *num2p = vp;
    printf("*num2p : %d\n", *num2p);

    vp = c1p;
    printf("vp : %d\n", vp);

    char *c2p = vp;
    printf("*c2p : %c\n", *c2p);

    //void 포인터 변수는 역참조를 할 수 없음

    return 0;
}
