#include <stdio.h>

int main()//����������
{
    int value1;

    value1 = 11;
    value1++;
    printf("value1 : %d\n", value1);
    ++value1;
    printf("value1 : %d\n", value1);

    printf("���� ���� ������ : %d\n", ++value1);//������ �Ҵ����� ��� �Ҵ絵 �������� ��� ++�� �տ�������� �������� �Ҵ� �ڿ�������� �Ҵ� �� ����
    printf("���� ���� ������ : %d\n", value1++);
    printf("���� ���� ������ : %d\n", value1++);
    printf("���� ���� ������ : %d\n", value1++);
    printf("���� ���� ������ : %d\n", ++value1);
    printf("value1 : %d\n", value1);

    printf("----------------------------------\n");
    printf("���� ���� ������ : %d\n", --value1);
    printf("���� ���� ������ : %d\n", value1--);
    printf("���� ���� ������ : %d\n", value1--);
    printf("���� ���� ������ : %d\n", value1--);
    printf("���� ���� ������ : %d\n", --value1);
    printf("value1 : %d\n", value1);

    return 0;
}
