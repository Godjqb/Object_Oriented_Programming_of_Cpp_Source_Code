// 例2-7 文件打开关闭写入读出.cpp : 定义控制台应用程序的入口点。
/*

*/

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string str1, str2;
	ofstream outstr("d.txt", ios::out);
	ifstream instr;
	if (!outstr) {
		cerr << "open fail";
		return -1;
	}
	str1 = "abcdefj";
	outstr << str1;
	outstr.close();
	instr.open("d.txt");
	instr >> str2;
	cout << str2 << endl;
	instr.close();
    return 0;
}

