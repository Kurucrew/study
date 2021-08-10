#include <stdio.h>
#include <string.h>

typedef struct person2
{
    char name[30];
    int age;
    int height;
    char addr[100];
} sp;

int main()
{
    sp p1;

    strcpy(p1.name, "더조은");
    p1.age = 20;
    p1.height = 187;
    strcpy(p1.addr, "서울시 서대문구");

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("  키 : %d\n", p1.height);
    printf("주소 : %s\n", p1.addr);

    return 0;
}
