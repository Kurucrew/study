#include <stdio.h>

int main()
{
    char num1 = 28;
    int num2 = 1000000002;

    char num3 = num1 + num2;//char 보다 큰 값이 저장되지 않음 앞자리는 버려짐

    printf("char 크기(byte) : %d\n", sizeof(char));

    int num4 = num1 + num2;

    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
