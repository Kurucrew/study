#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool b1 = true;
    bool b2 = false;

    printf(b1 ? "true" : "false");
    printf("\n");
    printf(b2 ? "true" : "false");
    printf("\n");

    printf("%s\n", b1 ? "true" : "flase");
    printf("%s\n", b2 ? "true" : "flase");

    bool b3 = true;

    if(b3 == true)
    {
        printf("���Դϴ�\n");
    }
    else
    {
        printf("�����Դϴ�\n");
    }

    printf("bool type �� ũ�� : %d\n", sizeof(bool));
    printf("int type �� ũ�� : %d\n", sizeof(int));
    printf("--------------------\n");

    bool b4 = true;
    bool b5 = false;

    printf("%d\n", b4 && b4);
    printf("%d\n", b4 && b5);
    printf("%d\n", b5 && b4);
    printf("%d\n", b5 && b5);
    printf("------------------\n");
    printf("%d\n", b4 || b4);
    printf("%d\n", b4 || b5);
    printf("%d\n", b5 || b4);
    printf("%d\n", b5 || b5);

    return 0;
}
