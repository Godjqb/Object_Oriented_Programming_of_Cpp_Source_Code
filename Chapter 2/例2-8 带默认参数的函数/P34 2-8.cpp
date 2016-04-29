#include "iostream"
using namespace std;
int add(int x = 7, int y = 2) {
	return x + y;
}
int main(int argc, char *argv[]) {
	int a = 4, b = 6, c;
	c = add(a, b);
	cout << "c=" << c << endl;
	c = add(a);
	cout << "c=" << c << endl;
	c = add();
	cout << "c=" << c << endl;
	return 0;
}