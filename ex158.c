#include <stdio.h>
//�Ű������� �����͸� ����ϱ�
void snum(int fir, int sec)
{
    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");
    int cup = fir;
    fir = sec;
    sec = cup;
    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");
}

void snum2(int *fir, int *sec)
{
    int cup = *fir;
    *fir = *sec;
    *sec = cup;
}

int main()
{

    int fir = 11;
    int sec = 22;

    snum(fir, sec);// �Ϲ� ������ �Լ��� �Ű������� ����������� �Լ��� ������ �Ű������� ����ߴ� ������ ���� ������ �ʴ´� (������ ���� �����ؼ� �ٿ� �־��� ����)

    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");

    snum2(&fir, &sec);// ������ ������ �Լ��� �Ű������� ����Ҷ��� �Լ��� ������ ����ߴ� ������ ���� ���Ѵ� (������ �ּҸ� �����ؼ� �ٿ��־��� ����)

    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");

    return 0;
}
