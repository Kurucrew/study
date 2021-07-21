#include <stdio.h>

int main()
{
    int num1 = 5;

    printf("num1 : %d\n", num1);
    printf("%d\n", num1 << 1);// num1의 비트를 왼쪽으로 하나씩 옮김 0 1 0 1 -> 1 0 1 0 해당 변수에 2의n제곱 한 수를 곱한 결과를 반환
    printf("%d\n", num1 << 2);
    printf("%d\n", num1 << 3);

    return 0;
}
