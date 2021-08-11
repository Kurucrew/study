#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    char addr[100];
};
// 구조체를 반환하는 함수
struct person getperson()
{
    struct person p;
    strcpy(p.name, "더조은");
    p.age = 20;
    strcpy(p.addr, "서울시 마포구");
    return p;
};

int main()
{
    struct person p1;
    p1 = getperson();

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("주소 : %s\n", p1.addr);

    return 0;
}
