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
	using Network::Initialize;//���ӽ����̽� ���� �Ϻθ� �����Ͽ� �ش� ������ ����Ҷ� ���ӽ����̽� �̸��� ������ �� �ִ�
	Graphics::Initialize();
	Initialize();
	a = 10;//���ӽ����̽� ���� �̸��� ��ġ�� �ʴ� ������ ���� ����ؾ� �� ��� using Ű���带 �̿��Ͽ� �ش� ���ӽ����̽��� �̸��� ������ �� �ִ� 
	
	return 0;
}