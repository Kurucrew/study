#include <stdio.h>
#include <stdilb.h>

int main()
{
    int arrnum1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrnum2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arrnum3[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

    int **p = malloc(sizeof(int*) * 3);

    p[0] = arrnum1;
    p[1] = arrnum2;
    p[2] = arrnum3;

    for(int i = 0; i < 3; i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}
