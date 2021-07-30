#include <stdio.h>

int main()
{

    int *i1;
    printf("포인터변수 i1의 사이즈 : %d\n", sizeof(i1));

    char *ch;
    printf("포인터변수 ch의 사이즈 : %d\n", sizeof(ch));

    float *f1;
    printf("포인터변수 f1의 사이즈 : %d\n", sizeof(f1));

    double *d1;
    printf("포인터변수 d1의 사이즈 : %d\n", sizeof(d1));
    //모든 데이터 타입의 공간의 주소값을 저장하기 위해서 필요한 공간의 크기는 해당 컴퓨터의 시스템 비트의 크기가 필요 데이터 타입에 따라서 달라지지 않음





    return 0;
}
