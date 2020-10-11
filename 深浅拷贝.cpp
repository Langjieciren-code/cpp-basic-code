/*#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "无参函数调用" << endl;
	}
	Person(int age,int height)
	{
		cout << "有参函数的调用" << endl;
		m_age = age;
		Height = new int(height);
		
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
		/*if (Height != 0)
		{
			//浅拷贝会致使堆区的内存重复释放
			delete Height;
			Height == NULL;
		}
	}
	int m_age;
	int *Height;
};
void test()
{
	Person p1(10,180);
	Person p2(p1);
	cout << p1.m_age << "  "<<*p1.Height<<endl;
	cout << p2.m_age << "  " << *p2.Height << endl;
}
int main()
{
	test();
}*/


/*
//深拷贝

#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "无参函数调用" << endl;
	}
	Person(int age,int height)
	{
		cout << "有参函数的调用" << endl;
		m_age = age;
		Height = new int(height);

	}
	Person(const Person &p)
	{
		m_age=p.m_age;
		Height = new int(*p.Height);

	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
		if (Height != 0)
		{
			//浅拷贝会致使堆区的内存重复释放
			delete Height;
			Height == NULL;
		}
	}
	int m_age;
	int *Height;
};
void test()
{
	Person p1(10,180);
	Person p2(p1);
	cout << p1.m_age << "  "<<*p1.Height<<endl;
	cout << p2.m_age << "  " << *p2.Height << endl;
}
int main()
{
	test();
}
*/