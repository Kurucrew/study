#include <iostream>

struct Point
{
	double x, y;
};

struct Circle
{
	struct Point center;
	double radius;
};

int main()
{
	struct Circle cirl;
	double &cx = cirl.center.x;//�Ʒ��� ���� �����̸��� �� ������ �ݺ������� ����ؾ� �� ��� ���۷���:(�ڷ��� &�����̸�=������ �����̸�) �� �̿��Ͽ� �����ϰ� ��� ���� ���۷����� ������ ���ο� �̸��� ���̴� �����̱� ������ ���� ������ �ʱ�ȭ ����� �Ѵ�
	cirl.center.x = 3;
	cx = 2;

	return 0;
}