#include <iostream>

using namespace std;

int main()
{
    int scores[4] = {0,};
    int i = 0;

    for(i = 0; i < 3; i++)
    {
        cout << "���� : " << i + 1 << "�Է� : ";
        cin >> scores[i];
        scores[3] += scores[i];
    }
    for(i = 0; i < 4; i++)
    {
        cout << scores[i] << "\t";
    }

    cout << endl;
    cout << "���� : " << scores[3] << "��" << endl;

    return 0;
}

