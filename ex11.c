#include <stdio.h>

int main()
{
    float f1, f2;
    double d1, d2;

    f1 =45.3f;//실수 뒤에 f를 표시하지 않으면 double type으로 인식함
    printf("f1 : %f\n", f1);

    d1 =45.3;
    printf("d1 : %f\n", d1);

    int n1 = f1;//형변환 casting : type을 변환하는 것
    printf("n1 : %d\n", n1);

    /*
    f1 : 45.299999 정밀도의 차이때문에 수치가 다르게 표시 float은 근사치를 표현
    d1 : 45.300000
    n1 : 45
    */

    printf("3.14 의 크기 (byte) : %d\n", sizeof(3.14));
    printf("3.14F 의 크기 (byte) : %d\n", sizeof(3.14F));

    printf("double : %d byte\n", sizeof(double));
    printf("float : %d byte\n", sizeof(float));

    f2 = 3.141592;//f2 공간에는 3.141592F 가 저장됨
    printf("f2 : %f\n", f2);

    int n3 = 6.25;//int type의 범위 - 0은 양수에 포함되기 때문에 양수는 2의 31승 -1 이고 음수는 2의 31승 이다
    printf("n3 : %d\n", n3);

    int n4 = 2147483648;//저장공간의 최대치를 넘었기때문에 최소값으로 overflow 하게된다 garbage:의도하지 않은 값
    printf("n4 : %d\n", n4);

    int n5 = 2147483647;
    printf("n5 : %d\n", n5);

    long long n6 = 2147483648;//llu : long의 서식문자
    printf("n6 : %llu\n", n6);

    return 0;
}
