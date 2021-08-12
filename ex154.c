#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x;
    int y;
};

int main()
{
    //구조체 타입의 배열 생성
    struct point p1[3];// 구조체의 주소가 배열로 생성된다

    p1[0].x = 11;
    p1[0].y = 12;
    p1[1].x = 11;
    p1[1].y = 12;
    p1[2].x = 11;
    p1[2].y = 12;

    for(int i = 0; i < 3; i++)
    {
        printf("p1[%d].x : %d, p1[%d].y :%d\n", i, p1[i].x, i, p1[i].y);
    }
    printf("---------------------\n");

    //구조체 배열을 선언과 동시에 초기화
    struct point p2[3] = {{.x = 31, .y = 32}, {.x = 33, .y = 34}, {.x = 35, .y = 36}};

    for(int i = 0; i < 3; i++)
    {
        printf("p2[%d].x : %d, p2[%d].y :%d\n", i, p2[i].x, i, p2[i].y);
    }
    printf("---------------------\n");

    struct point p3[3] = {{1, 2}, {3, 4}, {5, 6}};// 선언과 동시에 초기화 할 경우에는 따로 위치를 적어주지 않아도 된다

    for(int i = 0; i < 3; i++)
    {
        printf("p3[%d].x : %d, p3[%d].y :%d\n", i, p3[i].x, i, p3[i].y);
    }
    printf("---------------------\n");
// 구조체 맴버 전부를 0으로 초기화
    struct point p4[3] = {0,};

    for(int i = 0; i < 3; i++)
    {
        printf("p4[%d].x : %d, p4[%d].y :%d\n", i, p4[i].x, i, p4[i].y);
    }
    printf("---------------------\n");

    return 0;
}
