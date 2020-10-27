//动态多态的基本用法


#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	virtual void Speak()
	{
		cout << "动物函数调用" << endl;
	}
};
class Cat :public Animal
{
public:
	void Speak()
	{
		cout << "调用猫的函数" << endl;
	}
};
void DoSpeak(Animal&animal)
{
	animal.Speak();
}
void test()
{
	Cat c;
	DoSpeak(c);
	Animal a;
	DoSpeak(a);
}
int main()
{
	test();
	return 0;
}




//多态案例实现-计算器
//传统的方法实现

#include<iostream>
#include<string>
using namespace std;
class Calculator
{
public:
	int GetResult(string res)
	{
		if (res == "+")
		{
			return Number_1 + Number_2;
		}
		else if (res == "-")
		{
			return Number_1 - Number_2;
		}
		else
		{
			return Number_1 * Number_2;
		}
	}
	int Number_1;
	int Number_2;
};
void test()
{
	Calculator c;
	int a, b;
	string res;
	cin >> a >> b;
	cin >> res;
	c.Number_1 = a;
	c.Number_2 = b;
	cout << c.GetResult(res);

}
int main()
{
	test();
	return 0;
}


//用多态的方法实现
#include<iostream>
#include<string>
using namespace std;
class BasicCalculator
{
public:
	virtual int Result()
	{
		return 0;
	}
	int Number_1;
	int Number_2;
};
class Addcalculator:public BasicCalculator
{
public:
	int Result()
	{
		return Number_1 + Number_2;
	}
};
class Subcalculator:public BasicCalculator
{
	int Result()
	{
		return Number_1 * Number_2;
	}
};
class Mulcalculator :public BasicCalculator
{
public:
	int Result()
	{
		return Number_1 - Number_2;
	}
};
void test()
{
	BasicCalculator *b=new Addcalculator;
	b->Number_1 = 400;
	b->Number_2 = 200;
	cout << b->Result() << endl;
	delete b;
	b = new Subcalculator;
	b->Number_1 = 400;
	b->Number_2 = 200;
	cout << b->Result() << endl;
	delete b;
}
int main()
{
	test();
	return 0;
}


//抽象类
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
	virtual void func() = 0;
};
class Son:public Base
{
public:
	virtual void func()
	{
		cout << "func---()" << endl;
	}
};
void  test()
{
	Son s;
	Base *a = new Son;
	s.func();
}
int main()
{
	test();
	return 0;
}


//多态的案例-饮品机
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
	virtual void Water() = 0;
	virtual void Puthot() = 0;
	virtual void Putthing() = 0;
	virtual void Finish() = 0;
	void Dowork()
	{
		Water();
		Puthot();
		Putthing();
		Finish();
	}
};
class Tea :public Base
{
public:
	virtual void Water()
	{
		cout << "加入农夫山泉" << endl;
	}
	virtual void Puthot()
	{
		cout << "加热" << endl;
	}
	virtual void Putthing()
	{
		cout << "加入枸杞和茶叶" << endl;
	}
	virtual void Finish()
	{
		cout << "完成茶的制作" << endl;
	}
};
class Coffe :public Base
{
public:
	virtual void Water()
	{
		cout << "加入矿泉水" << endl;
	}
	virtual void Puthot()
	{
		cout << "加热" << endl;
	}
	virtual void Putthing()
	{
		cout << "加入咖啡因和糖类" << endl;
	}
	virtual void Finish()
	{
		cout << "完成咖啡的制作" << endl;
	}
};
void Result(Base *b)
{
	b->Dowork();
	delete b;
}
void test()
{
	Tea t;
	Coffe c;
	Result(new Tea);
	cout << endl;
	Result(new Coffe);

}
int main()
{
	test();
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	Animal(){};
	virtual void Speak() = 0;
	~Animal()
	{
		cout << "using Animal" << endl;
	}
};
class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_name = new string(name);
	}
	virtual void Speak()
	{
		cout <<*m_name<< " Speak" << endl;
	}
	string *m_name;
	~Cat()
	{
		cout << "using Cat" << endl;
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
};
void test()
{
	Cat c("Tom");
	Animal*abc = new Cat("Tom");
	abc->Speak();
}
int main()
{
	test();
	return 0;
}


//多态案列 - 电脑组装
#include<iostream>
#include<string>
using namespace std;
class CPU
{
public:
	virtual void calculator() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void remember() = 0;
};
class InterCPU:public CPU
{
public:
	virtual void calculator()
	{
		cout << "Using InterCPU" << endl;
	}
};
class InterVideoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout << "Using InterVideoCard" << endl;
	}
};
class InterMemory:public Memory
{
public:
	virtual void remember()
	{
		cout << "Using InterMemory" << endl;
	}
};
class AppleCPU:public CPU
{
public:
	virtual void calculator()
	{
		cout << "Using AppleCPU" << endl;
	}
};
class AppleVideoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout << "Using AppleVideoCard" << endl;
	}
};
class AppleMemory:public Memory
{
public:
	virtual void remember()
	{
		cout << "Using AppleMemory" << endl;
	}
};




class Computer
{
public:
	Computer(CPU *cpu, Memory *mem, VideoCard *vc)
	{
		m_cpu = cpu;
		m_mem = mem;
		m_vc = vc;
	}
	void Work()
	{
		m_cpu->calculator();
		m_mem->remember();
		m_vc->display();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
	}
	CPU*m_cpu;
	Memory*m_mem;
	VideoCard*m_vc;
};
void test()
{
	cout << "first computer" << endl;
	InterCPU *intercpu=new InterCPU;
	InterMemory*intermem=new InterMemory;
	InterVideoCard*intervc=new InterVideoCard;
	Computer *computer = new Computer(intercpu, intermem, intervc);
	computer->Work();
	delete computer;
	cout << endl;
	cout << "Second computer" << endl;
	AppleCPU *Acpu=new AppleCPU;
	AppleMemory*Amem=new AppleMemory;
	AppleVideoCard*Avc=new AppleVideoCard;
	Computer *computer2 = new Computer(Acpu, Amem, Avc);
	computer2->Work();
	delete computer2;
	cout << endl;
	cout << "Tird computer" << endl;
	AppleCPU *A1cpu=new AppleCPU;
	AppleMemory*A1mem=new AppleMemory;
	InterVideoCard*Ivc=new InterVideoCard;
	Computer *computer3 = new Computer(A1cpu, A1mem, Ivc);
	computer3->Work();
	delete computer3;

}
int main()
{
	test();
	return 0;
}
