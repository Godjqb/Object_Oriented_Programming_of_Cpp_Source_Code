// ��3-11 ���캯��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Date {
private:
	int year;
	int mouth;
	int day;
public:
	Date(int y, int m, int d);
	void Output();
};
Date::Date(int y, int m, int d) {
	year = y;
	mouth = m;
	day = d;
}
void Date::Output() {
	cout << year << "/" << mouth << "/" << day << endl;
}

int main()
{
	Date today(2012, 10, 10);
	today.Output();
    return 0;
}

