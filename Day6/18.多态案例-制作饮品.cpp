//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void Put() = 0;
//
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		Put();
//	}
//};
//
//class Coffee : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "Coffee::Boil()" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "Coffee::Brew()" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "Coffee::PourInCup()" << endl;
//	}
//	virtual void Put()
//	{
//		cout << "Coffee::Put()" << endl;
//	}
//};
//class Tea : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "Tea::Boil()" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "Tea::Brew()" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "Tea::PourInCup()" << endl;
//	}
//	virtual void Put()
//	{
//		cout << "Tea::Put()" << endl;
//	}
//};
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//}
//void test1()
//{
//	//Person p;
//	/*AbstractDrinking* coffee = new Coffee;
//	AbstractDrinking* tea = new Tea;*/
//	//doWork(coffee);
//	doWork(new Coffee);
//	cout << "===============================================" << endl;
//	//doWork(tea);
//	doWork(new Tea);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}