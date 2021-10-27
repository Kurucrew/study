#include <iostream>

using namespace std;

class Counter
{
public:
	void Reset();//클래스의 멤버변수는 전역변수인지 지역변수인지 지정되어있지 않고 선언하는 방식에 따라 전역변수 또는 지역변수가 될 수 있다
	void Click();
	int GetCount();
private:
	int count;
};

void Counter::Reset()
{
	count = 0;
}
void Counter::Click()
{
	count++;
}
int Counter::GetCount()
{
	return count;
}

int main()
{
	Counter ct;
	ct.Reset();
	ct.Click();
	ct.Click();
	cout << ct.GetCount();
	cout << endl;
}