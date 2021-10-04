#include <iostream>

int main()
{
	int num = -10;
	bool isNegative;// 참/거짓 을 true/false 로 나타낼 수 있게 해주는 1바이트 데이터 타입
	isNegative = num < 0;

	if (isNegative == true)
	{
		num = -num;
	}
	return 0;
}