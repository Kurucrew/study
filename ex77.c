#include <stdio.h>

int main()
{
    int gender;
    int age;
    int isStudent;

    printf("����, ����, �л� ���θ� �Է��ϼ��� : ");
    scanf("%d %d %d", &gender, &age, &isStudent);

    printf("�ȳ��ϼ���\n");
    printf("���� ���ϴ�\n");

    if(gender == 2)
    {
        printf("�ȳ��� ������\n");
        printf("���� �ݽ��ϴ�\n");
        return 0;
    }

    if(age < 30)
    {
        printf("�ȳ��� ������\n");
        printf("���� �ݽ��ϴ�\n");
        return 0;
    }

    if(isStudent == 0)
    {
        printf("�ȳ��� ������\n");
        printf("���� �ݽ��ϴ�\n");
        return 0;
    }

    printf("���α׷� ����");
    return 0;
}
