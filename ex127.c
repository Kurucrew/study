#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str2 = malloc(sizeof(char)*10);

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str2);

    printf("str2 : %s", str2);
    free(str2);

    printf("------------------\n");

    printf("--���ڿ� ������ �Է¹ޱ�--\n");

    char str3[10];
    char str4[10];

    printf("���ڿ� �� ���� �Է��ϼ��� : ");
    scanf("%s %s", str3, str4);

    printf("str3 : %s\n", str3);
    printf("str4 : %s\n", str4);

    printf("------------------\n");
    printf("--���ڿ� ������ �Է¹ޱ�--\n");

    char str5[10], str6[10], str7[10], str8[10], str9[10];

    printf("���ڿ��� �� �� �Է��ϼ��� : ");
    scanf("%s %s %s", str5, str6, str7);

    printf("str5 : %s\n", str5);
    printf("str6 : %s\n", str6);
    printf("str7 : %s\n", str7);

    printf("------------------\n");

    printf("���ڿ��� �ټ� �� �Է��ϼ��� : ");
    scanf("%s %s %s %s %s", str5, str6, str7, str8, str9);

    printf("str5 : %s\n", str5);
    printf("str6 : %s\n", str6);
    printf("str7 : %s\n", str7);
    printf("str8 : %s\n", str8);
    printf("str9 : %s\n", str9);

    printf("------------------\n");

    return 0;
}
