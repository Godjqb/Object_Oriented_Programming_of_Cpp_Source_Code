// 例3-8 对象成员的访问.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Book.h"
#include<iostream>
using namespace std;

int main()
{
	int i, j;
	Book bk[3], temp;
	cout << "Please input Book title,auther,publish and price" << endl;
	for (i = 0; i < 3; i++) {
		bk[i].input();
	}
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (bk[i].price > bk[j].price) {
				temp = bk[i];
				bk[i] = bk[j];
				bk[j] = temp;
			}
		}
	}
	cout << "Output:" << endl;
	cout << "title auther publish price" << endl;
	for (i = 0; i < 3; i++) {
		bk[i].output();
	}
    return 0;
}

