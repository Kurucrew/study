#include <stdio.h>

int main()
{
    int num = 10;

    printf("number ������ �Ҵ�� �� ����ϱ�\n");
    printf("number : %d\n", num);
    printf("number ������ �ּ� ����ϱ�\n");
    printf("number : %p\n", &num);// p �� �ּҿ������� ����

    printf("C���� �޸� �ּҴ� ������ ������ ������\n");
    printf("������ ������ * �� ����ؼ� ������\n");
    printf("������ ������ ���Ӹ��� �����Ͷ�� ��\n");
    printf("\n�ڷ��� *������ �̸�;\n");
    printf("������ = &����\n\n");

    int *numberpointer;//������ ���� ����
    int number = 11;//���� ����
    numberpointer = &number; //number��� ������ �ּҸ� �Ҵ���

    printf("number : %d\n", number);
    printf("number(�ּ�) : %p\n", numberpointer);
    printf("number(�ּ�) : %p\n", &number);


    return 0;
}
