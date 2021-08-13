#include <stdio.h>
#include <stdlib.h>

void se(int arr[], int idx1, int idx2)
{
  int cup;

  cup = arr[idx1];
  arr[idx1] = arr[idx2];
  arr[idx2] = cup;
};

int main()
{
    int arrn[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < sizeof(arrn) / sizeof(int); i++)
    {
        printf("arrn[%d] : %d\n", i, arrn[i]);
    }

    printf("-------------------\n");
    se(arrn, 0, 1);

    for(int i = 0; i < sizeof(arrn) / sizeof(int); i++)
    {
        printf("arrn[%d] : %d\n", i, arrn[i]);
    }

    return 0;
}
