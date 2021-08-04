#include <stdio.h>

int main()
{
    int arrnum[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *numpointer = arrnum;

    printf("*numpointer : %d\n", *numpointer);
    printf("*arrnum : %d\n", *arrnum);
    printf("arrnum[5] : %d\n", arrnum[5]);
    printf("numpointer[5] : %d\n", numpointer[5]);

    printf("arrnum size : %d\n", sizeof(arrnum));
    printf("numpointer size : %d\n", sizeof(numpointer));

    return 0;
}
