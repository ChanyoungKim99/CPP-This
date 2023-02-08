#include <iostream>

class Dog					// class = 추상적인 개념
{
public:
	int mAge;

public:
	void DoSomething()
	{
		// Implicit Object (암시적 개체)
		mAge = 1;			// 일반적인 형태

		// Explicit Object (명시적 개체)
		this->mAge = 1;		// 멤버 함수에서는 this가 생략되어 있는 셈
	}
};


int main()
{
	Dog mimi;

	mimi.mAge = 1;
	mimi.DoSomething();		// 멤버 함수를 호출할 때, this = &mimi; 가 일어남


	Dog john;

	john.mAge = 2;
	john.DoSomething();		// 멤버 함수를 호출할 때, this = &john; 가 일어남
}							