#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = "654";
    int number;

    number = atoi(s1);// atoi(���ڿ��� �ּҰ�) : ascii string to int (���ڿ��� int������ �ٲ�) ���ڿ��� ���������� �ٲ� ��� �ش� ���ڸ� ��ȯ, �ٲ��� ���� ��� 0�� ��ȯ��
    //stdlib.h �� ���ǵǾ� ����

    printf("number : %d\n", number);
    printf("------------------------\n");

    //16������ �� ���ڿ��� ������ �ٲٱ�
    char *s2 = "0xaf10";//16������ �տ� 0x�� �ٿ��ش�
    int number2;

    number2 = strtol(s2, NULL, 16);// strtol(����, ������ ���� ������ ����, ������ �ش��ϴ� ����)

    printf("16���� : %x, 10���� : %d\n", number2, number2);//%x 16������ ���Ĺ���
    printf("------------------------\n");

    char *s3 = "0xad10 42 0x27c 9952";
    int num1;
    int num2;
    int num3;
    int num4;

    char *end;// ���� ������ ���κ��� �����ϱ� ���� ������

    num1 = strtol(s3, &end, 16);
    num2 = strtol(end, &end, 10);
    num3 = strtol(end, &end, 16);
    num4 = strtol(end, NULL, 10);

    printf("num1 : %x\n", num1);
    printf("num2 : %d\n", num2);
    printf("num3 : %x\n", num3);
    printf("num4 : %d\n", num4);
    printf("------------------------\n");

    char *s4 = "23.568984";
    float fnumber;

    fnumber = atof(s4);// atof : ascii string to float

    printf("fnumber : %f\n", fnumber);
    printf("------------------------\n");

    char *s5 = "3.e5";
    float fnumber2;

    fnumber2 = atof(s5);

    printf("����ǥ�� : %e, �Ǽ�ǥ�� : %f\n", fnumber2, fnumber2);

    return 0;
}
