#include <stdio.h>
#include <stdlib.h>
//�迭�� �Ű������� ����ϱ�
void printA(int arr[], int count)
{
    for(int i = 0; i < count; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    printf("\n");
}

int main()
{
    int arrN[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printA(arrN, 10);

    return 0;
}
