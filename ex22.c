#include <stdio.h>
//num�� ����� ���ں��� ũ�鼭�� ���� ����� 10�� ������� num�� ���� �� �������� ���ϴ� code�� �ۼ��ϼ���
int main()
{
    int num;
    int num2;
    printf("��ġ�� �Է��ϼ��� : ");
    scanf("%d", &num);

    num %= 10;
    num2 = 10 - num;

    printf("%d", num2);

    return 0;
}
/*
�ش�
int main()
{
    int num;
    printf("��ġ�� �Է��ϼ��� : ");
    scanf("%d", &num);


    printf("%d", 10 - (num % 10));

    return 0;
}
�Ǵ�
int main()
{
    int num;
    printf("��ġ�� �Է��ϼ��� : ");
    scanf("%d", &num);


    printf("%d", (num / 10 +1) * 10 - num);

    return 0;
}
*/
