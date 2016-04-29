// 例3-20 对象作为函数参数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Square
{
public:
	Square(double len);
	void Add(Square s);
	void Output();

private:
	double length;
};

Square::Square(double len)
{
	length = len;
}

void Square::Add(Square s) {
	s.length = s.length + 1.0;
}

void Square::Output() {
	cout << "Square Area :" << length*length << endl;
}

int main()
{
	Square s(2.5);
	cout << "add before" << endl;
	s.Output();
	s.Add(s);
	cout << "add after" << endl;
	s.Output();
    return 0;
}

