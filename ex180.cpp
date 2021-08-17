#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "점수를 입력하세요 : ";
    cin >> score;

    if(score > 100 || score < 0)
    {
        cout << "점수를 올바르게 입력하세요" << endl;
    }
    else if(score >= 90)
    {
        cout << "A 학점 입니다" << endl;
    }
    else if(score >= 80)
    {
        cout << "B 학점 입니다" << endl;
    }
    else if(score >= 70)
    {
        cout << "C 학점 입니다" << endl;
    }
    else if(score >= 60)
    {
        cout << "D 학점 입니다" << endl;
    }
    else
    {
        cout << "F 학점 입니다" << endl;
    }

    return 0;
}
