#include <stdio.h>
#include <stdlib.h>

int *adr()
{
    int *intp = malloc(sizeof(int));//�Լ��� ����Ǹ� �Լ��� �Ҵ�� ������ ������⶧���� malloc���� ���� ������ �־�� ���������� ���� ��ȯ�� �� �ִ�
    *intp = 123;
    return intp;
}

int main()
{
    int *iP;
    iP = adr();
    printf("iP : %p\n", iP);
    printf("*iP : %d\n", *iP);
    free(iP);
    return 0;
}
