#include <stdio.h>

int main()
{
    int size;

    printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
    scanf("%d", &size);

    int arrnum[size];

    printf("size arrnum : %d\n", sizeof(arrnum));
    printf("arrnum �迭�� ����� ���� : %d\n", sizeof(arrnum) / sizeof(int));

    return 0;
}
