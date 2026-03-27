//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////当其他类对象作为本类成员，先构造类对象，再构造自身
////析构顺序是先本类自身，后类对象
//class Phone 
//{
//public:
//	Phone(string pName)
//	{
//		cout << "phone" << endl;
//		m_PName = pName;
//	}
//	string m_PName;
//	~Phone()
//	{
//		cout << "~Phone()" << endl;
//	}
//};
//class Person
//{
//public:
//	Person(string name,string pName) : m_Name(name),m_Phone(pName)
//	{
//		cout << "person" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//void test1()
//{
//	Person p("zs", "ios");
//	cout << p.m_Name << "===========" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}