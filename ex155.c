#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union box
{
    short candy;//2byte
    float snack;//4byte
    char doll[8];//8byte
};

int main()
{
    //����ü ��������
    union box b1;

    printf("����ü�� ũ�� : %d byte\n", sizeof(b1));

    strcpy(b1.doll, "tjoeun");
    printf("b1.doll : %s\n", b1.doll);// ����ü�� �ش� ����ü�� ���Ե� ���� ū Ÿ���� �ڷ����� ������ �����ϱ⶧���� �ѹ��� �Ѱ����� �ڷḸ ó�� �����ϴ�

    b1.candy = 1;
    printf("b1.candy : %d\n", b1.candy);

    b1.snack = 2.3542f;
    printf("b1.snack : %.2f\n", b1.snack);

    return 0;
}
