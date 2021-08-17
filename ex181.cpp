#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "점수를 입력하세요 : ";
    cin >> score;

    switch (score / 10)
    {
    case 10: case 9:
        cout << "A 학점 입니다" << endl;
        break;
    case 8:
        cout << "B 학점 입니다" << endl;
        break;
    case 7:
        cout << "C 학점 입니다" << endl;
        break;
    case 6:
        cout << "D 학점 입니다" << endl;
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        cout << "F 학점 입니다" << endl;
        break;
    default:
        cout << "점수를 올바르게 입력하세요" << endl;
    }

    return 0;
}
