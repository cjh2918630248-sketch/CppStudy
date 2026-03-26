//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include "circle.h"
//#include "point.h"
//using namespace std;
//
//void isInCircle(Circle& c, Point& p)
//{
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	int rDistance = c.getR() * c.getR();
//
//	if (distance == rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;
//	Point p;
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setR(10);
//	c.setCenter(center);
//	p.setX(10);
//	p.setY(20);
//	isInCircle(c, p);
//
//	system("pause");
//	return 0;
//}