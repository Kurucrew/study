#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //문자열 자르기
    //token 단위로 자름
    //strtok(대상 문자열, 기준문자)

    char s1[30] = "tjoeun it academy";

    char *pointer1 = strtok(s1, " ");

    while(pointer1 != NULL)
    {
        printf("pointer1 : %s\n", pointer1);
        pointer1 = strtok(NULL, " ");// null 을 입력하면 strtok에서 자른 문자 다음문자로 이동
    }
    printf("---------------------------\n");

    //char *s1 = "tjoeun it academy"; 포인터로 선언하면 코드가 작동하지 않음
    char *s2 = malloc(sizeof(char)*30);// malloc을 이용하면 가능

    strcpy(s2, "tjoeun it academy");

    char *pointer2 = strtok(s2, " ");

    while(pointer2 != NULL)
    {
        printf("pointer2 : %s\n", pointer2);
        pointer2 = strtok(NULL, " ");
    }
    free(s2);
    printf("---------------------------\n");

    //날짜와 시간 값 자르기
    char s3[30] = "2021-08-05T20:51:22";

    char *pointer3 = strtok(s3, "-T:");// 기준문자는 여러개를 한번에 사용 가능

    while(pointer3 != NULL)
    {
        printf("pointer3 : %s\n", pointer3);
        pointer3 = strtok(NULL, "-T:");
    }
    printf("---------------------------\n");

    char s4[30] = "tjoeun it academy";

    char *pointarr[10] = {NULL,};// 포인터 배열 : 포인터 들을 저장하는 배열

    int i = 0;

    char *pointer4 = strtok(s4, " ");

    while(pointer4 != NULL)
    {
        pointarr[i] = pointer4;
        i++;
        pointer4 = strtok(NULL, " ");
    }

    for(int j = 0; j < 10; j++)
    {
        if(pointarr[j] != NULL);
        {
            printf("pointarr[%d] : %s\n", j, pointarr[j]);
        }
    }

    return 0;
}
