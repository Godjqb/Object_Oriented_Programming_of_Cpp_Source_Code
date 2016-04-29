// 例3-2 public类.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Limit {
public:
	char name[30];
	void accept() {
		cout << "\nEnter your name,please:";
		cin >> name;
		cout << "\nYour name is:" << name << endl;
	}
};

int main()
{
	Limit c;
	c.accept();
	cout << c.name << endl;
    return 0;
}

