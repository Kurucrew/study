#include <stdio.h>
#define SIZE 20

int main()
{
    double left, right, average;//�޸𸮿� �ش��̸��� ���� ������ Ȯ��
    char name[SIZE], line[] ="------------------";

    label:
    printf("�̸��� �Է��ϼ��� : ");
    fflush(stdin);//stdin = ǥ�� �Է�
    gets(name);// scanf("%s", name); �� ����
    printf("����, ������ �÷��� �Է��ϼ��� : ");
    scanf("%lf %lf", &left, &right);//������ �������� 1,2�� ������ ���� �ܼ� �Է½ÿ��� ������ �����
    average = (left+right)/2;
    printf("%s\n", line);
    printf("�̸� : %s\n", name);//%~~ : ���Ĺ���
    printf("��� �÷� : %.2f\n\n", average);

    goto label;//�ڵ��� �帧�� �ش� �̸��� ���� ������ �̵�(�ݺ����� ����)
    return 0;
}
