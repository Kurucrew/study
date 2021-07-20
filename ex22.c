#include <stdio.h>
//num에 저장된 숫자보다 크면서도 가장 가까운 10의 배수에서 num의 값을 뺀 나머지를 구하는 code를 작성하세요
int main()
{
    int num;
    int num2;
    printf("수치를 입력하세요 : ");
    scanf("%d", &num);

    num %= 10;
    num2 = 10 - num;

    printf("%d", num2);

    return 0;
}
/*
해답
int main()
{
    int num;
    printf("수치를 입력하세요 : ");
    scanf("%d", &num);


    printf("%d", 10 - (num % 10));

    return 0;
}
또는
int main()
{
    int num;
    printf("수치를 입력하세요 : ");
    scanf("%d", &num);


    printf("%d", (num / 10 +1) * 10 - num);

    return 0;
}
*/
