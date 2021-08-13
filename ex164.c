#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
    char addr[100];
};

void dp(struct person p)
{
    printf("이름 : %s\n", p.name);
    printf("나이 : %d\n", p.age);
    printf("주소 : %s\n", p.addr);
}

void setperson(struct person *p)
{
    strcpy(p->name, "더조은2");
    p->age = 20;
    strcpy(p->addr, "서울시 신촌2");
}

int main()
{
    struct person p1;
    struct person p2;

    strcpy(p1.name, "더조은");
    p1.age = 20;
    strcpy(p1.addr, "서울시 신촌");

    dp(p1);
    printf("----------------------\n");

    dp((struct person){"더조은", 30, "인천"});
    printf("----------------------\n");

    dp((struct person){.addr = "더조은", .age = 30, .name = "인천"});
    printf("----------------------\n");

    setperson(&p2);
    dp(p2);

    return 0;
}
