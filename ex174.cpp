#include <iostream>

using namespace std;

int main()
{
    int kor, math, eng, sum;
    float average;

    kor = 90;
    math = 90;
    eng = 91;

    sum = kor + math + eng;
    average = (float)sum / 3;

    cout << "���� : " << sum << endl;
    cout << "��� : " << average << endl;

    return 0;
}
