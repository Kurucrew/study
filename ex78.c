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
        goto EXIT;
        return 0;
    }

    if(age < 30)
    {
        goto EXIT;
        return 0;
    }

    if(isStudent == 0)
    {
        goto EXIT;
        return 0;
    }

    EXIT:
    printf("�ȳ��� ������\n");
    printf("���� �ݽ��ϴ�\n");

    printf("���α׷� ����");
    return 0;
}
