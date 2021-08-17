#include <iostream>

using namespace std;

int main()
{
    int score1, score2, score3;
    int scores[3] = {99, 88, 100};

    cout << "score1狼 林家 : " << &score1 << endl;
    cout << "score2狼 林家 : " << &score2 << endl;
    cout << "score3狼 林家 : " << &score3 << endl;

    cout << "---------------------------------" << endl;

    cout << "scores[0]狼 林家 : " << &scores[0] << endl;
    cout << "scores[1]狼 林家 : " << &scores[1] << endl;
    cout << "scores[2]狼 林家 : " << &scores[2] << endl;

    cout << "---------------------------------" << endl;

    cout << "scores[0]狼 林家 : " << scores << endl;
    cout << "scores[1]狼 林家 : " << scores + 1 << endl;
    cout << "scores[2]狼 林家 : " << scores + 2 << endl;

    cout << "---------------------------------" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "scores[" << i << "]狼 林家 : " << &scores[i] << endl;
    }

    cout << "---------------------------------" << endl;

    cout << "scores[0]狼 蔼 : " << scores[0] << endl;
    cout << "scores[1]狼 蔼 : " << scores[1] << endl;
    cout << "scores[2]狼 蔼 : " << scores[2] << endl;


    return 0;
}

