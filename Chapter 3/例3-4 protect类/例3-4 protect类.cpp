// 例3-4 protect类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Limit {
protected:
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
		cout << "\nNow,Your imprest is:\t" << imprest;
	}
};
class Extends :public Limit {
public:
	void ext_display() {
		cout << "\nThe display of extends class is:";
		warning();
	}
};


int main()
{
	Limit c;
	c.accept();
	c.display();
	//c.imprest;
	//c.warning();
	Extends ext_c;
	ext_c.ext_display();
    return 0;
}

