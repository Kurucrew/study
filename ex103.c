#include <stdio.h>

int main()
{
    int *numberp1;
    int **numberp2;
    int number;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &number);

    numberp1 = &number;
    numberp2 = &numberp1;

    printf("%d\n", **numberp2);

    return 0;
}
