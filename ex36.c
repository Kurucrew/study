#include <stdio.h>
// >, <, >=, <=, ==, != �񱳿�����
int main()
{
    int num1 = 9;
    int num2;

    if(num1)// ������ �ڷᰡ 0�̸� false 0�� �ƴϸ�(������ ��� �������) true
    {
        num2 = 222;
    }
    else
    {
        num2 = 333;
    }

    printf("num2 : %d\n", num2);

    num2 = num1 ? 222 : 333;// ~~?~~:~~ = ���� ������ ���ǽ��� ����� true �̸�  : ���� ����� ���� false �� ���� ����� ���� �ʿ��� ���� 3���� ���� ������
    printf("num2 : %d\n", num2);

    num2 = (num1 == 10) ? 222 : 333;
    printf("num2 : %d\n", num2);

    return 0;
}
