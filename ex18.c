#include <stdio.h>

int main()
{
    int num1 = 7;
    int num2 = 2;

    num1 %= num2;//num1 %= 2;, num1 = num1% 2; 같다

    printf("%d\n", num1);
    printf("-------------------\n");

    printf("%d\n", 5 % 3);
    printf("%d\n", 5 % -3);
    printf("%d\n", -5 % 3);
    printf("%d\n", -5 % -3);// 나누어 지는 수의 부호를 따라간다

    /*
    int a;
    int c;
    a == (a/b) * b + a % b : c표준문서에서 규정한 공식
    5 == (5/3) * 3 + 5 % 3
    5 == (5/-3) * -3 + 5 % -3
    -5 == (-5/3) * 3 + -5 % 3
    -5 == (-5/-3) * -3 + -5 % -3
    */


    return 0;
}
