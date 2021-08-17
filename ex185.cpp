#include <iostream>

using namespace std;

namespace ns_1
{
    int n1 = 300;
}

namespace ns_2
{
    int n2 = 500;
}

int main()
{
    using namespace ns_1;// 네임스페이스를 사용하겠다고 선언하면 이후 작성하는 변수앞에 네임스페이스 이름을 적지 않아도 된다
    using namespace ns_2;

    cout << "n1 in ns_1 : " << n1 << endl;
    cout << "n2 in ns_2 : " << n2 << endl;

    return 0;
}

