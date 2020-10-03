//类与对象
/*
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
class Circle
{
public:
	int r;
	double R_circle()
	{
		return PI * r * 2;
	}

private:

};
int main()
{
	Circle c1;
	cin >> c1.r;
	cout << c1.R_circle() << endl;
}


#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	string M_name;
	int M_Id;
	void show()
	{
		cout << M_name << endl;
		cout << M_Id << endl;
	}
};
int main()
{
	student c1;
	c1.M_name = "jack_lang";
	c1.M_Id = 41924355;
	c1.show();
	return 0;
}


//将成员的属性私有化
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	void SetName(string name)
	{
		m_name = name;
	}
	void PutName()
	{
		cout << m_name << endl;
	}

private:
	//私有成员只能在类里访问
	string m_name;
	int m_age;
	string m_Gfriend;
};
int main()
{
	Person p1;
	p1.SetName("jack lang");
	p1.PutName();
	return 0;
}
*/


#include<iostream>
#include<string>
using namespace std;
class Cube
{
public:
	void setH(int h)
	{
		m_H = h;
	}
	void setL(int L)
	{
		m_L = L;
	}
	void setW(int W)
	{
		m_W = W;
	}
	int getH()
	{
		return m_H;
	}
	int getW()
	{
		return m_W;
	}
	int getL()
	{
		return m_L;
	}
	int calculateS()
	{
		return m_W * m_H * 2 + m_H * m_L * 2 + m_L * m_W * 2;
	 }
	int calculateV()
	{
		return m_H * m_L*m_W;
	}
	bool Cequit(Cube &c)
	{
		if (m_H == c.getH() and m_L == c.getL() and m_W == c.getW())
		{
			return true;
		}
		return false;
	}
private:
	int m_H;
	int m_W;
	int m_L;
};
bool Equit(Cube &c1, Cube &c2)
{
	if (c1.getH() == c2.getH() and c1.getL() == c2.getL() and c1.getW() == c2.getW())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	Cube c2;
	int temp;
	cout << "input m_h:";
	cin >> temp;
	c1.setH(temp);
	cout << "input m_w:";
	cin >> temp;
	c1.setW(temp);
	cout << "input m_l:";
	cin >> temp;
	c1.setL(temp);
	cout << "c1 S is:" << c1.calculateS() << endl;
	cout << "c1 V is:" << c1.calculateV() << endl;
	int temp2;
	cout << "input m_h:";
	cin >> temp2;
	c2.setH(temp2);
	cout << "input m_w:";
	cin >> temp2;
	c2.setW(temp2);
	cout << "input m_l:";
	cin >> temp2;
	c2.setL(temp2);
	cout << "c1 S is:" << c2.calculateS() << endl;
	cout << "c1 V is:" << c2.calculateV() << endl;
	int res = Equit(c1, c2);
	if (res == true)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "not same" << endl;
	}
	int res2=c1.Cequit(c2);
	if (res2 == true)
	{
		cout << "int class is same" << endl;
	}
	else
	{
		cout << "int class not same" << endl;
	}

} 