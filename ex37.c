#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하세요 :");
    scanf("%d", &num);

    int result = (num %2 == 0) ? 2 : -1;

    printf("result :%d\n", result);

    (num %2 == 0) ? printf("짝수\n") : printf("홀수\n");// 어딘가에 할당하는것이 아니기 때문에 타입을 지정해주지 않아도 된다

    printf("--------------------\n");
    //삼항 연산자를 if문으로 작성
    if(num %2 == 0)
    {
        printf("짝수\n");
    }
    else
    {
        printf("홀수\n");
    }

    return 0;
}
