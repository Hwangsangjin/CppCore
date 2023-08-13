/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 123;

    // address of 주소 연산자 & ampersand
    cout << a << " " << &a << endl;

    int* b = &a; // b에 a의 주소 대입

    // deference operator (역참조 연산자)
    cout << *b << endl;

    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    // 포인터 자체의 주소 크기와 자료형의 크기 (주소의 크기는 항상 동일하다.)
    double* c = nullptr; // 아무 주소도 가리키고 있지 않다는 의미로 초기화, 0도 많이 사용

    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int*) << " " << sizeof(double*) << endl;
    cout << sizeof(b) << " " << sizeof(c) << endl;

    // 포인터 연산과 배열
    // size_t (여기서는 주소를 10진수로 변환 용도)
    cout << sizeof(size_t) << endl; // 8
    cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
    cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

    // 문자열
    char my_str[] = { 'h', 'e', 'l', 'l', 'o' }; // "Hello"

    char* ptr = my_str; // 배열의 이름은 포인터

    cout << *(ptr + 3) << endl;

	return 0;
}
