#include <stdio.h>

int main()
{
    int num = 20;

    printf("%d\n", num >> 1);
    printf("%d\n", num >> 2);
    printf("%d\n", num >> 3);

    printf("%d\n", num << 1);
    printf("%d\n", num << 2);
    printf("%d\n", num << 3);//� ���� ������ ������ �Ҵ�� ���� ������ ���� �Ҵ� �����ڸ� ����ؾ� �Ѵ� �׷��� �ʾұ� ������ �� �ڵ��� ����� ���� 20�̶�º����� ��� �޾ƿͼ� �����ߴ� ���ܷ� ���������ڴ� �Ҵ翬���� ���̵� ������ ���氡���ϴ�


    printf("num : %d\n", num);

    num <<= 1;
    //num = num << 1;

    printf("num : %d\n", num);


    return 0;
}
