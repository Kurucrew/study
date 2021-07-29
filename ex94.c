#include <stdio.h>

int main()
{
    //number 에 저장된 숫자가 거꾸로 읽어도 앞으로 읽는것과 같은 숫자 (회문) 인지 알아보기
    int number;
    int temp = number;
    int reverseNum = 0;

    printf("회문수로 검사할 숫자를 입력하세요 : ");
    scanf("%d", &number);

    for(int i = 0; i < 5; i++)
    {
    reverseNum = (reverseNum * 10) + (temp % 10);
    temp = temp / 10;
    }

    printf("입력 : %d\n", number);
    printf("결과 : %d\n", reverseNum);

    if(number == reverseNum)
    {
        printf("%d 는 회문이 맞습니다\n", number);
    }
    else
    {
        printf("%d 는 회문이 아닙니다\n", number);
    }

    return 0;
}
