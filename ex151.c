#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
    char addr[100];
};
// ����ü�� ��ȯ�ϴ� �Լ�
struct person getperson()
{
    struct person p;
    strcpy(p.name, "������");
    p.age = 20;
    strcpy(p.addr, "����� ������");
    return p;
};

int main()
{
    struct person p1;
    p1 = getperson();

    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("�ּ� : %s\n", p1.addr);

    return 0;
}
