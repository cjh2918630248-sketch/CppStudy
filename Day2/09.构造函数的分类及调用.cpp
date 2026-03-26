#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//按照参数分类：有参构造、无参构造
//按照类型分类：普通构造、拷贝构造
class Person
{
public:
	//普通构造函数
	Person()
	{
		cout << "Person无参构造函数的调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}

	//拷贝构造函数
	Person(const Person& p)
	{
		cout << "Person拷贝构造函数的调用" << endl;
		age = p.age;
	}


	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}

//private:
	int age;
};

void test01()
{
	//括号法
	//Person p;
	//Person p2(10);
	//Person p3(p2);
	//cout << p2.age << p3.age << endl;

	//Person p1(); //会被编译器认为是函数的声明，不会执行构造函数

	//显示法
	//Person p1;
	//Person p2 = Person(10); //有参构造
	//Person p3 = Person(p2); //拷贝构造

	//Person(20); //匿名对象：当前行执行结束后你系统会立马回收匿名对象

	//隐式转换法 
	Person p4 = 10; //相当于		Person p4 = Person(10);
	Person p5 = p4;//相当于		Person p5 = Person(p4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}