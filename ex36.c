#include <stdio.h>
// >, <, >=, <=, ==, != 비교연산자
int main()
{
    int num1 = 9;
    int num2;

    if(num1)// 숫자형 자료가 0이면 false 0이 아니면(음수나 양수 관계없이) true
    {
        num2 = 222;
    }
    else
    {
        num2 = 333;
    }

    printf("num2 : %d\n", num2);

    num2 = num1 ? 222 : 333;// ~~?~~:~~ = 삼항 연산자 조건식의 결과가 true 이면  : 앞의 결과를 선택 false 면 뒤의 결과를 선택 필요한 항이 3개라서 삼항 연산자
    printf("num2 : %d\n", num2);

    num2 = (num1 == 10) ? 222 : 333;
    printf("num2 : %d\n", num2);

    return 0;
}
