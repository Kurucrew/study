#include <stdio.h>

int main()
{
    int count;
    printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
    scanf("%d", &count);

    for(int i = 1; i <= count; i++)
    {
        printf("������ IT ��ī���� - %d\n", i);
    }
    printf("------------------------\n");

    for(int i = count; i >= 1; i--)
    {
        printf("������ IT ��ī���� - %d\n", i);
    }

    printf("%dȸ �ݺ� �Ϸ�", count);

    return 0;
}
