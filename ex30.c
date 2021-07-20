#include <stdio.h>

int main()
{
    int num1;
    printf("정수를 입력하세요 : ");

    scanf("%d", &num1);

    if(num1 >= 11)
    {
        printf("num1은 11보다 같거나 큽니다\n", num1);
    }
    else if(num1 >= 22)
    {
        printf("num1은 22보다 같거나 큽니다\n", num1);
    }
    else
    {
        printf("num1은 11도 아니고 22도 아닙니다\n", num1);
    }


    return 0;
}
