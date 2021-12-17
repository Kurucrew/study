#include <string>
using namespace std;

class Student
{
public:
	int m_Index;
	int m_Kor;
	int m_Eng;
	int m_Mat;
	int m_Total;
	float m_Average;
	char m_Name[30];
	Student* m_Next;
	Student();
	~Student();
	
};
