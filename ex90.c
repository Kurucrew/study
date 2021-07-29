#include <stdio.h>

int main()
{
    char number[16] = "12345";//c에서는 문자열 이라는 타입이 따로 없기 때문에 캐릭터 타입의 배열을 이용해 작성한다 c언어는 배열의 끝에 null문자가 포함되기 때문에 원하는 수치 +1을 해줘야 한다
    int sum = 0;

    printf("number[0] : %d\n", number[0]);
    printf("number[1] : %d\n", number[1]);
    printf("number[2] : %d\n", number[2]);
    printf("number[3] : %d\n", number[3]);
    printf("number[4] : %d\n", number[4]);
    printf("----------------------------\n");
    printf("number[0] : %c\n", number[0]);
    printf("number[1] : %c\n", number[1]);
    printf("number[2] : %c\n", number[2]);
    printf("number[3] : %c\n", number[3]);
    printf("number[4] : %c\n", number[4]);
    printf("----------------------------\n");

    for(int i = 0; i < 5; i++)
    {
        sum = sum + (number[i] - '0');// int 타입의 연산이기 때문에 char 타입을 집어넣으면 아스키 코드의 수치로 전환되어 연산하기때문에 아스키 코드상 0의 값인 48을 빼주어야 한다
    }

    printf(" sum : %d\n", sum);

    return 0;
}
