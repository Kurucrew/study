#include <stdio.h>

int main()
{
    int num = 5;

    printf("%s\n", num == 11 ? "11�Դϴ�" : "11�� �ƴմϴ�");

    printf("----------------------\n");

    int num1, abs;//abs : ���밪
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num1);

    abs = num1 > 0 ? num1 : -num1;
    printf("num1�� ���� : %d\n", abs);

    printf("----------------------\n");

    int n1;
    int n2;
    int n3;
    int max;
    printf("���� �� ���� �Է��ϼ��� : \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3)
    {
        max = n1;
    }
    else if(n3 > n2)
    {
        max = n3;
    }
    else
    {
        max = n2;
    }
    printf("�� �� �� ���� ū ���� %d �Դϴ�\n", max);

    max = (n1 > n2 && n1 > n3) ? n1 : (n2 >n3) ? n2 : n3;

    printf("�� �� �� ���� ū ���� %d �Դϴ�\n", max);

    return 0;
}
