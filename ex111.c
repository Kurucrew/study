#include <stdio.h>

int main()
{
    int arrnums[7] = {98, 67, 79, 84, 85, 94, 92};
    // 7���� �л����� ������ ������ ���ϼ���
    int sum = 0;
    float average = 0;

    for(int i = 0; i < sizeof(arrnums) / sizeof(int); i++)
    {
        sum += arrnums[i];
    }

    average = sum / (sizeof(arrnums) / sizeof(int));

    printf("sum : %d\n", sum);
    printf("average : %.2f\n", average);

    return 0;
}
