//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//利用成员函数重载左移运算符
//	//一般不会利用成员函数重载左移运算符，因为无法实现cout在左侧
//	/*void operator<<(Person& p)
//	{
//
//	}*/
//	int m_A;
//	int m_B;
//};
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A = " << p.m_A << ", m_B = " << p.m_B ;
//	return cout;
//}
//void test1()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	//cout << "p.m_A = " << p.m_A << endl;
//	cout << p << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}