#include <iostream>

using namespace std;

namespace ns_1
{
    int n = 300;
}

void test();

int main()
{
    int n = 100;
    cout << "main() 함수시작" << endl;
    test();

    for(int i = 1; i < 5; i++)
    {
        cout << "for 반복문의 범위" << endl;
        cout << "i : " << i << endl;
    }
    cout << "---------------------" << endl;

    for(int i = 1; i < 5; i++)
    {
        int n = 200;
        cout << "for 반복문의 범위" << endl;
        cout << "i : " << i << endl;
        cout << "namespace ns_1의 n : " << ns_1::n << endl;
        cout << "n : " << n << endl;
    }
    cout << "---------------------" << endl;

    cout << "n : " << n << endl;// for문 내부에 선언된 변수와 외부에 선언된 변수의 이름이 같은 경우 for문 종료후 내부에 선언된 변수는 외부에 선언된 변수의 상태가 된다
    cout << "namespace ns_1의 n : " << ns_1::n << endl;

    cout << "main() 함수종료" << endl;

    return 0;
}
void test()
{
    cout << "test() 함수시작" << endl;
    cout << "test() 함수종료" << endl;
}
