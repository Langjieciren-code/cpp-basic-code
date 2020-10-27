// 写文件操作
#include<iostream>
#include<fstream>
using namespace std;
void test()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "name:JackLang" << endl;
	ofs << "Number:15652907966" << endl;
	ofs << "Id:Beijing" << endl;
	ofs.close();
}
int main()
{
	test();
	return 0;
}



//读操作
#include<iostream>
#include<fstream>
using namespace std;
void test()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "wrong" << endl;
		return;
	}
	char buf[1020] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	ifs.close();
}
int main()
{
	test();
}



//二进制的方式写文件
#include<iostream>
#include<fstream>
using namespace std;
class Person
{
public:
	int m_age;
	char m_name[1020];
};
int main()
{
	ofstream ofs;
	ofs.open("Penson.txt", ios::out | ios::binary);
	Person p = {18,"Jack"};
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}



//二进制的方式读文件
#include<iostream>
#include<fstream>
using namespace std;
class Person
{
public:
	int age;
	char name[64];
};
int main()
{
	ifstream ifs;
	Person p;
	ifs.open("C:\Users\狼性少年\source\repos\c++ pratic code\c++ pratic code\Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
		cout << "wrong" << endl;
	ifs.read((char*)&p, sizeof(p));
	cout << p.age << endl;
	cout << p.name << endl;
	return 0;
}