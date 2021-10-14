#include <iostream>

int add(int a,int b);
double add(double a, double b);
using namespace std;

int main()
{
	int i1 = 10, i2 = 20;
	double d1 = 0.1, d2 = 0.2;

	cout << "i1 + i2 = " << add(i1, i2) << endl;
	cout << "d1 + d2 = " << add(d1, d2) << endl;
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}