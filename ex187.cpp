#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int *pointer;

    pointer = &a;

    cout << "a�� ����� �� : " << a << endl;
    cout << "a�� �ּ� �� : " << &a << endl;

    cout << "-----------------------------" << endl;

    cout << "a�� ����� �� : " << *pointer << endl;
    cout << "a�� �ּ� �� : " << pointer << endl;

    return 0;
}

