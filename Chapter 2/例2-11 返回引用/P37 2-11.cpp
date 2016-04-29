#include<iostream>
using namespace std;
int z;
int& add(int x, int y);
int main() {
	int a = add(5, 7);
	cout << a << endl;
	add(4, 9)++;
	cout << z << endl;
	add(2, 8) = 8;
	cout << z << endl;
	return 0;
}
int& add(int x, int y) {
	return z = x + y;
}