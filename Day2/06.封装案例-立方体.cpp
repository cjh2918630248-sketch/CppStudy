//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Cube
//{
//public:
//	void setL(int l) {
//		m_L = l;
//	}
//	int getL() {
//		return m_L;
//	}
//
//	void setW(int w) {
//		m_W = w;
//	}
//	int getW() {
//		return m_W;
//	}
//	void setH(int h) {
//		m_H = h;
//	}
//	int getH() {
//		return m_H;
//	}
//
//	int calculateS()
//	{
//		return (2 * m_L * m_W) + (2 * m_W * m_H) + (2 * m_L * m_H);
//	}
//
//	int calculateV()
//	{
//		return m_L * m_H * m_H;
//	}
//
//	//成员函数做判断
//	bool isSameByClass(Cube& c)
//	{
//		if (this->getW() == c.getW() && this->getL() == c.getL() && this->getH() == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
////全局函数做判断
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getW() == c2.getW() && c1.getL() == c2.getL() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//
//	cout << "S = " << c1.calculateS() << endl;
//	cout << "V = " << c1.calculateV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setH(10);
//	c2.setW(10);
//
//	bool res = isSame(c1, c2);
//	if (res)
//	{
//		cout << "c1 == c2" << endl;
//	}
//	else {
//		cout << "c1 != c2" << endl;
//	}
//
//	cout << "===============================================" << endl;
//	bool ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "c1 == c2" << endl;
//	}
//	else {
//		cout << "c1 != c2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}