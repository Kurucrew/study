#include <iostream>

int value = 0;//전역변수

int main()
{
	int value = 10;//지역변수
	value++;//지역변수를 참조
	::value++;//전역변수를 참조
	//전역변수와 지역변수의 이름이 같을경우 변수이름 앞에 ::를 붙여줌으로써 전역변수를 참조하는것이 가능
	return 0;
}