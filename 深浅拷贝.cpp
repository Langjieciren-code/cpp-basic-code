/*#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "�޲κ�������" << endl;
	}
	Person(int age,int height)
	{
		cout << "�вκ����ĵ���" << endl;
		m_age = age;
		Height = new int(height);
		
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
		/*if (Height != 0)
		{
			//ǳ��������ʹ�������ڴ��ظ��ͷ�
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
//���

#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "�޲κ�������" << endl;
	}
	Person(int age,int height)
	{
		cout << "�вκ����ĵ���" << endl;
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
		cout << "���������ĵ���" << endl;
		if (Height != 0)
		{
			//ǳ��������ʹ�������ڴ��ظ��ͷ�
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