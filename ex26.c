#include <stdio.h>
/*
���ǹ�

if(���ǽ�)
{
���ǽ��� ���� ���� ����Ǵ� code
}

if(���ǽ�)
{
���ǽ��� ���� ���� ����Ǵ� code
}
else
{
���ǽ��� ������ ���� ����Ǵ� code
}
*/
int main()
{
    printf("���α׷� ����");
    int num1 = 11;

    if(num1 == 11)
    {
        printf("num1�� %d�Դϴ�\n", num1);
        printf("num1�� Ȧ���Դϴ�\n", num1);// if���� �߰�ȣ�� �����ϸ� �ٷ� �� ���ٸ� if���� ���� code�� �ν�
    }
    printf("���α׷� ����");

    return 0;
}
