#include <stdio.h>

int main()
{
    //2x + 4y = 10 �� �Ǵ� ��� x �� y �� ���� ���ϼ��� x,y�� 0 �̻� 10 ������ �����Դϴ�


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
