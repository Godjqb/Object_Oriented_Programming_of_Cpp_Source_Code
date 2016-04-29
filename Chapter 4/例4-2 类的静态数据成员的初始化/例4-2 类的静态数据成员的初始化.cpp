// 例4-2 类的静态数据成员的初始化.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

class MyClass
{
public:
	MyClass(int a,int b,int c);
	void GetNumber();
	void GetSum();
private:
	int A, B, C;
	static int Sum;
};
int MyClass::Sum = 0;
MyClass::MyClass(int a,int b,int c):A(a),B(b),C(c)
{
	Sum += A + B + C;
}
void MyClass::GetNumber() {
	cout << "Number=" << A << "," << B << "," << C << endl;
}
void MyClass::GetSum() {
	cout << "Sum=" << Sum << endl;
}

int main()
{
	MyClass M(3, 7, 10), N(14, 9, 11);
	M.GetNumber();
	N.GetNumber();
	M.GetSum();
	N.GetSum();
    return 0;
}

