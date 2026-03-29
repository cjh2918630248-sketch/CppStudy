//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//所有对象都共享同一份数据，编译阶段分配内存(全局区)，类内进行声明类外初始化
//	//静态成员变量也有访问权限
//	static int m_A;
//private:
//	static int m_B;
//};
//int Person::m_A = 100; //类外初始化
//int Person::m_B = 200;
//void test1()
//{
//
//}
//void test2()
//{
//	//通过对象进行访问
//	/*Person p;
//	cout << p.m_A << endl;*/
//
//	//通过类名进行访问
//	cout << Person::m_A << endl;
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}