#include <iostream>

namespace Graphics
{
	int value;
	int a;
	void Initialize(void)
	{

	}
}

namespace Network
{
	int value;
	void Initialize(void)
	{

	}
}

int main()
{
	using namespace Graphics;
	using Network::Initialize;//네임스페이스 안의 일부만 지정하여 해당 변수를 사용할때 네임스페이스 이름을 생략할 수 있다
	Graphics::Initialize();
	Initialize();
	a = 10;//네임스페이스 안의 이름이 곂치지 않는 변수를 자주 사용해야 할 경우 using 키워드를 이용하여 해당 네임스페이스의 이름을 생략할 수 있다 
	
	return 0;
}