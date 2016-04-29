// 例3-26 类的组合.cpp : 定义控制台应用程序的入口点。
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
		cout << "point 构造函数被调用" << endl;
		x = xx;
		y = yy;
	}
	Point(Point &p) {
		x = p.x;
		y = p.y;
		cout << "point 拷贝构造函数被调用" << endl;
	}
	~Point() {
		cout << "point 析构函数被调用" << endl;
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
	cout << "Distance 构造函数被调用" << endl;
}
Distance::Distance(Distance &d) :p1(d.p1), p2(d.p2) {
	cout << "Distance 拷贝构造函数被调用" << endl;
	dist = d.dist;
}
double Distance::GetDist() {
	return dist;
}
Distance::~Distance()
{
	cout << "Distance 析构函数被调用" << endl;
}

int main()
{
	Point p1(2, 2), p2(5, 5);
	Distance d1(p1, p2);
	Distance d2(d1);
	cout << "d1值为" << d1.GetDist() << endl;
	cout << "d2值为" << d2.GetDist() << endl;
    return 0;
}

