#include <stdio.h>

int main()
{
    int sum;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0 && i % 3 != 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    sum = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0 || i % 3 != 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    sum = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(!(i % 2 != 0 && i % 3 != 0))//맨 앞에 부정 연선자를 사용하면 조건식 전부가 반대가 된다 (i % 2 == 0 || i % 3 == 0)
        {
            sum += i;
            printf("num : %d\n", i);
        }
    }
    printf("%d\n", sum);

    return 0;
}
