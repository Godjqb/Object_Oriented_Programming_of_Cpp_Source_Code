// 例3-16 对象数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Box
{
public:
	Box(int h=10,int w=12,int len=15);
	~Box();
	int volume();
private:
	int height;
	int width;
	int length;
};

Box::Box(int h,int w,int len):height(h),width(w),length(len){}

int Box::volume() {
	return (height*width*length);
}

Box::~Box(){}

int main()
{
	Box a[3] = {
		Box(),
		Box(15,18,20),
		Box(16,20,26)
	};

	/*
	cout << "volume of a[0] is " << a[0].volume() << endl;
	cout << "volume of a[1] is " << a[1].volume() << endl;
	cout << "volume of a[2] is " << a[2].volume() << endl;
	*/

	Box *p = a;
	for (int i = 0; i < 3; i++, p++) {
		cout << "volume of a[" << i << "] is " << p->volume() << endl;
	}
    return 0;
}

