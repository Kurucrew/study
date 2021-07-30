#include <stdio.h>

int main()
{
    int *numberpointer;
    int number1 = 10;
    int number2 = 20;

    numberpointer = &number1;
    printf("%d\n", *numberpointer);

    numberpointer = &number2;
    printf("%d\n", *numberpointer);

    return 0;
}
