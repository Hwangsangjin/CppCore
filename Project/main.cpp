/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
	// For 기본 예제
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	// 배열 데이터 출력 연습
	// 힌트: sizeof(my_array)
	int my_array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };

	for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
	{
		cout << my_array[i] << " ";

		if (my_array[i] > my_array[i + 1])
		{
			break;
		}
	}
	cout << endl;

	my_array[7] = 1;
	my_array[8] = 2;
	for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
	{
		if (my_array[i] == 1 || my_array[i - 1] < my_array[i])
		{
			cout << my_array[i] << " ";
		}
	}
	cout << endl;

	// 문자열 출력
	char my_string[] = "Hello, World!";	// 배열 크기를 알아서 결정

	// 문자열을 한 글자씩 출력하기
	// 힌트: sizeof(), '\0', break,
	for (int i = 0; i < my_string[i] != '\0'; i++)
	{
		cout << my_string[i];
	}
	cout << endl;

	// while 기본 예제
	int i = 0;
	while (i < 10)
	{
		cout << i << " ";
		i++; // 무한반복 주의
	}
	cout << endl;

	i = 0;
	while (true)
	{
		cout << i << " ";
		i++;

		if (i == 10)
		{
			break;
		}
	}
	cout << endl;

	// while문으로 문자열 한글자씩 출력하기
	// 힌트 && logical and
	i = 0;
	while (i < sizeof(my_string) && my_string[i] != '\0')
	{
		cout << my_string[i];
		i++;
	}
	cout << endl;

	return 0;
}
