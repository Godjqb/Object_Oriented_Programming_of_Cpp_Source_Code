// ��3-2 public��.cpp : �������̨Ӧ�ó������ڵ㡣
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

