#include <stdio.h>
// 1 + (-2) + 3 + (-4) + 5 + (-6) + 7 + (-8) + ... + ???
// 총합계가 100을 넘을 때의 수??
int main()
{
    int sum = 0;
    int i = 1;
    int sign = 1;
    int number = 0;

    while(1)
    {
        number = sign * i;
        sum += number;
        if(sum > 100)
        {
            break;
        }
        i++;
        sign = -1 * sign;
    }

    printf("1부터 %d까지 더해야 100을 넘습니다\n", i);
    printf("합계는 %d입니다\n", sum);

    return 0;
}
