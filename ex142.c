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
    struct person *p1 = malloc(sizeof(struct person));// ����ü�� �����Ϳ� ����

    //ȭ��ǥ �����ڷ� ����ü ����� �����ؼ� ���� �Ҵ�
    strcpy(p1 -> name,"�̼���");
    p1 -> age = 48;
    strcpy(p1 -> addr, "����� ���빮��");

    printf("�̸� : %s\n", p1 -> name);
    printf("���� : %d\n", p1 -> age);
    printf("�ּ� : %s\n", p1 -> addr);

    return 0;
}
