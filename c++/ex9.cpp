#include <iostream>
//c에서는 메모리를 할당받고 반납할때 malloc과 free함수를 사용하지만 c++은 new와 delet를 이용한다
int main()
{
	int *ptrOne = new int;
	int *ptrTen = new int[10];
	//int *ptrTen = (int *)malloc(sizeof(int)*10); malloc함수와 비교했을때 매우 간결해진 것을 알 수 있다
	delete ptrOne;
	delete [] ptrTen;//여러개의 데이터를 할당받은 경우에는 delete다음에 []를 붙여준다, new로 할당받은 메모리를 free로 반납하거나 그반대의 상황은 불가능하다 서로 짝이 맞아야한다

}