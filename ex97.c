#include <stdio.h>

int main()
{
    //������ �������� �޸��� �ּҰ� ����Ǿ� ���� �޸� �ּҰ� �ִ� ������ �̵��ؼ� �� ������ �Ҵ�Ǿ� �ִ� �����͸� �������� ���� �� ����ϴ� ������(������ ������)
    //���� : reference <--> ������ : dereference

    int *pointnumber;
    int number = 11;

    pointnumber = &number;
    printf("number�� �ּҰ� : %u\n", pointnumber);

    printf("1 %d\n", *pointnumber); // ������ ������ ������ �� ������ �ּҸ� �Ҵ��ϰ� *�����̸� �� �ۼ��ϰ� �Ǹ� �Ҵ�� �ּ��� ������ ����ϰڴٴ� �ǹ�

    *pointnumber = 22;
    printf("2 %d\n", *pointnumber);
    printf("3 %d\n", number);

    return 0;
}
