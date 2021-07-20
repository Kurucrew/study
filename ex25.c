#include <stdio.h>

int main()
{
    char c1 = 'a';// c1에 저장된 data는 char type 이나 char type 보다 큰 자료형에 저장 할 수 있음 (char, short, int, long, long long), usigned : 음수를 표현하지 않고 그 공간을 양수에 할당
    int num2 = c1;

    printf("%c\n", num2);

    return 0;
}
