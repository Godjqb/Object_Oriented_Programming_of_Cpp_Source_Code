#include<iostream>
using namespace std;
#define GH
#ifndef GH
void f() {
	cout << 0 << endl;
}
#else
void f() {
	cout << 1 << endl;
}
#endif
int main() {
	f();
	return 0;
}
