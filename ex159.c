#include <stdio.h>
#include <stdlib.h>

void allm(void **p, int size)
{
    *p = malloc(size);
}

int main()
{
    long long *nump = NULL;

    allm((void **)&nump, sizeof(long long));

    *nump = 10;

    printf("*nump : %lld\n", *nump);

    free(nump);

    return 0;
}
