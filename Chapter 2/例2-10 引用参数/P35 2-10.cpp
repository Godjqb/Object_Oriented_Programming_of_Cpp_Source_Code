#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main() {
	int a = 2;
	int b = 9;
	cout << "before:" << " a=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "after:" << " a=" << a << " b=" << b << endl;
	return 0;
}
void swap(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
}