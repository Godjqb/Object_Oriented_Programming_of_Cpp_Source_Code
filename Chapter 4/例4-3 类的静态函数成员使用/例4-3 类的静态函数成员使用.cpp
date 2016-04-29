// 例4-3 类的静态函数成员使用.cpp : 定义控制台应用程序的入口点。
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
	cout << "Date对象个数:" << Date::n << endl;
	cout << "Date对象个数:" << date1.n << endl;
	Date date2 = date1;
	cout << "Date对象个数:" << Date::n << endl;
	cout << "Date对象个数:" << date2.n << endl;
	date1.display();
	date2.display();
    return 0;
}

