#include <stdio.h>
#include <stdlib.h>

int main()
{
    //malloc -> memory allocate : �޸� �Ҵ��ϴ� �Լ� (���� �޸� �Ҵ� ������) ���α׷��� �۵��ϴ� ���ȿ� �޸𸮸� �Ҵ�
    //free : �Ҵ�� �޸𸮸� �ݳ��ϴ� �Լ�
    int num1 = 20;
    int *nump1;

    nump1 = &num1;

    int *nump2;

    nump2 = malloc(sizeof(int));// intŸ���� ũ�⸸�� �޸� ������ �Ҵ��ؼ� �� �ּҸ� �����Ϳ� ����

    printf("nump1 : %u\n", nump1);
    printf("nump2 : %u\n", nump2);

    free(nump2);

    return 0;
}
