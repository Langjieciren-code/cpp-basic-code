//1.���캯��


/*
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "���ù��캯��" << endl;
	}
	~Person()
	{
		cout << "������������" << endl;
	}
};
int main()
{
	Person p;
}
*/




// 2.���캯���ķ��༰����


/*#include<iostream>
using namespace std;
class Persson
{
public:
	int age;
	Persson()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Persson(int a)
	{
		cout << "�вι��캯��" << endl;
		age = a;
	}
	Persson(const Persson &p)
	{
		cout << "�������캯���ĵ���" << endl;
		age = p.age;
	}
	~Persson()
	{
		cout << "���������ĵ���" << endl;
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

