//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, const MyInteger& myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//前置递增
//	MyInteger& operator++() //返回引用是为了一直对一个数据进行递增操作
//	{
//		m_Num++;
//		return *this;
//	}
//	//后置递增
//	MyInteger operator++(int)//int代表占位参数，可以区分前置和后置递增
//	{
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//ostream& operator<< (ostream& cout, const MyInteger& myint)//不加const会报错
//{
//	cout << myint.m_Num;
//	return cout;
//}
//void test1()
//{
//	MyInteger myint;
//
//	cout << ++myint << endl;
//}
//void test2()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}