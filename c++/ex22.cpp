#include <iostream>

using namespace std;

class Counter
{
public:
	void Reset();//Ŭ������ ��������� ������������ ������������ �����Ǿ����� �ʰ� �����ϴ� ��Ŀ� ���� �������� �Ǵ� ���������� �� �� �ִ�
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