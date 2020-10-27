//加法运算


#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person operator+ (Person &p)
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;
	
};
void test()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	Person p2;
	p2.m_a = 30;
	p2.m_b = 50;
	Person p3;
	p3 = p2 + p1;
	cout << p3.m_a << " " << p3.m_b << endl;
}
int main()
{
	test();
}


//全局函数加法运算
#include<iostream>
#include<string>
using namespace	std;
class Person
{
public:

	int m_a;
	int m_b;
};
Person operator+(Person&p1,Person&p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void test()
{
	Person p1;
	Person p2;
	p1.m_a = 10;
	p1.m_b = 20;
	p2.m_a = 30;
	p2.m_b = 40;
	Person p3;
	//p3=operator+(p1,p2)
	p3 = p1 + p2;
	cout << p3.m_a << " " << p3.m_b << endl;
}
int main()
{
	test();
	return 0;
}

//左移运算
#include<iostream>
using namespace std;
class Person
{
	friend ostream& operator<<(ostream&cout, Person &p);
private:
	int m_a=12;
	int m_b=23;
};
ostream& operator<<(ostream&cout, Person &p)
{
	cout << p.m_a << " " << p.m_b << endl;
	return cout;
}
void test()
{
	Person p1;
	//p1.m_a = 10;
	//p1.m_b = 20;
	cout << p1 << endl;
}
int main()
{
	test();
	return 0;
}


// ++运算的实现
#include<iostream>
#include<string>
using namespace std;
class MyIntager
{
public:
	MyIntager& operator++()
	{
		number++;
		return *this;
	}
	MyIntager()
	{
		number = 0;
	}
private:
	int number;
};
ostream&operator<<(ostream&cout, MyIntager&myint)
{
	cout << myint << endl;
	return cout;
}
void test()
{
	MyIntager myint;
	cout << ++myint << endl;
}
int main()
{
	test();
	return  0;
}



//前置递减操作
#include<iostream>
#include<string>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream&cout, MyInteger&p);
	
public:
	MyInteger()
	{
		m_number = 10;
	}
	MyInteger& operator--()
	{
		this->m_number--;
		return *this;
	}
private:
	int m_number;
};
ostream& operator<<(ostream&cout, MyInteger&p)
{
	cout <<p.m_number<< endl;
	return cout;
}
void test()
{
	MyInteger p1;
	cout << --p1 << endl;

}
int main()
{
	test();
	return 0;
}

#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream&cout, MyInteger &p);
public:
	MyInteger()
	{
		m_number = 10;
	}
	MyInteger operator--(int)
	{
		MyInteger temp = *this;
		this->m_number=temp.m_number-1;
		return temp;
	}
private:
	int m_number;
};
ostream& operator<<(ostream&cout, MyInteger &p)
{
	cout << p.m_number << endl;
	return cout;
}
void test()
{
	MyInteger p1;
	cout << p1-- << endl;
	cout << p1 << endl;
}
int main()
{
	test();
	return 0;

}


//赋值运算符的重载

#include<iostream>
#include<string>
using namespace std;
class MyClass
{
	friend ostream& operator<<(ostream&cout, MyClass&p1);
public:
	MyClass& operator = (MyClass&p1)
	{
		this->m_nuber = new int(*p1.m_nuber);
		return *this;
	}
	MyClass(int age)
	{
		m_nuber = new int(age);
	}
	~MyClass()
	{
		if (m_nuber != NULL)
		{
			delete m_nuber;
		}
	}

private:
	int *m_nuber;
};
ostream& operator<<(ostream&cout, MyClass&p1)
{
	cout << *p1.m_nuber << endl;
	return cout;
}
void test()
{
	MyClass p1(10);
	MyClass p2(20);
	p2 = p1;
	cout << p2 << endl;
}
int main()
{
	test();
	return 0;
}



//重载符号的关系运算符
#include<iostream>
#include<string>
using namespace std;
class Person
{public:
	Person(string name, int age)
	{
		m_age = age;
		m_name = name;
	}
	bool operator==(Person &p1)
	{
		if (m_age == p1.m_age)
		{
			if (m_name == p1.m_name)
			{
				return true;
			}
			return false;
		}
		return false;
	}
private:
	string m_name;
	int m_age;
};
void test()
{
	Person p1("a", 1);
	Person p2("a", 1);
	if (p1 == p2)
	{
		cout << "equal.." << endl;
	}
}
int main()
{
	test();
}



//仿函数
#include<iostream>
#include<string>
using namespace std;
class Myclass
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test()
{
	Myclass m1;
	int res = m1(10, 20);
	cout << res << endl;
}
int main()
{
	test();
	return 0;
}
