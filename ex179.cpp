#include <iostream>
// 소수점 이하의 반올림
using namespace std;

int main()
{
    float Rnum;
    int n;//반올림할 자리수
    int i;// for문의 인덱스 변수
    int tmp;// 계산중 임시값을 저장하는 변수

    cout << "실수를 입력하세요 : ";
    cin >> Rnum;
    cout << "반올림할 자리수를 입력하세요 : ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        Rnum = Rnum * 10;
    }

    Rnum = Rnum + 5;
    tmp = (int)Rnum / 10;
    Rnum = (float)tmp;

    for(i = 0; i < n - 1; i++)
    {
        Rnum = Rnum / 10;
    }

    cout << "반올림한 결과 값 : " << Rnum << endl;

    return 0;
}
