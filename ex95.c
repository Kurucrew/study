#include <stdio.h>

int main()
{
    int num = 10;

    printf("number 변수에 할당된 값 출력하기\n");
    printf("number : %d\n", num);
    printf("number 변수의 주소 출력하기\n");
    printf("number : %p\n", &num);// p 는 주소연산자의 서식

    printf("C언어에서 메모리 주소는 포인터 변수에 저장함\n");
    printf("포인터 변수는 * 를 사용해서 선언함\n");
    printf("포인터 변수는 줄임말로 포인터라고도 함\n");
    printf("\n자료형 *포인터 이름;\n");
    printf("포인터 = &변수\n\n");

    int *numberpointer;//포인터 변수 선언
    int number = 11;//변수 선언
    numberpointer = &number; //number라는 변수의 주소를 할당함

    printf("number : %d\n", number);
    printf("number(주소) : %p\n", numberpointer);
    printf("number(주소) : %p\n", &number);


    return 0;
}
