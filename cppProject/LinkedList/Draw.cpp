#include "Control.h"

void Control::Draw()
{
	if (HeadS == NULL)
	{
		cout << "---------------------------------------------------------------" << endl;
		cout << "����� �����Ͱ� �����ϴ� �����͸� ���� �ҷ��� �ּ���" << endl;
	}
	for (Student* NewStudent = HeadS; NewStudent != NULL; NewStudent = NewStudent->m_Next)
	{
		cout << "---------------------------------------------------------------" << endl;
		cout << "��ȣ : " << NewStudent->m_Index
			<< " �̸� : " << NewStudent->m_Name
			<< " ���� : " << NewStudent->m_Kor
			<< " ���� : " << NewStudent->m_Eng
			<< " ���� : " << NewStudent->m_Mat
			<< " ���� : " << NewStudent->m_Total
			<< " ��� : " << NewStudent->m_Average
			<<endl;
	}
}