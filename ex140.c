#include <stdio.h>
#include <string.h>

typedef struct person2
{
    char name[30];
    int age;
    int height;
    char addr[100];
} sp;

int main()
{
    sp p1;

    strcpy(p1.name, "������");
    p1.age = 20;
    p1.height = 187;
    strcpy(p1.addr, "����� ���빮��");

    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("  Ű : %d\n", p1.height);
    printf("�ּ� : %s\n", p1.addr);

    return 0;
}
