// 例3-14 析构函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

class Student
{
public:
	Student(string na,int no);
	~Student();
	void Output();

private:
	string name;
	int number;
};

Student::Student(string na,int no)
{
	name = na;
	number = no;
}

Student::~Student()
{
	cout << "destruct..." << endl;
}

void Student::Output() {
	cout << name << endl << number << endl;
}

int main()
{
	Student S1("Jake", 1);
	S1.Output();
    return 0;
}

