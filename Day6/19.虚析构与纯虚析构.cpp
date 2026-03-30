//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////虚析构与纯虚析构可以解决父类指针释放子类对象的问题
////纯虚析构所在类是抽象类
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal::Animal()" << endl;
//	}
//	//virtual ~Animal() //虚析构
//	//{
//	//	cout << "Animal::~:Animal()" << endl;
//	//}
//	virtual ~Animal() = 0; //纯虚析构
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal的纯虚析构" << endl;
//}
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat::Cat()" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat::~Cat()" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << endl;
//		cout << "Cat::speak()" << endl;
//	}
//	string* m_Name;
//};
//class Dog : public Animal
//{
//public:
//	Dog(string name)
//	{
//		cout << "Dog::Dog()" << endl;
//		m_Name = new string(name);
//	}
//	~Dog()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Dog::~Dog()" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << endl;
//		cout << "Dog::speak()" << endl;
//	}
//	string* m_Name;
//};
//void test1()
//{
//	//Person p;
//	Animal* animal1 = new Cat("cat");
//	Animal* animal2 = new Dog("dog");
//	animal1->speak();
//	animal2->speak();
//	delete animal1;
//	delete animal2;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}