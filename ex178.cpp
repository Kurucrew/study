#include <iostream>

using namespace std;

int main()
{
    int radius;
    float area, circumference;

    cout << "������ �Է� : ";
    cin >> radius;

    area = radius * radius * 3.14;
    circumference = radius * 2 * 3.14;

    cout << "���� ���� : " << area << endl;
    cout << "���� �ѷ� : " << circumference << endl;

    return 0;
}
