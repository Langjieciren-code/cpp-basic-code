//ȫ�ֺ�������Ԫ
/*
#include<iostream>
#include<string>
using namespace std;
class Buiding
{
	friend void test(Buiding &buiding);
public:
	string siting_room;
private:
	string bed_room;
};
void test(Buiding &buiding)
{
	buiding.siting_room = "1";
	buiding.bed_room = "2";
}
int main()
{
	Buiding buiding;
	test(buiding);
}

//������Ԫ

#include<iostream>
#include<string>
using namespace std;
class Buiding
{
	friend class gay;
public:
	Buiding();
	string SitRoom;
private:
	string BedRoom;
};
Buiding::Buiding()
{
	SitRoom = "����";
	BedRoom = "����";
}
class gay
{
public:
	gay();
	void show()
	{
		cout << "���ڷ���:" << buiding->BedRoom << endl;
		cout << "���ڷ���:" << buiding->SitRoom << endl;
	}
private:
	Buiding *buiding;
};
gay::gay()
{
	buiding = new Buiding;
}
void test()
{
	gay p;
	p.show();
}
int main()
{
	test();
	return 0;
}
*/



//��Ա��������Ԫ
/*
#include<iostream>
#include<string>
using namespace std;
class Buiding
{
	friend class gay;
	friend void gay::show1();
public:
	Buiding();
	string SitRoom;
private:
	string BedRoom;
	
};
Buiding::Buiding()
{
	SitRoom = "sit_room";
	BedRoom = "bed_room";
}
class gay
{
public:
	gay();
	void show1();
private:
	Buiding *buiding;
};
gay::gay()
{
	buiding = new Buiding;
}
void gay::show1()
{
	
	cout << "vist:" << buiding->SitRoom << endl;
	cout << "vist:" << buiding->BedRoom << endl;
}
void test()
{
	gay g;
	g.show1();
}
int main()
{
	test();
	return 0;
}*/

