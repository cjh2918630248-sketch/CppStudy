//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////有一个纯虚函数就是抽象类
////抽象类特点：1.无法实例化(创建对象) 2.抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
////抽象类的目的：实现多态，让子类重写虚函数
//class Base 
//{
//public:
//	virtual void func() = 0; //纯虚函数，待实现
//};
//class Son : public Base
//{
//public:
//	virtual void func() {
//		cout << "ddd" << endl;
//	}
//};
//void test1()
//{
//	//Base b;//C++ 不允许使用抽象类类型 的对象: 函数 是纯虚拟函数
//	//Son s;
//	//Son s;
//	Base* t = new Son;
//	t->func();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}