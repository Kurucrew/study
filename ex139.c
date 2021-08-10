#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
    char addr[100];
};

int main()
{
    //구조체의 선언과 초기화 동시에 하기
    struct person p1 = {.name = "더조은", .age = 25, .addr = "서울시 서대문구 신촌로"};

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("주소 : %s\n", p1.addr);
    printf("\n\n");

    struct person p2 = {.name = "아카데미", .age = 27, .addr = "서울시 서대문구 신촌동"};

    printf("이름 : %s\n", p2.name);
    printf("나이 : %d\n", p2.age);
    printf("주소 : %s\n", p2.addr);
    printf("\n\n");

    return 0;
}
