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
    struct point p1;
    struct point p2;

    p1.x = 10;
    p1.y = 20;

    printf("p1.x : %d, p1.y : %d\n", p1.x, p1.y);

    memcpy(&p2, &p1, sizeof(struct point));//함수안의 내용을 복사하는 함수

    printf("p2.x : %d, p2.y : %d\n", p2.x, p2.y);
    printf("---------------------\n");

    struct point *p3 = malloc(sizeof(struct point));
    struct point *p4 = malloc(sizeof(struct point));

    p3 -> x = 33;
    p3 -> y = 55;

    printf("p3.x : %d, p3.y : %d\n", p3 -> x, p3 -> y);

    memcpy(p4, p3, sizeof(struct point));

    printf("p4.x : %d, p4.y : %d\n", p4 -> x, p4 -> y);

    free(p3);
    free(p4);

    return 0;
}
