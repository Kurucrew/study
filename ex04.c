/*
������ ��� ����ϱ�
*/
#include <stdio.h>

int main()
{
    int kor, eng, math;
    int total;
    double average;

    kor = 90;
    eng = 90;
    math = 91;

    total = kor+eng+math;
    average = (double)total/3;//average = total/3.0; �̷��� �ص� ����� �Ǵ�




    printf("���� : %3d\t���� : %3d\t���� : %3d\n", kor, eng, math);//d���� ���ڴ� ���ڸ� �ش� �ڸ��� ������ ����ϰڴٴ� �ǹ�
    printf("-----------------------------------------------------\n");
    printf("���� : %3d\t��� : %3.2f\n", total, average);



    return 0;
}
