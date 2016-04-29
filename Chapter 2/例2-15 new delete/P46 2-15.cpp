#include<iostream>
using namespace std;
int main() {
	int *p1, *p2, *p3;
	p1 = new int;
	p2 = new int(10);
	p3 = new int[6];
	*p1 = 8;
	*p2 = 3;
	p3[0] = 5;
	p3[1] = 4;
	cout << "p1 address:" << p1 << " p1 value:" << *p1 << endl;
	cout << "p2 address:" << p2 << " p2 value:" << *p2 << endl;
	cout << "p3[0] address:" << p3 << " p3[0] value:" << *p3 << endl;
	cout << "p3[1] address:" << &p3[1] << " p3[1] value:" << p3[1] << endl;
	delete p1;
	delete p2;
	delete []p3;
	return 0;
}