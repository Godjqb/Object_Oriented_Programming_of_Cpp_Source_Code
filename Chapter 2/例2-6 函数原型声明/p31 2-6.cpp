#include<iostream>
using namespace std;
int add(int x, int y);
int main() {
	int a = 10, b = 20, z;
	z = add(a, b);
	cout << "z=" << z << endl;
	return 0;
}
int add(int x, int y) {
	return x + y;
}