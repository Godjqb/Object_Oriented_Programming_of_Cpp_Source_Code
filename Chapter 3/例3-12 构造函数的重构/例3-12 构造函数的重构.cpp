// ��3-12 ���캯�����ع�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int y, int m, int d);
	void Output();
};
Date::Date() {
	year = 2012;
	month = 10;
	day = 11;
}
Date::Date(int x, int y, int z) {
	year = x;
	month = y;
	day = z;
}
void Date::Output() {
	cout << year << "/" << month << "/" << day << endl;
}

int main()
{
	Date today(2012, 10, 10);
	Date tomorrow;
	today.Output();
	tomorrow.Output();
    return 0;
}

