#include <stdio.h>
#define PI 3.141592//상수

int main()
{
    int radius;
    double area;
    double circumference;

    radius = 4;
    area = radius*radius*PI;
    circumference = 2*radius*PI;

    printf("반지름 : %d\n", radius);
    printf("원넓이 : %.2f\n", area);
    printf("원둘레 : %.2f\n",circumference);

    return 0;

}
