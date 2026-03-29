//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//	int m_A; //成员变量，属于类的某一个对象，占用空间
//	static int m_B; //静态成员变量，不属于任何一个对象，不占类对象的空间
//	void func() //非静态成员函数，不占类的对象内存空间
//	{
//
//	}
//	static void fun2()
//	{
//
//	}
//};
//int Person::m_B = 100;
//void test1()
//{
//	Person p; //空对象占用1个字节
//	//C++会给每隔空对象也分配1个字节的空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//void test2()
//{
//	Person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}