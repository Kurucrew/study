#include <stdio.h>

int main()
{
    int num1;

    printf("1, 2, 3 중에서 하나를 입력하세요 : ");
    scanf("%d", &num1);

    if(num1 == 1)
    {
        goto ONE;
    }
    else if(num1 == 2)
    {
        goto TWO;
    }
    else if(num1 == 3)
    {
        goto THREE;
    }

    ONE:
        printf("1 입니다\n");
        goto EXIT;
    TWO:
        printf("2 입니다\n");
        goto EXIT;
    THREE:
        printf("3 입니다\n");
        goto EXIT;
    EXIT:
        printf("프로그램 종료\n");

    return 0;
}
