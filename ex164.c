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
    printf("�̸� : %s\n", p.name);
    printf("���� : %d\n", p.age);
    printf("�ּ� : %s\n", p.addr);
}

void setperson(struct person *p)
{
    strcpy(p->name, "������2");
    p->age = 20;
    strcpy(p->addr, "����� ����2");
}

int main()
{
    struct person p1;
    struct person p2;

    strcpy(p1.name, "������");
    p1.age = 20;
    strcpy(p1.addr, "����� ����");

    dp(p1);
    printf("----------------------\n");

    dp((struct person){"������", 30, "��õ"});
    printf("----------------------\n");

    dp((struct person){.addr = "������", .age = 30, .name = "��õ"});
    printf("----------------------\n");

    setperson(&p2);
    dp(p2);

    return 0;
}
