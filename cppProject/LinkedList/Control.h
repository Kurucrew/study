#include <iostream>
#include "Student.h"

class Control
{
public:
	Control();
	~Control();
	FILE* CheckFile();
	void Add();
	void Edit();
	FILE* SaveFile();
	FILE* LoadFile();
	void Draw();
	void Delete();
	void DeleteFile();
	Student* NextP;
	Student* HeadS;
	Student* EStudent;
};

