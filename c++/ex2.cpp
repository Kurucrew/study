#include <iostream>

int main()
{
	int num = -10;
	bool isNegative;// ��/���� �� true/false �� ��Ÿ�� �� �ְ� ���ִ� 1����Ʈ ������ Ÿ��
	isNegative = num < 0;

	if (isNegative == true)
	{
		num = -num;
	}
	return 0;
}