#include <stdio.h>

int main()
{
    char *str1 = "tjoeun";//���ڿ��� ���ڵ��� �迭 �̱� ������ ������ ���ڿ� �ε��� ��ȣ�� �ο��ȴ�

    printf("str1[%d] : %c\n", 0, str1[0]);
    printf("str1[%d] : %c\n", 1, str1[1]);
    printf("str1[%d] : %c\n", 2, str1[2]);
    printf("str1[%d] : %c\n", 3, str1[3]);
    printf("str1[%d] : %c\n", 4, str1[4]);
    printf("str1[%d] : %c\n", 5, str1[5]);
    printf("str1[%d] : %c\n", 6, str1[6]);//c���� ���ڿ��� �����ϸ� ���� null���� �����Ͽ� ���ڿ��� �������� �˸��� ���� 6���ڸ� �����ص� 7��°�� null���� ���� ������ �ȴ�

    printf("-------------------------------\n");

    //str1[3] = 'r'; �����߻� (c���� ���ڿ��� �ѹ� �����ϸ� �� ���� ������ �ٲ� �� ����)
    str1 = "tjorun";// ������ ���ڿ��� ���� �����ϴ� ���� ����(�ֳ��ϸ� ���� �����ϴ� ���ڿ��� �ٸ� �޸� ������ ���� �����ѵ� �� �ּ����� �����ϴ� ���̱� ����)

    for(int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }

    printf("\n-------------------------------\n");

    int num[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("num[%d] : %d\n", i, num[i]);
    }

    printf("-------------------------------\n");

    num[3] = 2222;

    for(int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("num[%d] : %d\n", i, num[i]);
    }

    return 0;
}
