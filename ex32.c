#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = 2;

    if(0 < n1 && n1 < 10)// && :���� �� and ������
    {
        printf("0< n1 < 10 \n");
    }

    if(n1 < 0 || n2 == 2)// || : ���� �� or ������
    {
        printf("n1�� 0���� �۰ų�, n2�� 2�Դϴ�\n");
    }

    if(!(n1>n2))// ! : �� ���� ������ ���ϰ�� ������ ���� ������ ��� ���� ����
    {
        printf("n1�� n2���� ũ�� �ʽ��ϴ�\n n1�� n2���� �۰ų� �����ϴ�");
    }

    return 0;
}
/*
true && true : true
true && false :false
false && true : false
false && false : false ��� ���� ��쿡�� �� �����̶� �����̸� ����

true || true : true
true || false : true
flase || true : true
false || false : false �����̶� ���̸� �� ��� ������ ��쿡�� ����
*/
