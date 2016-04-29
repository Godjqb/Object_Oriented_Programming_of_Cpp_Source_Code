// 例3-11 构造函数.cpp : 定义控制台应用程序的入口点。
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

