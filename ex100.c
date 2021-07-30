#include <stdio.h>

int main()
{
    int *num1p;
    int **num2p;// **(이중포인터) 를 사용하면 num의 주소를 저장하고 있는 num1p의 주소를 저장할 수 있다
    int num = 11;

    num1p = &num;
    num2p = &num1p;

    printf("num : %d\n", num);
    printf("num1p : %u\n", num1p);
    printf("num2p : %u\n", num2p);

    printf("------------------------\n");

    printf("num1p : %u\n", &num);
    printf("num2p : %u\n", &num1p);

    printf("------------------------\n");

    printf("num : %d\n", *num1p);
    printf("num1p : %d\n", *num2p);

    printf("------------------------\n");

    printf("**num2p : %u\n", **num2p);

    return 0;
}
