#include <iostream>
// �Ҽ��� ������ �ݿø�
using namespace std;

int main()
{
    float Rnum;
    int n;//�ݿø��� �ڸ���
    int i;// for���� �ε��� ����
    int tmp;// ����� �ӽð��� �����ϴ� ����

    cout << "�Ǽ��� �Է��ϼ��� : ";
    cin >> Rnum;
    cout << "�ݿø��� �ڸ����� �Է��ϼ��� : ";
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

    cout << "�ݿø��� ��� �� : " << Rnum << endl;

    return 0;
}
