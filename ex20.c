#include <stdio.h>

int main()
{
    /*
    234 �� �Է��ϸ� 200��,
    456 �� �Է��ϸ� 400��,
    578 �� �Է��ϸ� 500��
    ����ϴ� ���α׷��� �ۼ��ϼ���
    [��Ʈ] int type �� / �����ڿ� % ������ ����ϱ�
    */

    int number;
    printf("���� �ڸ� ������ �Է��ϼ��� : ");
    scanf("%d", &number);

    /*
    number = number / 100;
    number = number * 100;

    number /= 100;
    number *= 100;
    */

    number = (number/100)*100;

    printf("number : %d\n", number);

    return 0;
}
