#pragma once

class MyClass
{
public:
	MyClass();
	MyClass(int number);
	~MyClass();

	void Increment(int a);
	void Decrement(int a);
	void Print();

private:
	int number_ = 0;
};

