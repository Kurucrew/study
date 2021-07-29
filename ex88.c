#include <stdio.h>

int main()
{
    // int type 변수 number 를 선언하고 네 자리수를 할당 한 후 각 자리수의 합을 출력하는 프로그램을 작성하세요

    int number;
    int mod = 0;
    int sum = 0;

    printf("네 자리 정수를 입력하세요 : ");
    scanf("%d", &number);

    /*
    for(int i = 0; i < 10; i++)
    {
        mod = number % 10;
        sum = sum + mod;
        number = number / 10;
    }
    */
    //or
    while(number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }

    printf("%d", sum);

    return 0;
}
