#include <stdio.h>
#define PI 3.141592//���

int main()
{
    int radius;
    double area;
    double circumference;

    radius = 4;
    area = radius*radius*PI;
    circumference = 2*radius*PI;

    printf("������ : %d\n", radius);
    printf("������ : %.2f\n", area);
    printf("���ѷ� : %.2f\n",circumference);

    return 0;

}
