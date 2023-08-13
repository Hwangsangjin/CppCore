/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

#include "MyClass.h"

using namespace std;

int main()
{
	MyClass my_class1;
	MyClass my_class2(123);

	my_class1.Print();
	my_class2.Print();

	my_class1.Increment(1);
	my_class1.Print();

	my_class1.Decrement(1);
	my_class1.Print();

	return 0;
}
