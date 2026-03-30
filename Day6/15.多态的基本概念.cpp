//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "animal-speak" << endl;
//	}
//};
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "cat-speak" << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "dog-speak" << endl;
//	}
//};
////地址早绑定：在编译阶段就确定了函数地址
////需要使用动态多态即可解决，在方法前加上virtual
////动态多态的使用条件：1.有继承关系 2.子类重写父类虚函数
////重写：函数返回值类型、函数名、参数列表完全相同
////动态多态的使用：1.父类的指针或者引用 执行子类对象
//void doSpeak(Animal& animal) // Animal& animal = c;
//{
//	animal.speak();
//}
//void test1()
//{
//	Animal p;
//	doSpeak(p);
//	Cat c;
//	doSpeak(c);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}