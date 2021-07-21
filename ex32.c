#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = 2;

    if(0 < n1 && n1 < 10)// && :논리곱 논리 and 연산자
    {
        printf("0< n1 < 10 \n");
    }

    if(n1 < 0 || n2 == 2)// || : 논리합 논리 or 연산자
    {
        printf("n1이 0보다 작거나, n2는 2입니다\n");
    }

    if(!(n1>n2))// ! : 논리 부정 연산자 참일경우 거짓을 리턴 거짓일 경우 참을 리턴
    {
        printf("n1이 n2보다 크지 않습니다\n n1이 n2보다 작거나 같습니다");
    }

    return 0;
}
/*
true && true : true
true && false :false
false && true : false
false && false : false 모두 참일 경우에만 참 한쪽이라도 거짓이면 거짓

true || true : true
true || false : true
flase || true : true
false || false : false 한쪽이라도 참이면 참 모두 거짓일 경우에만 거짓
*/
