#include <stdio.h>

int main()
{
    int arrnum[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

    printf("arrnum �迭�� ũ��(����) : %d\n", sizeof(arrnum));//int �� ũ�Ⱑ 4byte�̱� ������ 40�� ���´�
    printf("arrnum �迭�� ũ��(����) : %d\n", sizeof(arrnum) / sizeof(int));//���� �ش� Ÿ���� ũ�⸸ŭ ������ �־�� �迭�� ������ ���´�

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
