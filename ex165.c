#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x;
    int y;
};

void dp(struct point n)
{
    printf("p.x : %d, p.y : %d\n", n.x, n.y);
}

int main()
{
    struct point p;

    p.x = 10;
    p.y = 20;

    dp(p);

    return 0;
}
