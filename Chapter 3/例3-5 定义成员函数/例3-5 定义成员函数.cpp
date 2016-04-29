// 例3-5 定义成员函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Clock
{
public:
	void setTime(int H, int M, int S);
	void showTime();
private:
	int hour, minute, second;
};

void Clock::setTime(int H, int M, int S)
{
	hour = H;
	minute = M;
	second = S;
};

void Clock::showTime()
{
	cout << hour << " hour " << minute << " minute " << second << " second " << endl;
};

int main()
{
	Clock cc;
	cc.setTime(12, 23, 34);
	cc.showTime();
    return 0;
}

