#include <stdio.h>

int main()//main�Լ��� ������Ʈ�� �Ѱ��� ���簡��
{
    int radius;
    float pi;

    printf("���� �ϳ��� �Ǽ� �ϳ��� �Է��ϼ���(�� �� ���̿� ������ �ּ���)\n");
    scanf("%d %f",&radius, &pi);//�Է��� ���� ������ ���� &=�ڿ� ���� �̸��� ������ �ּҸ� �˷���
    printf("radius : %d, pi : %.2f\n", radius, pi);


    return 0;
}
