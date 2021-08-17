#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int *pointer;

    pointer = &a;

    cout << "a에 저장된 값 : " << a << endl;
    cout << "a의 주소 값 : " << &a << endl;

    cout << "-----------------------------" << endl;

    cout << "a에 저장된 값 : " << *pointer << endl;
    cout << "a의 주소 값 : " << pointer << endl;

    return 0;
}

