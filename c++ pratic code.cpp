//利用new创建堆区数字跟数组
/*#include<iostream>
#include<string>
using namespace std;
int *func()
{
	int *p = new int(10);
	return p;
}
void test()
{
	int *p=func();
	cout << *p << endl;
	delete p;
}
void test2()
{
	int *arry = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arry[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arry[i] << endl;
	}
	delete[]arry;
}
int main()
{
	test();
	test2();
	return 0;
}

//引用的基本使用

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	int &b = a;
	a = 100;
	cout << b << endl;
	a = 120;
	cout << a << " " << b;
}



//引用在函数的参数传递中的运用

#include<iostream>
#include<string>
using namespace std;
void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *a, int *b)
{
		int temp;
		temp= *a;
		*a =* b;
		*b = temp;


}
void swap3(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 0;
	int b = 1;
	swap1(a, b);
	cout << a << " " << b << endl;
	swap2(&a, &b);
	cout << a << " " << b << endl;
	swap3(a, b);
	cout << a << " " << b << endl;
	return 0;
}

