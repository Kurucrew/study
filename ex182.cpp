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
    cout << "main() �Լ�����" << endl;
    test();

    for(int i = 1; i < 5; i++)
    {
        cout << "for �ݺ����� ����" << endl;
        cout << "i : " << i << endl;
    }
    cout << "---------------------" << endl;

    for(int i = 1; i < 5; i++)
    {
        int n = 200;
        cout << "for �ݺ����� ����" << endl;
        cout << "i : " << i << endl;
        cout << "namespace ns_1�� n : " << ns_1::n << endl;
        cout << "n : " << n << endl;
    }
    cout << "---------------------" << endl;

    cout << "n : " << n << endl;// for�� ���ο� ����� ������ �ܺο� ����� ������ �̸��� ���� ��� for�� ������ ���ο� ����� ������ �ܺο� ����� ������ ���°� �ȴ�
    cout << "namespace ns_1�� n : " << ns_1::n << endl;

    cout << "main() �Լ�����" << endl;

    return 0;
}
void test()
{
    cout << "test() �Լ�����" << endl;
    cout << "test() �Լ�����" << endl;
}
