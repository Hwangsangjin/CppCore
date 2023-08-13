/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

using namespace std;

class MyClass
{
public:	// 접근 권한
	MyClass()
	{
		// 호출 시점 확인
		cout << "MyClass()" << endl;
		cout << "this " << this << endl;
	}

	MyClass(int number) // init_str이 유효한 메모리라고 가정
	{
		cout << "MyClass(int number)" << endl;
		
		// this 포인터
		this->number_ = number;
		cout << "this " << this << endl;
	}

	~MyClass()
	{
		// 호출 시점 확인
		cout << "~MyClass()" << endl;
	}

	void Increment(int a)
	{
		number_ += a;
	}

	void Print()
	{
		cout << number_ << endl;
	}

private: // 접근 권한
	int number_ = 0; // 초기값
};

int main()
{
	MyClass my_class1;
	MyClass my_class2(123);

	cout << &my_class1 << endl;
	cout << &my_class2 << endl;

	my_class1.Print();
	my_class2.Print();

	my_class1.Increment(1);
	my_class1.Print();

	return 0;
}
