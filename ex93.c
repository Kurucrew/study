#include <stdio.h>

int main()
{
    //number �� ����� ���ڰ� �Ųٷ� �о ������ �д°Ͱ� ���� ���� (ȸ��) ���� �˾ƺ���
    int number = 12321;
    int temp = number;
    int reverseNum = 0;

    for(int i = 0; i < 5; i++)
    {
    reverseNum = (reverseNum * 10) + (temp % 10);
    temp = temp / 10;
    }

    printf("�Է� : %d\n", number);
    printf("��� : %d\n", reverseNum);

    if(number == reverseNum)
    {
        printf("%d �� ȸ���� �½��ϴ�\n", number);
    }
    else
    {
        printf("%d �� ȸ���� �ƴմϴ�\n", number);
    }

    return 0;
}