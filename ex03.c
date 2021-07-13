#include<stdio.h>

//type - data type
//형 - 자료형

int main()
{
    int num1;
    int num2;
    num1 = 10;
    num2 = 8;

    printf("num1 : %d\tnum2 : %d\n",num1, num2);
    printf("int type의 크기(byte수) : %d\n", sizeof(int));//4byte int는 맨 앞을 부호로 사용하고 남은 31비트의 공간을 활용하는 저장자
    printf("정수 3의 크기 (byte 수) : %d\n", sizeof(3));//4byte
    printf("long long type의 크기 (byte 수) : %d\n", sizeof(long long));// long은 맨 앞을 부호로 사용하고 남은 63비트의 공간을 활용하는 저장자
    printf("double type의 크기 (byte 수) : %d\n", sizeof(double));

    return 0;
}
