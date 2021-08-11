#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
    char c1;
    int *nump;
};

int main()
{
    int num1 = 10;
    struct data d;
    struct data *dp = malloc(sizeof(struct data));

    d.nump = &num1;
    dp -> nump = &num1;

    printf("*d. : %d\n", *d.nump);
    printf("*dp : %d\n", *dp -> nump);

    printf("d : %d\n", d.nump);
    printf("dp : %d\n", dp -> nump);

    dp -> c1 = 'a';

    printf("dp : %c\n", (*dp).c1);

    free(dp);

    return 0;
}
