// ��4-4 ��̬��Ա�������ʱ���Ǿ�̬��Ա.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Point {
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	static void f1(Point m);
private:
	int x;
	static int y;
};

void Point::f1(Point m) {
	cout << "x=" << m.x << endl;
	cout << "y=" << y << endl;
}
int Point::y = 0;

int main()
{
	Point P1(5, 5), P2(10, 15);
	Point::f1(P1);
	Point::f1(P2);
    return 0;
}

