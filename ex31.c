#include <stdio.h>

int main()
{
    int num1;
    printf("������ �Է��ϼ��� : ");

    scanf("%d", &num1);

    if(num1 >= 11)
    {
        printf("num1�� 11���� ���ų� Ů�ϴ�\n", num1);
    }
    if(num1 >= 22)
    {
        printf("num1�� 22���� ���ų� Ů�ϴ�\n", num1);
    }
    if(num1 >= 33)
    {
        printf("num1�� 33���� ���ų� Ů�ϴ�\n", num1);// if�� �� �� ����� ���� ������� else�� ����� �Ѱ��� ����
    }


    return 0;
}
