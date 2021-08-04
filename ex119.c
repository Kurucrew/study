#include <stdio.h>
/*
int arrnum[5] = {1, 2, 3, 4, 5} 1차원배열
int arrnum[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}} 2차원배열
*/
int main()
{
    int arrnum[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("arrnum[2][3] : %d\n", arrnum[2][3]);
    printf("arrnum[1][1] : %d\n", arrnum[1][1]);
    printf("arrnum[0][3] : %d\n", arrnum[0][3]);

    int n[4] = {15, 16, 17, 18};

    for(int i = 0; i < sizeof(n) / sizeof(int); i++)
    {
        printf("n[%d] : %d\n", i, n[i]);
    }
    printf("--------------------------\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("arrnum[%d][%d] : %d\n", i, j, arrnum[i][j]);
        }
    }
    printf("--------------------------\n");


    int row = 0;
    int col = 0;

    row = sizeof(arrnum) / sizeof(arrnum[0]);
    col = sizeof(arrnum[0]) / sizeof(int);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("arrnum[%d][%d] : %d\n", i, j, arrnum[i][j]);
        }
    }
    printf("--------------------------\n");

    for(int i = row - 1; i >= 0; i--)
    {
        for(int j = col - 1; j >= 0; j--)
        {
            printf("arrnum[%d][%d] : %d\n", i, j, arrnum[i][j]);
        }
    }
    printf("--------------------------\n");


    return 0;
}
