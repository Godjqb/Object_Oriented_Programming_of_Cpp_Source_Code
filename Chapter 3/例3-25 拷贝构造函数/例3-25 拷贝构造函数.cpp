// ��3-25 �������캯��.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "�������������Ĺ��캯��" << endl;
}

Complex::Complex(Complex &c) {
	real = c.real;
	image = c.image;
	cout << "���ÿ������캯��" << endl;
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

