#include <stdio.h>

int main()//증감연산자
{
    int value1;

    value1 = 11;
    value1++;
    printf("value1 : %d\n", value1);
    ++value1;
    printf("value1 : %d\n", value1);

    printf("전위 증가 연산자 : %d\n", ++value1);//변수가 할당이후 출력 할당도 연산으로 취급 ++가 앞에있을경우 증가이후 할당 뒤에있을경우 할당 후 증가
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("전위 증가 연산자 : %d\n", ++value1);
    printf("value1 : %d\n", value1);

    printf("----------------------------------\n");
    printf("전위 감소 연산자 : %d\n", --value1);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("전위 감소 연산자 : %d\n", --value1);
    printf("value1 : %d\n", value1);

    return 0;
}
