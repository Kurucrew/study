#include <stdio.h>
#include <string.h>

//����ü structure : ���� �����ִ� �������� ��Ƽ� �Ѳ����� ���� (�����͸� �����ϴ� ����)
    struct person
    {
        char name[20];
        int age;
        char addr[100];
    };

    struct student
    {
        char name[20];
        int age;
        char addr[100];
    } std2;

int main()
{
    //����ü ���� ����
    struct person p1;
    struct person p2;

    strcpy(p1.name, "�̼���");// . : ���ٿ�����
    p1.age = 48;
    strcpy(p1.addr, "����� ������ âõ��");

    printf("--�л� 1�� ����--\n");
    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("�ּ� : %s\n", p1.addr);
    printf("\n\n");

    strcpy(p2.name, "�̽�");
    p2.age = 26;
    strcpy(p2.addr, "����� ������ âõ��");

    printf("--�л� 2�� ����--\n");
    printf("�̸� : %s\n", p2.name);
    printf("���� : %d\n", p2.age);
    printf("�ּ� : %s\n", p2.addr);
    printf("\n\n");


    strcpy(std2.name, "������");
    std2.age = 19;
    strcpy(std2.addr, "����� ������ âõ��");

    printf("--�л� 3�� ����--\n");
    printf("�̸� : %s\n", std2.name);
    printf("���� : %d\n", std2.age);
    printf("�ּ� : %s\n", std2.addr);
    printf("\n\n");



    return 0;
}
