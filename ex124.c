#include <stdio.h>

int main()
{
    char str1[10] = "tjoeun";

    char *str2 = "academy";

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);

    str1[0] = 'i';//배열로 만든 문자열은 포인터로 만든 문자열과는 다르게 각각의 단어를 변경 가능
    //str1 = "aaaa"; 대신 문자열 전체를 한번에 바꾸지는 못함

    printf("str1 : %s\n", str1);

    printf("----------------------\n");

    char str3[10];

    printf("문자열을 입력하세요 : ");
    scanf("%s", str3);// 배열변수 자체가 주소를 저장하는 변수이기 때문에 주소연산자 & 를 붙이지 않아도 된다
    fflush(stdin);

    printf("str3 : %s\n", str3);

    printf("----------------------\n");
    printf("----공백이 있는 문자열 입력 받기----\n");

    char str4[10];

    printf("문자열을 입력하세요 : ");
    scanf("%[^\n]s", str4);// [^\n]은 공백을 포함해서 입력하라는 의미

    printf("입력하신 문자열은 '%s'입니다\n", str4);

    return 0;
}
