#include <iostream>

using namespace std;

int main()
{
    int weight[5] = {68, 54, 45, 87, 96};
    int s[5] = {0,};
    int a[5] = {5, 4, };
    int i = 0;

    for(i = 0; i < 5; i++)
    {
        cout << "weight[" << i << "] : " << weight[i] << endl;
    }
    cout << "---------------------" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << "s[" << i << "] : " << s[i] << endl;
    }
    cout << "---------------------" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }
    cout << "---------------------" << endl;

    return 0;
}

