#include <iostream>
//프로그램에서 규모가 커지면 함수나 변수의 이름이 곂치는 경우가 생긴다 이를 방지하기 위해 이름을 사용하는 범위를 나누는 네임스페이스 를 사용한다
namespace Graphics
{
	int value;
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
	Graphics::Initialize();
	Network::Initialize();
	//두 Initialize 변수는 각각 Graphics와 Network라는 네임스페이스에 구분되어 존재하기 때문에 컴파일러 에러가 발생하지 않는다 네임스페이스를 호출하기 위해서는 범위지정연산자(::)를 사용한다
	return 0;
}