#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
    char addr[100];
};

int main()
{
    //����ü�� ����� �ʱ�ȭ ���ÿ� �ϱ�
    struct person p1 = {.name = "������", .age = 25, .addr = "����� ���빮�� ���̷�"};

    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("�ּ� : %s\n", p1.addr);
    printf("\n\n");

    struct person p2 = {.name = "��ī����", .age = 27, .addr = "����� ���빮�� ���̵�"};

    printf("�̸� : %s\n", p2.name);
    printf("���� : %d\n", p2.age);
    printf("�ּ� : %s\n", p2.addr);
    printf("\n\n");

    return 0;
}
