//1.构造函数


/*
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "调用构造函数" << endl;
	}
	~Person()
	{
		cout << "调用析构函数" << endl;
	}
};
int main()
{
	Person p;
}
*/




// 2.构造函数的分类及调用


/*#include<iostream>
using namespace std;
class Persson
{
public:
	int age;
	Persson()
	{
		cout << "无参构造函数" << endl;
	}
	Persson(int a)
	{
		cout << "有参构造函数" << endl;
		age = a;
	}
	Persson(const Persson &p)
	{
		cout << "拷贝构造函数的调用" << endl;
		age = p.age;
	}
	~Persson()
	{
		cout << "析构函数的调用" << endl;
	}
};
void test()
{
	Persson p1;
	Persson p2(10);
	Persson p3(p2);
}
Persson Dowork()
{
	Persson p1;
	cout << (int*)&p1 << endl;
	return p1;
}
int main()
{
	test();
	cout << endl;
	Persson p2;
	p2 = Dowork();
	cout << (int*)&p2 << endl;
	system("pause");

}*/

