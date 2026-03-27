#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age, int height)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);
	}

	/*Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}*/

	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用（重载）" << endl;
		m_Age = p.m_Age;
		//编译器默认执行：m+Height = p.m_Heght;
		//深拷贝：
		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
	}
	int m_Age;
	int* m_Height;
};
void test()
{
	Person p1(18,160);
	cout << "p1.age = " << p1.m_Age << ", p1.height = " << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2.age = " << p2.m_Age << ", p2.height = " << *p2.m_Height << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}