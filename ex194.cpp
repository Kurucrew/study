#include <iostream>

using namespace std;

int main()
{
    int *pointer, i = 100;

    pointer = &i;

    cout << "pointer : " << pointer << ", pointer + 1 : " << pointer + 1 << endl;
    cout << "---------------------" << endl;

    int a = 100;
    int &ra = a;

    cout << "a : " << a << endl;
    cout << "ra : " << ra << endl;
    cout << "---------------------" << endl;

    ra = 200;

    cout << "a : " << a << endl;
    cout << "ra : " << ra << endl;
    cout << "---------------------" << endl;

    return 0;
}

