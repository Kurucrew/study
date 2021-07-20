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
    if(num1 >= 22)
    {
        printf("num1은 22보다 같거나 큽니다\n", num1);
    }
    if(num1 >= 33)
    {
        printf("num1은 33보다 같거나 큽니다\n", num1);// if를 각 각 쓸경우 서로 관계없음 else를 쓸경우 한개만 실행
    }


    return 0;
}
