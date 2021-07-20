#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 =3.14f;//변수 뒤에 접미사를 붙이지 않는경우 정수는 int 실수는 double로 인식
    printf("%f\n", num1 + num2);
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);

    printf("-----------------------\n");

    long long num3 = 123456789000;
    int num4 = 10;

    printf("%lld\n", num3 + num4);
    printf("%lld\n", num3 - num4);
    printf("%lld\n", num3 * num4);
    printf("%lld\n", num3 / num4);// 자료형 끼리의 크기가 다르면 결과값을 더 큰 자료형으로 표현해야 오버플로우가 일어나지 않는다


    return 0;
}
//https://www.programiz.com/c-programming/online-compiler/
