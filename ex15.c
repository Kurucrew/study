#include <stdio.h>
#define SIZE 20
int main()
{
    char name[SIZE];
    int age;
    double weight;
    strcpy(name, "더 조 은");//string copy
    age = 21;
    weight = 80.3;
    printf("%s 의 나이 : %d살\n", name, age);
    printf("몸무게 : %.2fKg\n", weight);

    return 0;
}
