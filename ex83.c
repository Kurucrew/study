#include <stdio.h>
#include <stdbool.h>
// 1 부터 몇 까지 더해야 그 총합이 100을 넘는지
int main()
{
    int i = 1;
    int sum = 0;

    for(i = 1; i <= 50; i++)
    {
        sum += i;
        if(sum >= 100)
        {
            break;
        }
    }
    printf("1 ~ %d : %d\n", i, sum);

    //or
    sum = 0;
    i = 1;
    while (true)
    {
        sum += i;
        if (sum > 100)
        {
            break;
        }
        i++;
    }

        printf("1부터 %d까지 더하면 합계가 100을 넘습니다\n", i);
        printf("합계는 %d입니다\n", sum);

    return 0;
}
