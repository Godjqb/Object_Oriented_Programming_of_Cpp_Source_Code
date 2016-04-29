// 例3-9 通过指针访问对象成员.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "Book.h"
using namespace std;

int main()
{
	int i, j;
	Book bk[3], *p1, *p2, temp;
	cout << "Input:" << endl;
	for (i = 0; i < 3; i++) {
		p1 = &bk[i];
		p1->input();
	}
	for (i = 0; i < 3; i++) {
		p1 = &bk[i];
		for (j = i + 1; j < 3; j++) {
			p2 = &bk[j];
			if (p1->price > p2->price) {
				temp = *p1;
				*p1 = *p2;
				*p2 = temp;
			}
		}
	}
	cout << "Output:" << endl;
	cout << "title auther pulish price" << endl;
	for (i = 0; i < 3; i++) {
		p1 = &bk[i];
		p1->output();
	}
    return 0;
}

