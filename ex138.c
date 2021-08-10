#include <stdio.h>
#include <string.h>

//구조체 structure : 서로 관계있는 변수들을 모아서 한꺼번에 관리 (데이터를 관리하는 설명서)
    struct person
    {
        char name[20];
        int age;
        char addr[100];
    };

    struct student
    {
        char name[20];
        int age;
        char addr[100];
    } std2;

int main()
{
    //구조체 변수 선언
    struct person p1;
    struct person p2;

    strcpy(p1.name, "이순신");// . : 접근연산자
    p1.age = 48;
    strcpy(p1.addr, "서울시 마포구 창천동");

    printf("--학생 1의 정보--\n");
    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("주소 : %s\n", p1.addr);
    printf("\n\n");

    strcpy(p2.name, "이신");
    p2.age = 26;
    strcpy(p2.addr, "서울시 마포구 창천동");

    printf("--학생 2의 정보--\n");
    printf("이름 : %s\n", p2.name);
    printf("나이 : %d\n", p2.age);
    printf("주소 : %s\n", p2.addr);
    printf("\n\n");


    strcpy(std2.name, "유관순");
    std2.age = 19;
    strcpy(std2.addr, "서울시 마포구 창천동");

    printf("--학생 3의 정보--\n");
    printf("이름 : %s\n", std2.name);
    printf("나이 : %d\n", std2.age);
    printf("주소 : %s\n", std2.addr);
    printf("\n\n");



    return 0;
}
