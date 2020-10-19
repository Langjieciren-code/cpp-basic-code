//继承的基本语法


/*#include<iostream>
#include<string>
using namespace std;
class Basepage
{
public:
	void hear()
	{
		cout << "welcome to my webpage" << endl;
	}
	void skip()
	{
		cout << "intrudus" << endl;
	}
	void End()
	{
		cout << "email:langjieciren.gmail.com" << endl;
	}
};
class cpp:public Basepage
{
public:
	void contest()
	{
		cout << "c++" << endl;
	}
	
};
class python:public Basepage
{public:
	void contest()
	{
		cout << "python" << endl;
	}
};
void test()
{
	cpp c;
	python p;
	c.hear();
	c.skip();
	c.contest();
	c.End();
	p.hear();
	p.skip();
	p.contest();
	p.End();

}
int main()
{
	test();
	return 0;
}


//继承方式
//保护权限只能在类内访问 类外不可访问
//共有继承（跟前面类的性质一致）
//保护继承（公共类继承为保护类）
//私有继承（共有跟保护类变为私有类）

#include<iostream>
#include<string>
using namespace std;
class Basic
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class P : public Basic
{
	void Fun()
	{
		m_a = 10;
		m_b = 20;
	}
};
class Pro :protected Basic
{
	void Fun()
	{
		m_a = 10;
		m_b = 30;
	}
};
class Pri :private Basic
{
	void Fun()
	{
	}
};
void test()
{
	P p1;
	p1.m_a = 20;
	Pro p2;

}

//
#include<iostream>
#include<string>
using namespace std;
class Basic
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};
class Son:public Basic
{
public:
	int m_d;
};
int main()
{
	Son s;
	cout << sizeof(s) << endl;
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
class Basic
{
public:
	int m_a = 100;
};
class Son :public Basic
{
public:
	int m_a = 200;
};
int main()
{
	Son s;
	cout << s.m_a << endl;
	cout << s.Basic::m_a << endl;
	return 0;
}



//同名静态成员及函数的访问

#include<iostream>
#include<string>
using namespace std;
class Basic
{
public:
	void static fun()
	{
		cout << "basic-->func" << endl;
	}
	static int m_A;
};
int Basic::m_A = 100;
class Son:public Basic
{
public:
	void static fun()
	{
		cout << "son-->func" << endl;
	}
	static int m_A ;
};
int Son::m_A = 200;
void test()
{
	Son s;
	cout << s.m_A << endl;
	cout << s.Basic::m_A << endl;
	cout << endl;
	cout << Son::m_A << endl;
	cout << Son::Basic::m_A << endl;
	s.fun();
	s.Basic::fun();
	Son::Basic::fun();
	Son::fun();

}
int main() {
	test();
	return 0;
}



//多继承
#include<iostream>
#include<string>
using namespace std;
class Base1
{
public:

	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{public:
	Base2() {
		m_B = 200;
	}
	int m_B;
};
class Son:public Base1,public Base2
{
public:
	Son()
	{

	}
	
	int m_C=200;
};
void test()
{
	Son p;
	cout << p.m_A << " " << p.m_B << " " << p.m_C << endl;
}
int main()
{
	test();
	return 0;
}


//三菱继承问题解决方案
#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	int m_Age;
};
class Sheep :virtual public Animal
{};
class Tuo :virtual public Animal
{};
class SheepTuo:public Sheep,public Tuo
{};
void test()
{
	SheepTuo p;
	//p.Sheep::m_Age = 20;
	//p.Tuo::m_Age = 18;
	p.m_Age = 20;
	cout << p.m_Age << endl;
}
int main()
{
	test();
	return 0;
}