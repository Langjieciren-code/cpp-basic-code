#include<iostream>
#include<string>
using namespace std;
class Point
{
public:
	void SetX(int x)
	{
		m_x = x;
	}
	int GetX()
	{
		return m_x;
	}
	void SetY(int y)
	{
		m_y = y;
	}
	int GetY()
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};
class Circel
{
public:
	void SetR(int r1)
	{
		m_r = r1;
	}
	int PrintCircel()
	{
		return m_r;
	}
	void Setcenter(Point &center)
	{
		m_center = center;
	}
	Point Printcenter()
	{
		return m_center;
	}
private:
	int m_r;
	Point m_center;
};
void IsR(Circel &c,Point &p)
{
	int distance=
	((c.Printcenter().GetX() - p.GetX())*(c.Printcenter().GetX() - p.GetX())) + ((c.Printcenter().GetY() - p.GetY())*(c.Printcenter().GetY() - p.GetY()));
	int rdistance = c.PrintCircel();
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance<rdistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	Circel c;
	int r;
	cout << "input r:" << endl;
	cin >> r;
	c.SetR(r);
	Point center;
	int x1, y1;
	cout << "input center x1&y1:" << endl;
	cin >> x1 >> y1;
	center.SetX(x1);
	center.SetY(y1);
	c.Setcenter(center);
	Point p;
	int x2, y2;
	cout << "input other x & y:" << endl;
	cin >> x2 >> y2;
	p.SetX(x2);
	p.SetY(y2);
	IsR(c, p);
}
