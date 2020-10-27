//初始化列表

#include<iostream>
using namespace std;
class Person
{
public:
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{
		cout << m_a << " " << m_b << " " << m_c << endl;
	}
private:
	int m_a;
	int m_b;
	int m_c;
};
void test()
{
	Person(21, 32, 22);
}
int main()
{
	test();
	return 0;
}



//类对象作为类的成员
#include<string>
#include<iostream>
using namespace std;
class Phone
{
public:
	Phone(string T_name)
	{
		Name = T_name;
	}
	string Name;
};
class Person
{
public:
	Person(string name, string T_name) :M_name(name), M_phone(T_name){}
	string M_name;
	Phone M_phone;
};
void test()
{
	Person p("jack","iphone");
	cout << p.M_name <<" "<< p.M_phone.Name << endl;

}
int main()
{
	test();
	return 0;
}

//静态成员
#include<iostream>
using namespace std;
class Person
{
public:
	static void func()
	{
		m_b = 100;
		cout << "func running" << endl;
	}
private:
	static int m_b;
};
int Person::m_b = 0;
void test()
{
	Person p;
	p.func();
}
int main()
{
	test();
}
