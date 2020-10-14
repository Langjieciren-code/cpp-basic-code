//空指针访问成员变量

/*#include<iostream>
using namespace std;
class Person
{
public:
	void show()
	{
		cout << "person class" << endl;	
	}
	int showM()
	{
		if (this == NULL)
		{
			return 0;
		}
		cout << age << endl;
	}
	int age;
};
void test()
{
	Person *p = NULL;
	p->show();
	p->showM();
}
int main()
{
	test();
} */


/*

//const修饰的成员函数
#include<iostream>
#include<string>	
using namespace std;
class Person
{
public:
	void showM() const//const person const this
	{
		//m = 100;
	}
	int m;
	mutable int m_1;
};
void test()
{
	const Person p;
	p.showM();
}
int main()
{
	test();
}
*/