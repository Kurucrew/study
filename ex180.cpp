#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "������ �Է��ϼ��� : ";
    cin >> score;

    if(score > 100 || score < 0)
    {
        cout << "������ �ùٸ��� �Է��ϼ���" << endl;
    }
    else if(score >= 90)
    {
        cout << "A ���� �Դϴ�" << endl;
    }
    else if(score >= 80)
    {
        cout << "B ���� �Դϴ�" << endl;
    }
    else if(score >= 70)
    {
        cout << "C ���� �Դϴ�" << endl;
    }
    else if(score >= 60)
    {
        cout << "D ���� �Դϴ�" << endl;
    }
    else
    {
        cout << "F ���� �Դϴ�" << endl;
    }

    return 0;
}
