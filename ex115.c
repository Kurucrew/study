#include <stdio.h>

int main()
{
    int size;

    printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
    scanf("%d", &size);

    int *npointer = malloc(sizeof(int) * size);// (int Ÿ���� ũ�� * �Է¹��� ��) ��ŭ �����޸� �Ҵ�

    for(int i = 0; i < size; i++)// �Է¹��� ũ�� ��ŭ �ݺ�
    {
        npointer[i] = i + 1;// �ε����� �����ؼ� ���� �Ҵ�
    }

    for(int i = 0; i < size; i++)
    {
        printf("npointer[%d] : %d\n", i, npointer[i]);// �ε����� �����ؼ� ���� ���
    }

    free(npointer);//�Լ��� ȣ���ؼ� �Ҵ��� �޸𸮸� ����

    return 0;
}
