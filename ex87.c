#include <stdio.h>

int main()
{
    //2x + 4y = 10 이 되는 모든 x 와 y 의 값을 구하세요 x,y는 0 이상 10 이하의 정수입니다


    for(int x = 0; x <= 10; x++)
    {
        for(int y = 0; y <= 10; y++)
        {
            if(2 * x + 4 * y == 10)
            {
                printf("2 * %d + 4 * %d = %d\n", x, y, 2 * x + 4 * y);
            }
        }
    }

    return 0;
}
