// 例3-17 对象指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Square {
private:
	double length;
public:
	Square(double len);
	void Output();
};

Square::Square(double len):length(len){}

void Square::Output() {
	cout << "Square area:" << length*length << endl;
}

int main()
{
	Square s(2.5), *s1;
	s1 = &s;
	s1->Output();
	Square *s2 = new Square(3.5);
	s2->Output();
	delete s2;
    return 0;
}

