#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //sqrt : (루트 함수)가 포함되있는 헤더파일

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1;
    struct point p2;
    double dp;

    p1.x = 30;
    p1.y = 20;

    p2.x = 70;
    p2.y = 60;

    printf("p1 : %d %d\n", p1.x, p1.y);
    printf("p2 : %d %d\n", p2.x, p2.y);

    printf("두 점 사이의 거리 구하기\n");

    dp = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

    printf("dp : %.4f\n", dp);



    return 0;
}
