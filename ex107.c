#include <stdio.h>
#include <stdlib.h>

int main()
{
    //null 값을 저장
    int *numberpointer = NULL;

    printf("numberpointer : %p\n", numberpointer);

    int *ptr = NULL;

    if(ptr == NULL)
    {
        ptr = malloc(1024);
    }



    return 0;
}
