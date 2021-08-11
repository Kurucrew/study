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

    strcpy(p1 -> name, "더조은");
    p1 -> age = 22;
    strcpy(p1 -> addr, "서울시 용산구");

    printf("이름 : %s\n", p1 -> name);
    printf("나이 : %d\n", p1 -> age);
    printf("주소 : %s\n", p1 -> addr);

    free(p1);

    return 0;
}
