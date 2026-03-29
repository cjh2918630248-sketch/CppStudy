//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////this指针解决的：1.解决名称冲突	2.返回对象本身用*this
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//	Person& PersonAddAge(Person& p) //如果不返回引用会返回对象的拷贝构造函数，不是对象本身
//	{
//		this->age += p.age;
//		cout << "this->age = " << this->age << endl;
//		return *this;
//	}
//	int age;
//};
////1.解决名称冲突
//void test1()
//{
//	Person p1(10);
//	cout << "p1.age = " << p1.age << endl;
//}
////2.返回对象本身用*this
//void test2()
//{
//	Person p1(20);
//	Person p2(18);
//	//链式编程
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//}
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}