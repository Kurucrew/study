#include<stdio.h>
int main()//������ �޸𸮻��� �̸�ǥ(�ĺ���)name identifi
{//������ ���� ����
    int num1, num2;
    //������ �ʱ�ȭ:ó������ ���� �Ҵ��ϴ� ��
    num1 = 10;
    num2 = 8;
    //format specifier : ���� ������
    //%d : decimal
    //%f : floating point �Ҽ��� �ִ� ����<-�Ǽ� �Ҽ��� 6�ڸ����� ǥ��
    printf("%d + %d = %d\n", num1, num2, num1+num2);//f=format���� %d=��ȯ���� specifier ������ ������� ������ ����
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d x %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    printf("%d / %d = %f\n", num1, num2, num1/(double)num2);//double=���������� �Ǽ��� ǥ��
    printf("%d / %.2f = %f\n", num1, (double)num2, num1/(double)num2);//.2�� �Ҽ��� 2�ڸ������� ǥ���Ѵٴ� �ǹ�
    printf("%d %% %d = %d", num1, num2, num1%num2);
    return 0;
}
