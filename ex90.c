#include <stdio.h>

int main()
{
    char number[16] = "12345";//c������ ���ڿ� �̶�� Ÿ���� ���� ���� ������ ĳ���� Ÿ���� �迭�� �̿��� �ۼ��Ѵ� c���� �迭�� ���� null���ڰ� ���ԵǱ� ������ ���ϴ� ��ġ +1�� ����� �Ѵ�
    int sum = 0;

    printf("number[0] : %d\n", number[0]);
    printf("number[1] : %d\n", number[1]);
    printf("number[2] : %d\n", number[2]);
    printf("number[3] : %d\n", number[3]);
    printf("number[4] : %d\n", number[4]);
    printf("----------------------------\n");
    printf("number[0] : %c\n", number[0]);
    printf("number[1] : %c\n", number[1]);
    printf("number[2] : %c\n", number[2]);
    printf("number[3] : %c\n", number[3]);
    printf("number[4] : %c\n", number[4]);
    printf("----------------------------\n");

    for(int i = 0; i < 5; i++)
    {
        sum = sum + (number[i] - '0');// int Ÿ���� �����̱� ������ char Ÿ���� ��������� �ƽ�Ű �ڵ��� ��ġ�� ��ȯ�Ǿ� �����ϱ⶧���� �ƽ�Ű �ڵ�� 0�� ���� 48�� ���־�� �Ѵ�
    }

    printf(" sum : %d\n", sum);

    return 0;
}
