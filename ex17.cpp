#include <iostream>
using namespace std;

void PrintDate(int year = 2000, int month = 1, int day = 1);// �Լ��� ����Ʈ �Ű����� ���� ����

int main(void)
{
	PrintDate();// ����Ʈ ���� 2000,1,1 �� �Է�
	PrintDate(2010);//2010,1,1�� �Է�
	PrintDate(2010, 8);//2010,8,1�� �Է�
	PrintDate(2010, 8, 5);//2010,8,5�� �Է�
	return 0;
}

void PrintDate(int year, int month, int day)
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}

// void PrintDate(int year, int month=1, int day=1) �� ��� year�� ���ڸ� �Է��� �ָ� �������� ����Ʈ �Ű������� �Է��� �ȴ�
// void PrintDate(int year=2000, int month=1, int day) �� ��� ����° ���ڰ��� ������ ����ϴµ� �׷��� ���ؼ� ù��°�� �ι�° ���ڰ��� ������ ��� ������ ����Ʈ ���ڰ��� �ǹ̰� ��������