#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "������ �Է��ϼ��� : ";
    cin >> score;

    switch (score / 10)
    {
    case 10: case 9:
        cout << "A ���� �Դϴ�" << endl;
        break;
    case 8:
        cout << "B ���� �Դϴ�" << endl;
        break;
    case 7:
        cout << "C ���� �Դϴ�" << endl;
        break;
    case 6:
        cout << "D ���� �Դϴ�" << endl;
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        cout << "F ���� �Դϴ�" << endl;
        break;
    default:
        cout << "������ �ùٸ��� �Է��ϼ���" << endl;
    }

    return 0;
}
