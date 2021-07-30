#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *nump;

    nump = malloc(sizeof(int));

    *nump = 333;

    printf("*nump : %d", *nump);

    free(nump);

    return 0;
}
