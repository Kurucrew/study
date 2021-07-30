#include <stdio.h>

int main()
{
    int *numberp1;
    int **numberp2;
    int number;

    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    numberp1 = &number;
    numberp2 = &numberp1;

    printf("%d\n", **numberp2);

    return 0;
}
