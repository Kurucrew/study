#include <iostream>
//���α׷����� �Ը� Ŀ���� �Լ��� ������ �̸��� ��ġ�� ��찡 ����� �̸� �����ϱ� ���� �̸��� ����ϴ� ������ ������ ���ӽ����̽� �� ����Ѵ�
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
	//�� Initialize ������ ���� Graphics�� Network��� ���ӽ����̽��� ���еǾ� �����ϱ� ������ �����Ϸ� ������ �߻����� �ʴ´� ���ӽ����̽��� ȣ���ϱ� ���ؼ��� ��������������(::)�� ����Ѵ�
	return 0;
}