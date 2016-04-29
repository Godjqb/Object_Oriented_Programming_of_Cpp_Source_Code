// ��4-3 ��ľ�̬������Աʹ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Date
{
public:
	static int n;
	Date(int m, int d, int y):month(m),day(d),year(y) {
		n++;
	}
	Date(const Date& d) {
		month = d.month;
		day = d.day;
		year = d.year;
		n++;
	}
	~Date() {
		n--;
	}
	void display() {
		cout << year << "-" << month << "-" << day << endl;
	}
private:
	int year, day, month;
};
int Date::n = 0;

int main()
{
	Date date1(5, 20, 2010);
	cout << "Date�������:" << Date::n << endl;
	cout << "Date�������:" << date1.n << endl;
	Date date2 = date1;
	cout << "Date�������:" << Date::n << endl;
	cout << "Date�������:" << date2.n << endl;
	date1.display();
	date2.display();
    return 0;
}

