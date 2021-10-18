#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
	int i, sum = 0;

	for (i = 0; i < 10000000; i++)
	{
		sum = add(i, sum);
	}
	cout << "sum = " << sum << endl;
	return 0;
}

inline int add(int a, int b)
{
	return a + b;
}