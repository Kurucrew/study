#include <stdio.h>

const double PI = 3.141597;//global variable - �������� double PI = 3.141597;
//const ��� : ���α׷� ���� �߿� ���� ������ ����
int main()
{
    int radius;
    double area, circumference;

    radius =6;
    area = radius * radius * PI;
    circumference = 2 * radius * PI;

    printf("������ : %.2f\n", area);
    printf("���ѷ� : %.2f\n", circumference);

    return 0;
}
