#include <stdio.h>

int main()
{

    int number;
    int sum = 0;

    printf("�� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);

    while(number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }

    printf("sum : %d", sum);

    return 0;
}
