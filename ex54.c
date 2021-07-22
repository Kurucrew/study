#include <stdio.h>
/*
switch(변수(수식))//switch의 변수와 case의 값이 맞는 것을 실행
{
case 값1:
수행문
break;//자신이 속한 중괄호를 빠져나가는 명령어
case 값2:
수행문
break;
case 값3:
수행문
break;
default:
수행문
break;
}
*/
int main()
{
    int num1;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num1);

    switch(num1)
    {
    case 1:
        printf("입력하신 숫자는 1입니다\n");
        break;
    case 2:
        printf("입력하신 숫자는 2입니다\n");
        break;
    case 3:
        printf("입력하신 숫자는 3입니다\n");
        break;
    default://case 이외의 모든것
        printf("입력하신 숫자는 1, 2, 3 중에 없습니다\n");
        break;
    }

    printf("프로그램 종료\n");

    return 0;
}
