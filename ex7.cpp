#include <iostream>

int main()
{
	int num = 10;
	std::cout << "Hello";//cout과 <<(출력연산자)를 사용하여 문자 출력
	std::cout << std::endl;//endl을 출력하여 줄바꿈
	std::cout << "Hello" << std::endl;//출력연산자는 여러개를 이어붙일 수 있음
	std::cout << "num = " << num << std::endl;//printf와는 다르게 변수의 값을 바로 출력가능, printf는 서식문자를 데이터타입에 맞게 작성하고 서식문자와 대응되는 변수를 차례대로 작성해야 하지만 출력연산자는 출력할 변수를 바로 작성하면 됨
	//std::cout을 사용하려면 iostream을 인클루드 해야함
}