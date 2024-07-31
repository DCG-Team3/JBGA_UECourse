#include <iostream>

using namespace std;

// 함수
void CheckT()
{
	int t = 0;

	cin >> t;

	if (t == 0)
	{
		cout << "t는 0입니다!" << endl;
	}
}

// 함수의 전달 값
void CheckTParam(int NumberToCheck)
{
	int t = 0;

	cin >> t;

	if (t == NumberToCheck)
	{
		cout << "t는 " << NumberToCheck << "입니다!" << endl;
	}
}

// 함수의 리턴 값
int MultiplyTwo(int NumberToMultiply) {
	return NumberToMultiply * 2;
}


int main()
{
	// continue / break
	int i = 0;

	while (i < 10)
	{
		if (i == 10)
		{
			break;
		}

		if (i % 2 == 0)
		{
			i++;
			continue;
		}

		cout << i << "번째 입니다!" << endl;
		i++;
	}

	cout << "끝!";

	// 함수
	CheckT();

	// 함수의 전달 값
	CheckTParam(5);

	// 함수의 리턴 값
	int Number = 0;

	cin >> Number;

	cout << MultiplyTwo(Number);


	return 0;
}