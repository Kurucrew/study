#include <stdio.h>
// ���� : 333�� �Է��ϸ� 331�� ��µǰ� 777�� �Է��ϸ� 771�� ��µǰ� �ڵ带 �ۼ��ϼ���
int main()
{
    int num;
    printf("��ġ�� �Է��ϼ��� :");
    scanf("%d", &num);

    num = num / 100;
    num = num * 110;
    num = num + 1;

    printf("%d", num);

    /*
    �ش�
    int num;
    printf("��ġ�� �Է��ϼ��� :");
    scanf("%d", &num);

    printf("��� : %d\n", num / 10 * 10 + 1);
    */

    return 0;
}
