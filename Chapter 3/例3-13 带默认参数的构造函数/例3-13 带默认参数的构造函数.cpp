// 例3-13 带默认参数的构造函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int y=2012, int m=1, int d=1);
	void Output();

private:
	int year;
	int month;
	int day;
};

/*
Date::Date(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
}
*/
Date::Date(int y, int m, int d) :year(y), month(m), day(d){}

void Date::Output() {
	cout << year << "/" << month << "/" << day << endl;
}

int main()
{
	Date today(2012, 10, 10);
	Date longago;
	today.Output();
	longago.Output();
    return 0;
}

