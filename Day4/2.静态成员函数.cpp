//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//所有对象共享同一个函数
//	//静态成员函数只能访问静态成员变量
//	static void func()
//	{
//		m_A = 200;
//		//m_B = 10; 无法区分普通成员变量是属于哪一个对象的，但是因为静态成员变量是被所有对象共享的只有唯一一个所以可以访问
//		cout << "static void func()" << endl;
//		cout << m_A << endl;
//		fun2();
//	}
//	static int m_A;
//	int m_B = 250;
//
//private :
//	static void fun2()
//	{
//		cout << "pricate fun2" << endl;
//	}
//};
// int Person::m_A = 100;
//void test1()
//{
//	//1.通过对象进行访问
//	/*Person p;
//	p.func();*/
//	//2.通过类名访问
//	Person::func();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}