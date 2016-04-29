// 例3-24 对象赋值.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Cube
{
public:
	Cube(int h=10,int w=10,int l=10);
	int volume();
private:
	int height;
	int width;
	int length;
};

Cube::Cube(int h, int w, int l):length(l),width(w),height(h){}

int Cube::volume() {
	return(length*height*width);
}

int main()
{
	Cube cube1(20, 20, 20), cube2;
	cout << cube1.volume() << endl;
	cout << cube2.volume() << endl;
	cube2 = cube1;
	cout << cube2.volume() << endl;
    return 0;
}

