#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 숫자 자료형
	int iNumber = 100;
	float fNumber = 100.f;
	double dNumber = 107.6;

	cout << iNumber << endl;
	cout << fNumber << endl;
	cout << dNumber << endl;

	// 문자 자로형
	char cCharacter1 = 'b';
	char cCharacter2 = 'a';
	string sString1 = "ㅋ";
	string sString2 = "안녕하세요";

	cout << cCharacter1 << endl;
	cout << cCharacter2 << endl;
	cout << sString1 << endl;
	cout << sString2 << endl;

	// boolean 자료형
	bool bTrue = true;
	bool bFalse = false;
	bool bNumber1 = (10 == 10);
	bool bNumber2 = (11 != 10);
	bool bNumber3 = (11 == 10);

	cout << bTrue << endl;
	cout << bFalse << endl;
	cout << bNumber1 << endl;
	cout << bNumber2 << endl;
	cout << bNumber3 << endl;

	return 0;
}