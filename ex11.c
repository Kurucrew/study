#include <stdio.h>

int main()
{
    float f1, f2;
    double d1, d2;

    f1 =45.3f;//�Ǽ� �ڿ� f�� ǥ������ ������ double type���� �ν���
    printf("f1 : %f\n", f1);

    d1 =45.3;
    printf("d1 : %f\n", d1);

    int n1 = f1;//����ȯ casting : type�� ��ȯ�ϴ� ��
    printf("n1 : %d\n", n1);

    /*
    f1 : 45.299999 ���е��� ���̶����� ��ġ�� �ٸ��� ǥ�� float�� �ٻ�ġ�� ǥ��
    d1 : 45.300000
    n1 : 45
    */

    printf("3.14 �� ũ�� (byte) : %d\n", sizeof(3.14));
    printf("3.14F �� ũ�� (byte) : %d\n", sizeof(3.14F));

    printf("double : %d byte\n", sizeof(double));
    printf("float : %d byte\n", sizeof(float));

    f2 = 3.141592;//f2 �������� 3.141592F �� �����
    printf("f2 : %f\n", f2);

    int n3 = 6.25;//int type�� ���� - 0�� ����� ���ԵǱ� ������ ����� 2�� 31�� -1 �̰� ������ 2�� 31�� �̴�
    printf("n3 : %d\n", n3);

    int n4 = 2147483648;//��������� �ִ�ġ�� �Ѿ��⶧���� �ּҰ����� overflow �ϰԵȴ� garbage:�ǵ����� ���� ��
    printf("n4 : %d\n", n4);

    int n5 = 2147483647;
    printf("n5 : %d\n", n5);

    long long n6 = 2147483648;//llu : long�� ���Ĺ���
    printf("n6 : %llu\n", n6);

    return 0;
}
