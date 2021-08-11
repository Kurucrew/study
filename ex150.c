#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *helloF()
{
    int *c1 = 123;
    return c1;
}

char *helloH()
{
    char *c1 = malloc(sizeof(char)*20);
    strcpy(c1, "hello, world");
    return c1;
}

int main()
{
    int *cp1;
    char *cp2;

    cp1 = helloF();
    cp2 = helloH();

    printf("cp1 : %d\n", cp1);
    printf("cp2 : %s\n", cp2);

    free(cp2);

    return 0;
}
