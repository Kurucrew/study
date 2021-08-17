#include <iostream>

using namespace std;

int main()
{
    int n = 1234, b = 0x12345678;

    cout << hex << "16진수 n : " << n << dec << "\t\t10진수 n : " << n << endl;
    cout << hex << "16진수 b : " << b << dec << "\t\t10진수 b : " << b << endl;

    return 0;
}
