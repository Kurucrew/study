#include <stdio.h>
#include <string.h>

//�̸��� ���� ����ü
typedef struct
{
    char name[30];
    int age;
    char addr[100];
}person;

int main()
{
    person p1 = {.name= "������", .age = 23, .addr = "����"};

    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("�ּ� : %s\n", p1.addr);

    return 0;
}
