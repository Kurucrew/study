#include <stdio.h>

int main()
{
    // int type ���� number �� �����ϰ� �� �ڸ����� �Ҵ� �� �� �� �ڸ����� ���� ����ϴ� ���α׷��� �ۼ��ϼ���

    int number;
    int mod = 0;
    int sum = 0;

    printf("�� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);

    /*
    for(int i = 0; i < 10; i++)
    {
        mod = number % 10;
        sum = sum + mod;
        number = number / 10;
    }
    */
    //or
    while(number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }

    printf("%d", sum);

    return 0;
}
