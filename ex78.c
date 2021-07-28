#include <stdio.h>

int main()
{
    int gender;
    int age;
    int isStudent;

    printf("성별, 나이, 학생 여부를 입력하세요 : ");
    scanf("%d %d %d", &gender, &age, &isStudent);

    printf("안녕하세요\n");
    printf("문을 엽니다\n");

    if(gender == 2)
    {
        goto EXIT;
        return 0;
    }

    if(age < 30)
    {
        goto EXIT;
        return 0;
    }

    if(isStudent == 0)
    {
        goto EXIT;
        return 0;
    }

    EXIT:
    printf("안녕히 가세요\n");
    printf("문을 닫습니다\n");

    printf("프로그램 종료");
    return 0;
}
