#include <iostream>
//c에서는 함수이름만을 보고 함수를 찾기 때문에 함수이름이 같을 수 없다 c++에서는 함수이름과 매개변수의 타입을 보고 함수를 찾기 때문에 매개변수의 개수나 타입이 다르면 같은이름의 함수가 여러개 있을 수 있다

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}
//같은 이름으로 함수를 만드는것을 오버로딩 이라고 한다 위와같이 비슷한 기능을 하되 넘겨받는 인자가 다를경우 오버로딩을 하는것이 바람직하다