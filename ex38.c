#include <stdio.h>

int main()
{
    int num = 5;

    printf("%s\n", num == 11 ? "11입니다" : "11이 아닙니다");

    printf("----------------------\n");

    int num1, abs;//abs : 절대값
    printf("정수를 입력하세요 : ");
    scanf("%d", &num1);

    abs = num1 > 0 ? num1 : -num1;
    printf("num1의 절댓값 : %d\n", abs);

    printf("----------------------\n");

    int n1;
    int n2;
    int n3;
    int max;
    printf("정수 세 개를 입력하세요 : \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3)
    {
        max = n1;
    }
    else if(n3 > n2)
    {
        max = n3;
    }
    else
    {
        max = n2;
    }
    printf("세 수 중 제일 큰 수는 %d 입니다\n", max);

    max = (n1 > n2 && n1 > n3) ? n1 : (n2 >n3) ? n2 : n3;

    printf("세 수 중 제일 큰 수는 %d 입니다\n", max);

    return 0;
}
