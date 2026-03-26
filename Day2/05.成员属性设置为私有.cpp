//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
////自己控制读写权限；对于写操作可以检测数据有效性
//
//class Person
//{
//public:
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄，只读
//	int getAge()
//	{
//		return m_Age;
//	}
//
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有误，赋值失败" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//设置偶像，只写
//	void setIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//private:
//	string m_Name;
//	int m_Age = 18; //只读 ,也可以写0-150
//	string m_Idol; //偶像 只写
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名：" << p.getName() << endl;
//	p.setAge(230);
//	cout << "年龄：" << p.getAge() << endl;
//	p.setIdol("小明");
//	
//	system("pause");
//	return 0;
//}