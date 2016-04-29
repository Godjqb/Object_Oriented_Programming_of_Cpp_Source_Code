// this 指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class A
{
public:
	int get() {
		return i;
	}
	void set(int x) {
		this->i = x;
		cout << "this:" << this << endl;
	}
private:
	int i;
};

int main()
{
	A a;
	a.set(9);
	cout << "a:" << &a << endl;
	cout << "a=" << a.get() << endl;
	cout << endl;
	A b;
	b.set(999);
	cout << "b:" << &b << endl;
	cout << "b=" << b.get() << endl;
    return 0;
}

