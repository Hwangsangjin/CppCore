#include "MyClass.h"
#include <iostream>

using namespace std; // ���� .h ���� ��� .cpp�� ���

MyClass::MyClass()
{
	// ȣ�� ���� Ȯ��
	cout << "MyClass()" << endl;
}

MyClass::MyClass(int number)
{
	// ȣ�� ���� Ȯ��
	cout << "MyClass(int number)" << endl;

	this->number_ = number;
}

MyClass::~MyClass()
{
	// ȣ�� ���� Ȯ��
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
