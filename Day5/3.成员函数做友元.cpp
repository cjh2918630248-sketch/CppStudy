//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//访问building私有成员
//	void visit2();//不可以访问building私有成员
//	Building* building;
//};
//class Building
//{
//	friend void GoodGay::visit();
//public:
//	Building();
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "visit ：" << building->m_BedRoom << endl;
//	cout << "visit ：" << building->m_SittingRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	//cout << "visit2 ：" << building->m_BedRoom << endl;
//	cout << "visit2 ：" << building->m_SittingRoom << endl;
//}
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//}
//void test2()
//{
//	GoodGay gg;
//	gg.visit2();
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}