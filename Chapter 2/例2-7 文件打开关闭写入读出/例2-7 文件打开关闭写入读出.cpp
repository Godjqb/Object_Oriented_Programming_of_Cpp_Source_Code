// ��2-7 �ļ��򿪹ر�д�����.cpp : �������̨Ӧ�ó������ڵ㡣
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

