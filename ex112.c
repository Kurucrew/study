#include <stdio.h>

int main()
{
    int scores[5] = {98, 86, 90, 72, 88};

    //�迭������ ���� ������ �����ϴ� ���� �ƴ϶� ���� ���� ����� ���� �ּҸ� �����ϴ°�

    int *scorespointer = scores;

    printf("scores : %p\n", scores);// �迭������ �������� �����̱� ������ &�� ������ �ʾƵ� �ȴ�
    printf("scorespointer : %p\n", scorespointer);
    printf("*scorespointer : %d\n", *scorespointer);
    printf("*scores : %d\n", *scores);

    printf("size scorespointer : %d\n", sizeof(scorespointer));
    printf("size scores : %d\n", sizeof(scores));

    return 0;
}
