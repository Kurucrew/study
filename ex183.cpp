#include <iostream>

//using namespace std; : cout �� endl �� ���� ��ɾ �ش� ���ӽ����̽��� ����Ǿ� �ֱ� ������ std ���ӽ����̽��� �������� ������ ��� ��ɾ std::�� �ٿ���� �Ѵ�

namespace ns_1
{
    int n = 300;
}

void test();

int main()
{
    int n = 100;
    std::cout << "main() �Լ�����" << std::endl;
    test();

    for(int i = 1; i < 5; i++)
    {
        std::cout << "for �ݺ����� ����" << std::endl;
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "---------------------" << std::endl;

    for(int i = 1; i < 5; i++)
    {
        int n = 200;
        std::cout << "for �ݺ����� ����" << std::endl;
        std::cout << "i : " << i << std::endl;
        std::cout << "namespace ns_1�� n : " << ns_1::n << std::endl;
        std::cout << "n : " << n << std::endl;
    }
    std::cout << "---------------------" << std::endl;

    std::cout << "n : " << n << std::endl;
    std::cout << "namespace ns_1�� n : " << ns_1::n << std::endl;

    std::cout << "main() �Լ�����" << std::endl;

    return 0;
}
void test()
{
    std::cout << "test() �Լ�����" << std::endl;
   std::cout << "test() �Լ�����" << std::endl;
}
