#include <stdio.h>
#include <string.h>
//void hello() 함수의 선언부
//{} 함수의 구현부
//함수는 실행을 마치면 함수를 호출한 곳으로 프로그램의 흐름이 돌아감
//함수는 호출을 해야 실행됨
//함수를 호출하는 방법 : 함수이름(매개변수에 전달할 값)
int number = 33;// 전역변수 : 함수 밖에있는 변수

void hello()// void : 리턴타입, 리턴값이 없는 경우에 사용함
{
    //hello : 함수 이름
    // () : 매개변수부 - 매개변수를 선언하지 않는 경우에는 비워둠
    printf("hello, programming !!!\n");
    //return; : 리턴값이 없는 경우에는 생략 가능
    int number2 = 11;//지역변수 : 함수 속에있는 변수
    printf("number2 : %d\n", number2);
    printf("number : %d\n", number);
}
//함수의 목적중 제일 비중이 큰것은 코드의 재활용이다
int main()
{
    printf("프로그램 시작\n");
    hello();// 인자, 인자값, 인수 셋중 하나로 부름
    printf("-------------------\n");
    printf("number2 in M : %d\n", number);
    printf("프로그램 종료\n");
    return 0;
}

