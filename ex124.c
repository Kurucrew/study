#include <stdio.h>

int main()
{
    char str1[10] = "tjoeun";

    char *str2 = "academy";

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);

    str1[0] = 'i';//�迭�� ���� ���ڿ��� �����ͷ� ���� ���ڿ����� �ٸ��� ������ �ܾ ���� ����
    //str1 = "aaaa"; ��� ���ڿ� ��ü�� �ѹ��� �ٲ����� ����

    printf("str1 : %s\n", str1);

    printf("----------------------\n");

    char str3[10];

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str3);// �迭���� ��ü�� �ּҸ� �����ϴ� �����̱� ������ �ּҿ����� & �� ������ �ʾƵ� �ȴ�
    fflush(stdin);

    printf("str3 : %s\n", str3);

    printf("----------------------\n");
    printf("----������ �ִ� ���ڿ� �Է� �ޱ�----\n");

    char str4[10];

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%[^\n]s", str4);// [^\n]�� ������ �����ؼ� �Է��϶�� �ǹ�

    printf("�Է��Ͻ� ���ڿ��� '%s'�Դϴ�\n", str4);

    return 0;
}
