#include <stdio.h>
#include <stdlib.h>

void helloS(char *s1)
{
    printf("hello, %s\n", s1);
};

void helloS2(char s1[])
{
    printf("hello, %s\n", s1);
};

int main()
{
    helloS("C¾ð¾î");
    printf("-------------------\n");

    char s2[10] = "C++";
    helloS2(s2);
    helloS2("algorism");

    return 0;
}
