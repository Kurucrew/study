#include <iostream>
//c������ �޸𸮸� �Ҵ�ް� �ݳ��Ҷ� malloc�� free�Լ��� ��������� c++�� new�� delet�� �̿��Ѵ�
int main()
{
	int *ptrOne = new int;
	int *ptrTen = new int[10];
	//int *ptrTen = (int *)malloc(sizeof(int)*10); malloc�Լ��� �������� �ſ� �������� ���� �� �� �ִ�
	delete ptrOne;
	delete [] ptrTen;//�������� �����͸� �Ҵ���� ��쿡�� delete������ []�� �ٿ��ش�, new�� �Ҵ���� �޸𸮸� free�� �ݳ��ϰų� �׹ݴ��� ��Ȳ�� �Ұ����ϴ� ���� ¦�� �¾ƾ��Ѵ�

}