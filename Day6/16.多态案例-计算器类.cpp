//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////普通写法
//class Calculator
//{
//public:
//	int m_Num1;
//	int m_Num2;
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}else if (oper == "/")
//		{
//			return m_Num1 / m_Num2;
//		}
//	}
//};
//void test1()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 5;
//	cout << c.getResult("+") << endl;
//	cout << c.getResult("-") << endl;
//	cout << c.getResult("*") << endl;
//	cout << c.getResult("/") << endl;
//}
////利用多态实现计算器
//class AbstractCalculator
//{
//public:
//	int m_Num1;
//	int m_Num2;
//	virtual int getResult()
//	{
//		return 0;
//	}
//};
//class AddCal : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//class SubCal : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//class MulCal : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//class DevideCal : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//void test2()
//{
//	AbstractCalculator* abc = new AddCal;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->getResult() << endl;
//	delete abc;
//	abc = new SubCal;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->getResult() << endl;
//	delete abc;
//	abc = new MulCal;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->getResult() << endl;
//	delete abc;
//	abc = new DevideCal;
//	abc->m_Num1 = 40;
//	abc->m_Num2 = 20;
//	cout << abc->getResult() << endl;
//}
//int main()
//{
//	test1();
//	cout << "=================================" << endl;
//	test2();
//	system("pause");
//	return 0;
//}