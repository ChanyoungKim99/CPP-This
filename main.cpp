#include <iostream>

class Dog					// class = �߻����� ����
{
public:
	int mAge;

public:
	void DoSomething()
	{
		// Implicit Object (�Ͻ��� ��ü)
		mAge = 1;			// �Ϲ����� ����

		// Explicit Object (����� ��ü)
		this->mAge = 1;		// ��� �Լ������� this�� �����Ǿ� �ִ� ��
	}
};


int main()
{
	Dog mimi;

	mimi.mAge = 1;
	mimi.DoSomething();		// ��� �Լ��� ȣ���� ��, this = &mimi; �� �Ͼ


	Dog john;

	john.mAge = 2;
	john.DoSomething();		// ��� �Լ��� ȣ���� ��, this = &john; �� �Ͼ
}							