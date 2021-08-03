#include <stdio.h>

int main()
{
    int arrnum[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

    printf("arrnum 배열의 크기(길이) : %d\n", sizeof(arrnum));//int 의 크기가 4byte이기 때문에 40이 나온다
    printf("arrnum 배열의 크기(길이) : %d\n", sizeof(arrnum) / sizeof(int));//따라서 해당 타입의 크기만큼 나누어 주어야 배열의 갯수가 나온다

    int numbers[10];
    //int index = count - 1;
    int count = sizeof(numbers) / sizeof(int);

    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        numbers[i] = 10 + i;
        printf("numbers[%d] : %d\n", i, numbers[i]);
    }

    printf("-----------\n");

    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        numbers[i] = 20 - i;
        printf("numbers[%d] : %d\n", i, numbers[i]);
    }

    printf("-----------\n");

    for(int i = sizeof(numbers) / sizeof(int) - 1; i >= 0; i--)
    {
        numbers[i] = 10 + i;
        printf("numbers[%d] : %d\n", i, numbers[i]);
    }


    return 0;
}
