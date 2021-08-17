#include <iostream>

using namespace std;

int main()
{
    int scores[4] = {0,};
    int i = 0;

    for(i = 0; i < 3; i++)
    {
        cout << "점수 : " << i + 1 << "입력 : ";
        cin >> scores[i];
        scores[3] += scores[i];
    }
    for(i = 0; i < 4; i++)
    {
        cout << scores[i] << "\t";
    }

    cout << endl;
    cout << "총점 : " << scores[3] << "점" << endl;

    return 0;
}

