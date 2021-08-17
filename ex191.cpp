#include <iostream>

using namespace std;

int main()
{
    char str1[30] = "computer";
    int i = 0;

    cout << str1 << endl;

    cout << "-------------------" << endl;

    for(i = 0; str1[i] != '\0'; i++)// \0 은 null 문자를 의미 따라서 null 문자가 나올때 까지 반복하는 코드
    {
        cout << str1[i];
    }
    cout << endl;

    return 0;
}

