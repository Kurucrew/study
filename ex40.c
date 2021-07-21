#include <stdio.h>

int main()
{

    if(0)
    {
        printf("참입니다\n");
    }
    else
    {
        printf("거짓입니다\n");
    }
    printf("-----------------------\n");

    printf("%d\n", 1 && 1);
    printf("%d\n", 1 && 0);
    printf("%d\n", 0 && 1);
    printf("%d\n", 0 && 0);
    printf("-----------------------\n");

    printf("%d\n", 1 || 1);
    printf("%d\n", 1 || 0);
    printf("%d\n", 0 || 1);
    printf("%d\n", 0 || 0);
    printf("-----------------------\n");

    printf("%d\n",!1);
    printf("%d\n",!0);
    printf("%d\n",!43);
    printf("%d\n",!-98);


    return 0;
}
