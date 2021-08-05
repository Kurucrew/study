#include <stdio.h>
#include <string.h> //strlen() 함수가 정의되어있는 헤더파일

int main()
{
    //문자열의 길이 구하기

    char *str1 = "Hello";
    char str2[10] = "Hello";

    printf("%d\n", strlen(str1));
    printf("%d\n", strlen(str2));

    printf("---------------------------\n");

    printf("두 문자열이 같은지 비교하기\n");

    int result = strcmp(str1, str2);// 괄호안의 두 문자열의 길이가 같으면 0을 반환, 문자열 1이 문자열 2보다 크면 1을 반환함, 문자열 1이 문자열 2보다 작으면 -1을 반환함
    printf("result : %d\n", result);

    printf("---------------------------\n");

    printf("%d\n", strcmp("aaa", "aaa"));
    printf("%d\n", strcmp("aab", "aaa"));
    printf("%d\n", strcmp("aaa", "aaA"));
    printf("%d\n", strcmp("aAa", "aaA"));

    return 0;
}
