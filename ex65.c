#include <stdio.h>

int main()
{
    int count;
    printf("반복할 횟수를 입력하세요 : ");
    scanf("%d", &count);

    for(int i = 1; i <= count; i++)
    {
        printf("더조은 IT 아카데미 - %d\n", i);
    }
    printf("------------------------\n");

    for(int i = count; i >= 1; i--)
    {
        printf("더조은 IT 아카데미 - %d\n", i);
    }

    printf("%d회 반복 완료", count);

    return 0;
}
