//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
///*
//	创建1个类，C++编译器会给每个类都添加至少3个函数
//	1.默认构造	2.析构函数	3.拷贝构造
//*/
//
///*
//	如果写了有参构造，编译器不提供无参构造，但是提供拷贝构造
//	如果写了拷贝构造，编译器不提供构造函数
//*/
//class Person
//{
//public:
//	/*Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}*/
//
//	Person(int age)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age;
//	}
//
//	/*Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}*/
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2.age = " << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p(28);
//	Person p2(p);
//	cout << "p2.age = " << p2.m_Age << endl;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}