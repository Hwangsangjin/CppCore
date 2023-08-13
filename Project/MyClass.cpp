#include "MyClass.h"
#include <iostream>

using namespace std; // 보통 .h 파일 대신 .cpp에 사용

MyClass::MyClass()
{
	// 호출 시점 확인
	cout << "MyClass()" << endl;
}

MyClass::MyClass(int number)
{
	// 호출 시점 확인
	cout << "MyClass(int number)" << endl;

	this->number_ = number;
}

MyClass::~MyClass()
{
	// 호출 시점 확인
	cout << "~MyClass()" << endl;
}

void MyClass::Increment(int a)
{
	number_ += a;
}

void MyClass::Decrement(int a)
{
	number_ -= a;
}

void MyClass::Print()
{
	cout << number_ << endl;
}
