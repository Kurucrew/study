#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person
{
    char name[20];
    int age;
    char addr[100];
}per;

int main()
{
    per *p1 = malloc(sizeof(per));

    strcpy(p1 -> name, "������");
    p1 -> age = 22;
    strcpy(p1 -> addr, "����� ��걸");

    printf("�̸� : %s\n", p1 -> name);
    printf("���� : %d\n", p1 -> age);
    printf("�ּ� : %s\n", p1 -> addr);

    free(p1);

    return 0;
}
