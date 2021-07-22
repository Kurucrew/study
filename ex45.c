#include <stdio.h>

int main()
{
    int num = 20;

    printf("%d\n", num >> 1);
    printf("%d\n", num >> 2);
    printf("%d\n", num >> 3);

    printf("%d\n", num << 1);
    printf("%d\n", num << 2);
    printf("%d\n", num << 3);//어떤 변수 공간에 변수를 할당된 값을 변경할 때는 할당 연산자를 사용해야 한다 그렇지 않았기 때문에 위 코드의 결과는 전부 20이라는변수를 계속 받아와서 연산했다 예외로 증감연산자는 할당연산자 없이도 변수를 변경가능하다


    printf("num : %d\n", num);

    num <<= 1;
    //num = num << 1;

    printf("num : %d\n", num);


    return 0;
}
