// 例3-3 private类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Limit {
private:
	float imprest;
	void warning() {
		cout << "Warning!";
	}
public:
	void accept() {
		cout << "\nEnter your imprest,please:\t";
		cin >> imprest;
		cout << "\nYour imprest is:\t" << imprest;
	}
	void display() {
		cout << "\nNow,your imprest is:\t" << imprest;
		warning();
	}
};

int main()
{
	Limit c;
	c.accept();
	c.display();
	c.imprest = 3.3;
	c.warning();
    return 0;
}

