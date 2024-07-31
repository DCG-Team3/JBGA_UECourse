#include <iostream>

using namespace std;

// 클래스
class Test
{
	string name;

public:
	int age;

	virtual int GetAge()
	{
		return age;
	}
};

// 상속
class TestChild1 : public Test
{
	int test;
};

// 오버라이딩
class TestChild2 : public Test
{
public:
	int GetAge() override
	{
		return age + 1;
	}
};


int main()
{
	// 클래스
	Test test{};
	Test test1{};
	Test test2{};
	// test.name = "test";          Error!

	test.age = 10;
	test1.age = 100;
	test2.age = 1000;

	cout << "test의 나이는 " << test.age << endl;
	cout << "test1의 나이는 " << test1.age << endl;
	cout << "test2의 나이는 " << test2.age << endl;


	// 멤버변수 / 메소드
	Test* test3 = new Test();

	test3->age = 10;

	cout << test3->GetAge() << endl;


	// 상속
	TestChild1* testChild1 = new TestChild1();

	testChild1->age = 10;

	cout << testChild1->GetAge() << endl;


	// 오버라이딩
	TestChild2* testChild2 = new TestChild2();

	testChild2->age = 10;

	cout << testChild2->GetAge() << endl;

	return 0;
}