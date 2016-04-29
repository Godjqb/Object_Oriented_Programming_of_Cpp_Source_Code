#pragma once
#include<iostream>
using namespace std;

class Book
{
public:
	char title[20], auther[10], publish[30];
	float price;
	void input();
	void output();
};
void Book::input() {
	cin >> title >> auther >> publish >> price;
}
void Book::output() {
	cout << title << " " << auther << " " << publish << " " << price << endl;
}