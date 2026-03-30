//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son1 : public Base1
//{
//public:
//	void fun()
//	{
//		m_A = 10;
//		m_B = 10;
//	}
//};
//class Son2 : protected Base1
//{
//public:
//	void fun()
//	{
//		m_A = 10;
//		m_B = 10;
//	}
//};
//class Son3 : private Base1
//{
//public:
//	void fun()
//	{
//		m_A = 10;
//		m_B = 10;
//	}
//};
//class GrandSon3 : public Son3
//{
//public:
//	void fun()
//	{
//		//m_A = 100;到了Son3中，m_A变成了私有成员
//	}
//};
//
//void test1()
//{
//	//Person p;
//	Son1 s1;
//	s1.m_A;//s1.m_B为保护权限，只能在子类内部访问
//	Son2 s2;
//	//Son2是保护权限继承，所有成员的权限都是<=保护权限的
//	Son3 s3;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}