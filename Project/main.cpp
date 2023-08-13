/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

const int kMaxStr = 100; // 전역 변수

// 문자열을 매개변수에 넣기
// 여기서는 모든 문자열의 길이가 동일하다고 가정
bool IsEqual(const char str1[], const char str2[])
{
    for (int i = 0; i < kMaxStr; i++)
    {
        cout << int(str1[i]) << " " << int(str2[i]) << endl;

        // 비교 연산자
        if (str1[i] != str2[i])
            return false;

        // 문자열 종료 조건
        if (str1[i] == '\0')
            return true;
    }
}

int main()
{
	// 영어 사용이 디버깅에 유리합니다.
    const char str1[kMaxStr] = "stop";

    while (true)
    {
        char str2[kMaxStr];
        cin >> str2;

        if (IsEqual(str1, str2))
        {
            cout << "종료합니다." << endl;
        }
        else
        {
            cout << "계속합니다" << endl;;
        }
    }

	return 0;
}
