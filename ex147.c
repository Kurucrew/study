#include <stdio.h>

void hello();// 함수를  main 뒤에 배치하려면 main 앞부분에 선언을 해주어야 c에서 인식을 한다

int main()
{
    hello();

    return 0;
}

void hello()
{
    printf("hello, world\n");
}
