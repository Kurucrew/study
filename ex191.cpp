#include <iostream>

using namespace std;

int main()
{
    char str1[30] = "computer";
    int i = 0;

    cout << str1 << endl;

    cout << "-------------------" << endl;

    for(i = 0; str1[i] != '\0'; i++)// \0 �� null ���ڸ� �ǹ� ���� null ���ڰ� ���ö� ���� �ݺ��ϴ� �ڵ�
    {
        cout << str1[i];
    }
    cout << endl;

    return 0;
}

