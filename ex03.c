#include<stdio.h>

//type - data type
//�� - �ڷ���

int main()
{
    int num1;
    int num2;
    num1 = 10;
    num2 = 8;

    printf("num1 : %d\tnum2 : %d\n",num1, num2);
    printf("int type�� ũ��(byte��) : %d\n", sizeof(int));//4byte int�� �� ���� ��ȣ�� ����ϰ� ���� 31��Ʈ�� ������ Ȱ���ϴ� ������
    printf("���� 3�� ũ�� (byte ��) : %d\n", sizeof(3));//4byte
    printf("long long type�� ũ�� (byte ��) : %d\n", sizeof(long long));// long�� �� ���� ��ȣ�� ����ϰ� ���� 63��Ʈ�� ������ Ȱ���ϴ� ������
    printf("double type�� ũ�� (byte ��) : %d\n", sizeof(double));

    return 0;
}
