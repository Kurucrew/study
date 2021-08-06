#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = "654";
    int number;

    number = atoi(s1);// atoi(문자열의 주소값) : ascii string to int (문자열을 int값으로 바꿈) 문자열을 성공적으로 바꾼 경우 해당 숫자를 반환, 바꾸지 못한 경우 0을 반환함
    //stdlib.h 에 정의되어 있음

    printf("number : %d\n", number);
    printf("------------------------\n");

    //16진수로 된 문자열을 정수로 바꾸기
    char *s2 = "0xaf10";//16진수는 앞에 0x를 붙여준다
    int number2;

    number2 = strtol(s2, NULL, 16);// strtol(변수, 나머지 값을 저장할 공간, 변수가 해당하는 진수)

    printf("16진수 : %x, 10진수 : %d\n", number2, number2);//%x 16진수의 서식문자
    printf("------------------------\n");

    char *s3 = "0xad10 42 0x27c 9952";
    int num1;
    int num2;
    int num3;
    int num4;

    char *end;// 이전 숫자의 끝부분을 저장하기 위한 포인터

    num1 = strtol(s3, &end, 16);
    num2 = strtol(end, &end, 10);
    num3 = strtol(end, &end, 16);
    num4 = strtol(end, NULL, 10);

    printf("num1 : %x\n", num1);
    printf("num2 : %d\n", num2);
    printf("num3 : %x\n", num3);
    printf("num4 : %d\n", num4);
    printf("------------------------\n");

    char *s4 = "23.568984";
    float fnumber;

    fnumber = atof(s4);// atof : ascii string to float

    printf("fnumber : %f\n", fnumber);
    printf("------------------------\n");

    char *s5 = "3.e5";
    float fnumber2;

    fnumber2 = atof(s5);

    printf("지수표현 : %e, 실수표현 : %f\n", fnumber2, fnumber2);

    return 0;
}
