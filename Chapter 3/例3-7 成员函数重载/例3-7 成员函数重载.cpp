// 例3-7 成员函数重载.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct complex
{
	double real;
	double imag;
};
class Overloaded
{
public:
	int subtract(int x, int y);
	double subtract(double x, double y);
	complex subtract(complex x, complex y);
};
int Overloaded::subtract(int x, int y) {
	return x - y;
}
double Overloaded::subtract(double x, double y) {
	return x - y;
}
complex Overloaded::subtract(complex x, complex y) {
	complex c;
	c.real = x.real - y.real;
	c.imag = x.imag - y.imag;
	return c;
}

int main()
{
	int m = 32, n = 23;
	double x = 31.1, y = 22.2;
	complex a, b, c;
	Overloaded ol;
	a.real = 12.3;
	a.imag = 10.2;
	b.real = 23.5;
	b.imag = 1.2;
	cout << m << "-" << n << "=" << ol.subtract(m, n) << endl;
	cout << x << "-" << y << "=" << ol.subtract(x, y) << endl;
	c = ol.subtract(a, b);
	cout << "(" << a.real << "+" << a.imag << "i)-(" << b.real << "+" << b.imag << "i)=(" << c.real << "+" << c.imag << "i)" << endl;
    return 0;
}

