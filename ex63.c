#include <stdio.h>

int main()
{
    int sum = 0;
    int i;// ������ �����ϰ� ���ʷ� ���� �����ϴ°��� �ʱ�ȭ�� �θ�
    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("1���� %d������ ���� %d�Դϴ�\n", i - 1, sum);

    /*
    int sum = 0;
    for(int i = 1; i <= 10; i++) for���� ���۵ɶ� int i�� ����ǰ� for���� ������ int i �� �������
    {
        sum += i;
    }
    printf("1���� %d������ ���� %d�Դϴ�\n", i - 1, sum); int i �� ������� ������ ������ �߻��Ѵ�
    */

    return 0;
}
