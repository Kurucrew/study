#include <stdio.h>
#include <stdlib.h>//malloc, free
#include <string.h>//memset

int main()
{
    long long *nump = malloc(sizeof(long long));

    memset(nump, 0x27, 8);// 0x ���� ���ڸ� 16������ �ν� // nump �ּ����� 8����Ʈ ũ�⸸ŭ ������ Ȯ���ؼ� 0x27���� ����

    printf("0x%11x\n", *nump);//0x%~~x 16������ ����ϴ� ����

    free(nump);

    return 0;
}
