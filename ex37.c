#include <stdio.h>

int main()
{
    int num;

    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    int result = (num %2 == 0) ? 2 : -1;

    printf("result :%d\n", result);

    (num %2 == 0) ? printf("¦��\n") : printf("Ȧ��\n");// ��򰡿� �Ҵ��ϴ°��� �ƴϱ� ������ Ÿ���� ���������� �ʾƵ� �ȴ�

    printf("--------------------\n");
    //���� �����ڸ� if������ �ۼ�
    if(num %2 == 0)
    {
        printf("¦��\n");
    }
    else
    {
        printf("Ȧ��\n");
    }

    return 0;
}
