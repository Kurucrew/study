#include <iostream>

using namespace std;

class Point
{
public:
	void SetPosition(int _x, int _y);
	void Move(int _x, int _y);
	void Show();
private:
	int x, y;
};

void Point::SetPosition(int _x, int _y)
{
	x = _x;
	y = _y;
}
void Point::Move(int _x, int _y)
{
	x += _x;
	y += _y;
}
void Point::Show()
{
	cout << "(" << x << "," << y << ")" << endl;
}

int main()
{
	Point p1, p2;
	p1.SetPosition(10, 20);
	p2.SetPosition(50, 60);

	p1.Move(5, 0);
	p2.Move(0, 5);

	p1.Show();
	p2.Show();
}