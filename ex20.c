#include <stdio.h>

int main()
{
    /*
    234 를 입력하면 200을,
    456 을 입력하면 400을,
    578 을 입력하면 500을
    출력하는 프로그램을 작성하세요
    [힌트] int type 의 / 연산자와 % 연산자 사용하기
    */

    int number;
    printf("백의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);

    /*
    number = number / 100;
    number = number * 100;

    number /= 100;
    number *= 100;
    */

    number = (number/100)*100;

    printf("number : %d\n", number);

    return 0;
}
