// ��3-26 ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
	float x, y;
public:
	Point(float xx, float yy) {
		cout << "point ���캯��������" << endl;
		x = xx;
		y = yy;
	}
	Point(Point &p) {
		x = p.x;
		y = p.y;
		cout << "point �������캯��������" << endl;
	}
	~Point() {
		cout << "point ��������������" << endl;
	}
	float GetX() {
		return x;
	}
	float GetY() {
		return y;
	}
};

class Distance
{
public:
	Distance(Point a,Point b);
	Distance(Distance &d);
	~Distance();
	double GetDist();

private:
	Point p1, p2;
	double dist;
};

Distance::Distance(Point a, Point b):p1(a),p2(b)
{
	double x = double(p1.GetX() - p2.GetX());
	double y = double(p1.GetY() - p2.GetY());
	dist = sqrt(x*x+y*y);
	cout << "Distance ���캯��������" << endl;
}
Distance::Distance(Distance &d) :p1(d.p1), p2(d.p2) {
	cout << "Distance �������캯��������" << endl;
	dist = d.dist;
}
double Distance::GetDist() {
	return dist;
}
Distance::~Distance()
{
	cout << "Distance ��������������" << endl;
}

int main()
{
	Point p1(2, 2), p2(5, 5);
	Distance d1(p1, p2);
	Distance d2(d1);
	cout << "d1ֵΪ" << d1.GetDist() << endl;
	cout << "d2ֵΪ" << d2.GetDist() << endl;
    return 0;
}

