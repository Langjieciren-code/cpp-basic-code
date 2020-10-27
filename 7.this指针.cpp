#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& add(Person &p)
	{
		this->age += p.age;
		return *this;
	}


	int age;
};
void test2()
{
	Person p1(10);
	Person p2(10);
	p2.add(p1).add(p1).add(p1);
	cout << p2.age << endl;
}

void test()
{
	Person p(10);
	cout << p.age << endl;
}
int main()
{
	test();
	test2();
	return 0;
	return 0;
}
