#include <stdio.h>
/*
조건문

if(조건식)
{
조건식이 참일 때만 실행되는 code
}

if(조건식)
{
조건식이 참일 때만 실행되는 code
}
else
{
조건식이 거짓일 때만 실행되는 code
}
*/
int main()
{
    printf("프로그램 시작");
    int num1 = 11;

    if(num1 == 11)
    {
        printf("num1은 %d입니다\n", num1);
        printf("num1은 홀수입니다\n", num1);// if문의 중괄호를 생략하면 바로 밑 한줄만 if문에 속한 code로 인식
    }
    printf("프로그램 종료");

    return 0;
}
