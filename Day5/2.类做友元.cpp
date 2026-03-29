//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//参观函数，访问building中的属性
//	Building* building;
//};
//class Building
//{
//	friend class GoodGay;
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
//
//}
//void GoodGay::visit()
//{
//	cout << "GoodGay is visiting " << building->m_BedRoom << endl;
//}
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}