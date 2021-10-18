#include <iostream>
using namespace std;

void PrintDate(int year = 2000, int month = 1, int day = 1);// 함수의 디폴트 매개변수 값을 지정

int main(void)
{
	PrintDate();// 디폴트 값인 2000,1,1 이 입력
	PrintDate(2010);//2010,1,1이 입력
	PrintDate(2010, 8);//2010,8,1이 입력
	PrintDate(2010, 8, 5);//2010,8,5가 입력
	return 0;
}

void PrintDate(int year, int month, int day)
{
	cout << year << "년" << month << "월" << day << "일" << endl;
}

// void PrintDate(int year, int month=1, int day=1) 일 경우 year만 인자를 입력해 주면 나머지는 디폴트 매개변수가 입력이 된다
// void PrintDate(int year=2000, int month=1, int day) 일 경우 세번째 인자값을 지정해 줘야하는데 그러기 위해선 첫번째와 두번째 인자값을 지정해 줘야 함으로 디폴트 인자값은 의미가 없어진다