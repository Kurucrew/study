#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�Ǽ��� ���ڿ��� ��ȯ�ϱ�
    char s1[10];
    float num1 = 38.972340f;

    sprintf(s1, "%f", num1);

    printf("s1 : %s\n", s1);
    printf("---------------------\n");

    sprintf(s1, "%e", num1);
    printf("s1 : %s\n", s1);
    printf("---------------------\n");

    //���ڿ��� 10������ ��ȯ
    char *s2 = "20972";
    int num2;

    num2 = atoi(s2);

    printf("num2 : %d\n", num2);
    printf("---------------------\n");

    char *s3 = "0x1face";
    int num3;

    num3 = strtol(s3, NULL, 16);// ���� ���ڿ��� ����ִ� ���ڰ� �ϳ��̹Ƿ� �ι�° argument(�� ������) �δ� null�� ���
    printf("num3 : 0x%x\n", num3);
    printf("---------------------\n");

    char *s4 = "97.527824";
    float num4;

    num4 = atof(s4);
    printf("num4 : %f\n", num4);
    printf("---------------------\n");

    char *s5 = "29.977213 4528.112305";
    float num5;
    float num6;
    char *end;

    num5 = strtof(s5, &end);
    num6 = strtof(end, NULL);

    printf("num5 : %f\n", num5);
    printf("num6 : %f\n", num6);
    printf("---------------------\n");

    // ĳ���� �迭�� �Ǽ������ ���ڿ��� ���� ����� ���ڿ��� �Բ� ������ �� �迭 �ӿ� ����� ���ڿ� ����ϱ�
    char s6[30];
    float fnum = 98.415237f;
    int inum = 0x3fe1920;

    sprintf(s6, "%f, 0x%x", fnum, inum);

    printf("s6 : %s\n", s6);

    return 0;
}
