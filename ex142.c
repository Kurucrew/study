#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    char addr[100];
};

int main()
{
    struct person *p1 = malloc(sizeof(struct person));// 구조체를 포인터에 지정

    //화살표 연산자로 구조체 멤버에 접근해서 값을 할당
    strcpy(p1 -> name,"이순신");
    p1 -> age = 48;
    strcpy(p1 -> addr, "서울시 서대문구");

    printf("이름 : %s\n", p1 -> name);
    printf("나이 : %d\n", p1 -> age);
    printf("주소 : %s\n", p1 -> addr);

    return 0;
}
