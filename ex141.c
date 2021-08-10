#include <stdio.h>
#include <string.h>

//이름이 없는 구조체
typedef struct
{
    char name[30];
    int age;
    char addr[100];
}person;

int main()
{
    person p1 = {.name= "더조은", .age = 23, .addr = "서울"};

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("주소 : %s\n", p1.addr);

    return 0;
}
