#include <stdio.h>

int main()
{
    int *num1p;
    int **num2p;
    int ***num3p;
    int ****num4p;
    int *****num5p;
    int ******num6p;//�����ʹ� �������� �ص� ��� ������ �������� ���� 3���̻��� ������� �ʴ´�
    int num = 11;

    num1p = &num;
    num2p = &num1p;
    num3p = &num2p;
    num4p = &num3p;
    num5p = &num4p;
    num6p = &num5p;

    printf("num6p : %d", ******num6p);



    return 0;
}
