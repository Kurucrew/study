#include <stdio.h>

int main()
{
    int scores[7] = {79, 88, 91, 33, 100, 55, 95};
    //�ְ� ����, ���� ���� ���ϱ�
    int max, min;
    //scores �迭���� ��Ҹ� �̾Ƽ� max ������ �Ҵ�� ���� ���ؼ� scores���� ũ�� max�� �Ҵ� �ּҴ� �ݴ�� ����

    for(int i = 0; i < sizeof(scores) / sizeof(int); i++)
    {
        if(i == 0)
        {
            max = min = scores[i];
        }
        else
        {
            if(max < scores[i])
            {
            max = scores[i];
            }
            else if(min > scores[i])
            {
            min = scores[i];
            }
        }
    }

    printf("max : %d\n", max);
    printf("min : %d\n", min);

    return 0;
}
