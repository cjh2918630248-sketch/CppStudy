#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class CPU
{
public:
	virtual void cal() = 0;
};
class GPU
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
class Computer
{
public:
	Computer(CPU* cpu, GPU* gpu, Memory* mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_mem = mem;
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu ;
			m_cpu	= NULL;
		}
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
	void work()
	{
		m_cpu->cal();
		m_gpu->display();
		m_mem->storage();
	}
private:
	CPU* m_cpu;
	GPU* m_gpu;
	Memory* m_mem;
};
class InterCPU : public CPU
{
public:
	virtual void cal()
	{
		cout << "INTERCPU" << endl;
	}
};
class InterGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "INTERGPU" << endl;
	}
};
class InterMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "INTERMEMORY" << endl;
	}
};
class LenovoCPU : public CPU
{
public:
	virtual void cal()
	{
		cout << "LENOVOCPU" << endl;
	}
};
class LenovoGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "LENOVOGPU" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "LENOVOMEMORY" << endl;
	}
};
void test1()
{
	//Person p;
	CPU* intelCPU = new InterCPU;
	GPU* intelGPU = new InterGPU;
	Memory* intelMem = new InterMemory;
	Computer* c1 = new Computer(intelCPU, intelGPU, intelMem);
	c1->work();
	delete c1;
	cout << "====================" << endl;
	CPU* lenovoCPU = new LenovoCPU;
	GPU* lenovoGPU = new LenovoGPU;
	Memory* lenovoMem = new LenovoMemory;
	Computer* c2 = new Computer(lenovoCPU, lenovoGPU, lenovoMem);
	c2->work();
	delete c2;
}
int main()
{
	test1();
	system("pause");
	return 0;
}