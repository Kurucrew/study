#include <stdio.h>
#define SIZE 9
//기호화 상수
//const int SIZE = 9;
int main()
{
    char name[SIZE] = "더 조 은";//배열 : 변수를 붙여놓은것
    printf("name : %s\n", name);// %u :unsinged (decimal) integer 부호없는 십진수 정수
    printf("&name[0] : %s\n", &name[0]);
    printf("\t주소 : \n\t name== &name[0]\n");
    printf("name : %u\t",name);
    printf("&name[0] : %u\n", &name[0]);

    return 0;
}
/*
char name[9] :
name : 배열의 이름 (배열명) == 배열의 시작주소 == &name[0]
9 : 배열의 크기 == 배열 요소의 개수
name[0] ~ name[8] 의 공간이 연속으로 이어져 있음
%s : (저장된 모든 문자)==(문자열) 출력 - 마지막 '\0'(null) 전까지의 모든 문자 출력
%u : 배열의 주소를 출력
*/
