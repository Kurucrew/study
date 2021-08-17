#include <iostream>

//using namespace std; : cout 과 endl 과 같은 명령어가 해당 네임스페이스에 선언되어 있기 때문에 std 네임스페이스를 선언하지 않으면 모든 명령어에 std::를 붙여줘야 한다

namespace ns_1
{
    int n = 300;
}

void test();

int main()
{
    int n = 100;
    std::cout << "main() 함수시작" << std::endl;
    test();

    for(int i = 1; i < 5; i++)
    {
        std::cout << "for 반복문의 범위" << std::endl;
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "---------------------" << std::endl;

    for(int i = 1; i < 5; i++)
    {
        int n = 200;
        std::cout << "for 반복문의 범위" << std::endl;
        std::cout << "i : " << i << std::endl;
        std::cout << "namespace ns_1의 n : " << ns_1::n << std::endl;
        std::cout << "n : " << n << std::endl;
    }
    std::cout << "---------------------" << std::endl;

    std::cout << "n : " << n << std::endl;
    std::cout << "namespace ns_1의 n : " << ns_1::n << std::endl;

    std::cout << "main() 함수종료" << std::endl;

    return 0;
}
void test()
{
    std::cout << "test() 함수시작" << std::endl;
   std::cout << "test() 함수종료" << std::endl;
}
