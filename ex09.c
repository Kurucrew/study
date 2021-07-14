#include <stdio.h>

int main()
{
    int num1 = 0, result1;
    int num2 = 0, result2;

    result1 = num1++;
    printf("num1 : %d, result1 : %d\n", num1, result1);
    result1 = num1++ + num1++;
    printf("num1 : %d, result1 : %d\n", num1, result1);
    result1 = num1++ + num1++ + num1++;
    printf("num1 : %d, result1 : %d\n", num1, result1);


    result2 = ++num2;// (=)할당연산자를 만나면 할당연산자 오른쪽을 먼저 읽게됨
    printf("num2 : %d, result2 : %d\n", num2, result2);
    result2 = ++num2 + ++num2;
    printf("num2 : %d, result2 : %d\n", num2, result2);
    result2 = ++num2 + ++num2 + ++num2;
    printf("num2 : %d, result2 : %d\n", num2, result2);

    return 0;
}
