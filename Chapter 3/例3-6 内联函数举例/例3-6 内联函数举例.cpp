// ��3-6 ������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Square {
private:
	double length;
public:
	Square(double x);
	void area() {
		cout << "area=" << length*length << endl;
	}
	inline void Perimeter();
};
Square::Square(double x) {
	length = x;
}
void Square::Perimeter() {
	cout << "Perimeter=" << 4 * length << endl;
}

int main()
{
	Square ss(2.0);
	ss.area();
	ss.Perimeter();
    return 0;
}

