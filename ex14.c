#include <stdio.h>

int main()
{
    int number1= 111;
    int number2= 222;
    int cup;
    printf("number1 : %d, number2 : %d\n", number1, number2);
//swapping
    cup = number2;
    number2 = number1;
    number1 = cup;
    printf("number1 : %d, number2 : %d\n", number1, number2);

    return 0;
}
