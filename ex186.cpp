#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i = 0;
    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }

    cout << "1 ~ 10 까지의 합 : " << sum << endl;

    return 0;
}

