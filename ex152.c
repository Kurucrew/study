#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x;
    int y;
};

struct point2
{
    int x;
    int y;
};


int main()
{//memset 구조체를 세팅하는 기능
    struct point p1;

    memset(&p1, 0, sizeof(struct point));

    printf("x : %d, y : %d\n", p1.x, p1.y);
    printf("----------------------\n");

    struct point2 *p2 = malloc(sizeof(struct point2));

    memset(p2, 0, sizeof(struct point2));

    printf("x : %d, y : %d\n", p2 -> x, p2 -> y);

    free(p2);

    return 0;
}
