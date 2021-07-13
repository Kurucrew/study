//주석 : memo - 한 줄 주석
/*
여러
줄
주석
*/
// printf("출력할 내용");
#include <stdio.h>

void main()// 중괄호=영역 scope void 리턴값 불필요
{
    printf("Hello C language");
    printf("안녕하세요\n");
    printf("구교진 : 더 조 은 \n");
    printf("\n12345678901234567890\n");

    //산술 연산자 +, -, *, /, %
    printf("10 + 8 = %d\n", 10+8);
    printf("10 - 8 = %d\n", 10-8);
    printf("10 * 8 = %d\n", 10*8);
    printf("10 / 8 = %d\n", 10/8);//나누기는 정수값만 출력
    printf("10 %% 8 = %d\n", 10%8);//%=10을 8로 나눈 후의 몫

}
