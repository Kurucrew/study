#include <iostream>

using namespace std;

int main()
{
    int score1, score2, score3;
    int scores[3] = {99, 88, 100};

    cout << "score1�� �ּ� : " << &score1 << endl;
    cout << "score2�� �ּ� : " << &score2 << endl;
    cout << "score3�� �ּ� : " << &score3 << endl;

    cout << "---------------------------------" << endl;

    cout << "scores[0]�� �ּ� : " << &scores[0] << endl;
    cout << "scores[1]�� �ּ� : " << &scores[1] << endl;
    cout << "scores[2]�� �ּ� : " << &scores[2] << endl;

    cout << "---------------------------------" << endl;

    cout << "scores[0]�� �ּ� : " << scores << endl;
    cout << "scores[1]�� �ּ� : " << scores + 1 << endl;
    cout << "scores[2]�� �ּ� : " << scores + 2 << endl;

    cout << "---------------------------------" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "scores[" << i << "]�� �ּ� : " << &scores[i] << endl;
    }

    cout << "---------------------------------" << endl;

    cout << "scores[0]�� �� : " << scores[0] << endl;
    cout << "scores[1]�� �� : " << scores[1] << endl;
    cout << "scores[2]�� �� : " << scores[2] << endl;


    return 0;
}

