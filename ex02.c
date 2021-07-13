#include<stdio.h>
int main()//변수는 메모리상의 이름표(식별자)name identifi
{//정수형 변수 선언
    int num1, num2;
    //변수의 초기화:처음으로 값을 할당하는 것
    num1 = 10;
    num2 = 8;
    //format specifier : 형식 지정자
    //%d : decimal
    //%f : floating point 소숫점 있는 숫자<-실수 소숫점 6자리까지 표시
    printf("%d + %d = %d\n", num1, num2, num1+num2);//f=format형식 %d=변환문자 specifier 지정자 순서대로 변수를 받음
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d x %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    printf("%d / %d = %f\n", num1, num2, num1/(double)num2);//double=정수이지만 실수로 표시
    printf("%d / %.2f = %f\n", num1, (double)num2, num1/(double)num2);//.2는 소숫점 2자리까지만 표시한다는 의미
    printf("%d %% %d = %d", num1, num2, num1%num2);
    return 0;
}
