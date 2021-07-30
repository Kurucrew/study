#include <stdio.h>

int main()
{
    int *num1p;
    int **num2p;
    int ***num3p;
    int ****num4p;
    int *****num5p;
    int ******num6p;//포인터는 몇중으로 해도 상관 없지만 가독성을 위해 3중이상은 사용하지 않는다
    int num = 11;

    num1p = &num;
    num2p = &num1p;
    num3p = &num2p;
    num4p = &num3p;
    num5p = &num4p;
    num6p = &num5p;

    printf("num6p : %d", ******num6p);



    return 0;
}
