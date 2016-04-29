// 例3-25 拷贝构造函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(double r,double i);
	Complex(Complex &c);
	Complex add(Complex c);
	void Output();
private:
	double real, image;
};

Complex::Complex(double r, double i) :real(r), image(i){
	cout << "调用两个参数的构造函数" << endl;
}

Complex::Complex(Complex &c) {
	real = c.real;
	image = c.image;
	cout << "调用拷贝构造函数" << endl;
}

void Complex::Output()
{
	cout << "(" << real << "," << image << ")" << endl;
}

Complex Complex::add(Complex c) {
	Complex y(real + c.real, image + c.image);
	return y;
}

void f(Complex n) {
	cout << "n=";
	n.Output();
}

int main()
{
	Complex a(3.0, 4.0), b(5.6, 7.9);
	Complex c(a);
	cout << "a=";
	a.Output();
	cout << "c=";
	c.Output();
	f(b);
	c = a.add(b);
	c.Output();
    return 0;
}

