#include <stdio.h>

int main()
{
    int arrnum[3][4] =
    {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22}
    };

    int **nump = arrnum;

    printf("arrnum[0][0] : %d\n", arrnum[0][0]);
    printf("arrnum[1][1] : %d\n", arrnum[1][1]);
    printf("arrnum[2][2] : %d\n", arrnum[2][2]);

    printf("-------------------\n");

    int num1, num2, num3, num4;
    int *npoint[4] = {&num1, &num2, &num3, &num4}; //intŸ���� ������ 4���� ��� ������(����Ȱ��� ���� �ƴ� �ּ��� �迭)

    //�ڷ���(*�����ͺ����̸�)[����ũ��]
    int (*nump2)[4] = arrnum;//2���� �迭�� �����͸� �����ϴ� ���

    printf("*arrnum : %p\n", *arrnum);
    printf("*nump2 : %p\n", *nump2);
    printf("nump2[2][1] : %d\n", nump2[2][1]);

    printf("size arrnum : %d\n", sizeof(arrnum));
    printf("size nump2 : %d\n", sizeof(nump2));

    int n[3] = {1, 2, 3};
    printf("*n : %d\n", *n);
    printf("n : %p\n", n);

    return 0;
}
