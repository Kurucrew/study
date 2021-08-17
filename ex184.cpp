#include <iostream>

using namespace std;

namespace ns_1
{
    int n1 = 300;
}

namespace ns_2
{
    int n2 = 500;
}

int main()
{
    cout << "n1 in ns_1 : " << ns_1::n1 << endl;
    cout << "n2 in ns_2 : " << ns_2::n2 << endl;

    return 0;
}

