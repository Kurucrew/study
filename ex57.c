#include <stdio.h>

int main()
{
    int number;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &number);

    switch(number)
    {
    case 1:
        {
        int num = number;// case�� �ȿ��� ������ �����ϴ� ��쿡�� �߰�ȣ�� �����־���� ���־� ��Ʃ��� 2015���� ���ĺ��ʹ� ���� �ʾƵ� �����
        printf("%d �� �Է��ϼ̽��ϴ�\n", num);
        }
        break;
    case 2:
        printf("2�� �Է��ϼ̽��ϴ�\n");
        break;
    case 3:
        printf("3�� �Է��ϼ̽��ϴ�\n");
        break;
    default:
        printf("1, 2, 3 �� ������ �Է��� �ּ���\n");
        break;
    }

    printf("���α׷� ����");

    return 0;
}
