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
    else if(num1 >= 22)
    {
        printf("num1�� 22���� ���ų� Ů�ϴ�\n", num1);
    }
    else
    {
        printf("num1�� 11�� �ƴϰ� 22�� �ƴմϴ�\n", num1);
    }


    return 0;
}
