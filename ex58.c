#include <stdio.h>

int main()
{
    //switch 문에서는 정수 자료형만 사용할 수 있음 실수 자료형(float, double)은 사용할 수 없음 char type도 정수형 자료형으로 인식함
    char c1;

    printf("정수를 입력하세요 : ");
    scanf("%c", &c1);

    switch(c1)
    {
    case 'a':
        printf("a 입니다\n");
        break;
    case 'b':
        printf("b 입니다\n");
        break;
    case 'c':
        printf("c 입니다\n");
        break;
    default:
        printf("a, b, c 중에 없습니다\n");
        break;
    }

    printf("프로그램 종료");


    return 0;
}
