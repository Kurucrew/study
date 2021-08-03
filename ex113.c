#include <stdio.h>

int main()
{
    //정수를 2진수로 표현하기
    int decimal = 13;
    int binary[20] = {0,};

    int index = 0;

    while(1)
    {
        binary[index] = decimal % 2;
        decimal = decimal / 2;

        index++;

        if(decimal == 0)
        {
            break;
        }
    }

    for(int i = index - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);
    }

    printf("\n");

    return 0;
}
