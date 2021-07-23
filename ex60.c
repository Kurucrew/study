#include <stdio.h>

int main()
{
    printf("더조은 아카데미\n");
    printf("-------------------------\n");
    for(int i = 0; i < 10; i++)//반복에 사용하는 변수 : 인덱스 변수 (int i = 0;시작(초기화식)  i < 10;끝(조건식)  i++단계(증가식))
    {
        printf("더조은 아카데미\n");
        printf("%d회차 반복\n", i+1);
    }

    return 0;
}
