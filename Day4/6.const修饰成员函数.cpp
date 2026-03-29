//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////常含数
//class Person
//{
//public:
//	//this指针的本质是个指针常量：指针的指向是不可以修改的
//	//this指针类似Person* const this；
//	//void showPerson() const相当于 const Person* const this
//	//在成员函数后面加const本质上是修饰了this指针，让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		this->m_B = 100
//		//this->m_A = 100;
//		//this = NULL; //this指针不可以修改指针的指向，指针指向的值是可以修改
//	}
//	int m_A;
//	mutable	int m_B;//特殊变量，即使在常函数中，也可以修改这个值
//	void fun()
//	{
//
//	}
//};
//void test1()
//{
//	Person p;
//	p.showPerson();
//}
////常对象
//void test2()
//{
//	const Person p;
//	/*p.m_A = 100;*/
//	p.m_B = 200;
//	//常对象只能调用常含数
//	p.showPerson();
//	//常对象不可以调用普通函数，因为普通函数可以修改成员属性，常的意思是只读
//	//p.fun();	C++ 对象含有与成员 函数 不兼容的类型限定符  对象类型是:  const Person
//	Person p2;
//	p2.showPerson();
//	p2.fun();
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}