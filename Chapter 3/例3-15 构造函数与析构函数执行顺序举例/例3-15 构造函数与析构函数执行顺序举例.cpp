// 例3-15 构造函数与析构函数执行顺序举例.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Time
{
public:
	Time(int h, int m, int s);
	~Time();
private:
	int hour;
	int minute;
	int second;
};

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
	cout << "Time constructor " << hour << ":" << minute << ":" << second << endl;
}

Time::~Time()
{
	cout << "Time destructor " << hour << ":" << minute << ":" << second << endl;
}

class Date
{
public:
	Date(int y, int m, int n);
	~Date();

private:
	int year;
	int month;
	int day;
}yesterday(2010, 10, 10);

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	Time time(11, 11, 11);
	static Time time1(12, 12, 12);
	cout << "Date constructor " << year << "/" << month << "/" << day << endl;
}

Date::~Date()
{
	cout << "Date destructor " << year << "/" << month << "/" << day << endl;
}

int main()
{
	cout << "enter main" << endl;
	Date today(2012, 10, 11);
	cout << "edit main" << endl;
	return 0;
}

