#include <stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE];
    int age;
    double weight;
    strcpy(name, "�� �� ��");//string copy
    age = 21;
    weight = 80.3;
    printf("%s �� ���� : %d��\n", name, age);
    printf("������ : %.2fKg\n", weight);

    return 0;
}
