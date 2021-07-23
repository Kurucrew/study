#include <stdio.h>

int main()
{
    int number;
    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    switch(number)
    {
    case 1:
        {
        int num = number;// case문 안에서 변수를 선언하는 경우에는 중괄호로 묶어주어야함 비주얼 스튜디오 2015버전 이후부터는 하지 않아도 실행됨
        printf("%d 를 입력하셨습니다\n", num);
        }
        break;
    case 2:
        printf("2를 입력하셨습니다\n");
        break;
    case 3:
        printf("3을 입력하셨습니다\n");
        break;
    default:
        printf("1, 2, 3 중 에서만 입력해 주세요\n");
        break;
    }

    printf("프로그램 종료");

    return 0;
}
