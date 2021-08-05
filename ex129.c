#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "hello";
    char str2[10];

    strcpy(str2, str1);//괄호앞의 변수에 괄호 뒤의 변수에 저장된 데이터를 저장함

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    printf("---------------------\n");

    char *str3 = "tjoeun";
    //char *str4 = "";// 빈 문자열 이라고 하더라도 문자열이 저장되어있기 때문에 새로운 문자열을 저장하지 못함 char *str4; 일 경우에는 저장된 문자열이 없기때문에 저장가능

    //strcpy(str4, str3);

    printf("str3 : %s\n", str3);
    //printf("str4 : %s\n", str4);
    printf("---------------------\n");

    char *str5 = "tjoeun";
    char *str6 = malloc(sizeof(char)*10);

    strcpy(str6, str5);

    printf("str5 : %s\n", str5);
    printf("str6 : %s\n", str6);

    free(str6);
    printf("---------------------\n");

    char str7[10] = "academy";
    char str8[20] = "tjoeun ";

    strcat(str8, str7);//괄호앞의 변수에 괄호 뒤의 변수의 데이터를 합친다

    printf("str8 : %s\n", str8);
    printf("---------------------\n");
    /*
    char *str9 = "academy";
    char *str10 = "tjoeun";

    strcat(str10, str9);

    printf("str10 : %s\n", str10);
    printf("---------------------\n");
    */

    char *str11 = "academy";
    char *str12 = malloc(sizeof(char)*10);

    strcpy(str12, "tjoeun ");
    strcat(str12, str11);

    printf("str12 : %s\n", str12);

    free(str12);
    printf("---------------------\n");

    return 0;
}
