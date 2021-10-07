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
	double &cx = cirl.center.x;//아래와 같이 변수이름이 긴 변수를 반복적으로 사용해야 할 경우 레퍼런스:(자료형 &변수이름=저장할 변수이름) 를 이용하여 간결하게 사용 가능 레퍼런스는 변수에 새로운 이름을 붙이는 개념이기 때문에 기존 변수를 초기화 해줘야 한다
	cirl.center.x = 3;
	cx = 2;

	return 0;
}