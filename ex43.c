#include <stdio.h>

int main()
{
    int num1 = 5;

    printf("num1 : %d\n", num1);
    printf("%d\n", num1 << 1);// num1�� ��Ʈ�� �������� �ϳ��� �ű� 0 1 0 1 -> 1 0 1 0 �ش� ������ 2��n���� �� ���� ���� ����� ��ȯ
    printf("%d\n", num1 << 2);
    printf("%d\n", num1 << 3);

    return 0;
}
