#include<iostream>
using namespace std;
inline int max(int x, int y) {
	return x > y ? x : y;
}
int main() {
	int z1, z2, z3;
	z1 = max(9, 34);
	z2 = max(4, 55);
	z3 = max(z1, z2);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	cout << "z3=" << z3 << endl;
	return 0;
}
