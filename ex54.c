#include <stdio.h>
/*
switch(����(����))//switch�� ������ case�� ���� �´� ���� ����
{
case ��1:
���๮
break;//�ڽ��� ���� �߰�ȣ�� ���������� ��ɾ�
case ��2:
���๮
break;
case ��3:
���๮
break;
default:
���๮
break;
}
*/
int main()
{
    int num1;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num1);

    switch(num1)
    {
    case 1:
        printf("�Է��Ͻ� ���ڴ� 1�Դϴ�\n");
        break;
    case 2:
        printf("�Է��Ͻ� ���ڴ� 2�Դϴ�\n");
        break;
    case 3:
        printf("�Է��Ͻ� ���ڴ� 3�Դϴ�\n");
        break;
    default://case �̿��� ����
        printf("�Է��Ͻ� ���ڴ� 1, 2, 3 �߿� �����ϴ�\n");
        break;
    }

    printf("���α׷� ����\n");

    return 0;
}
