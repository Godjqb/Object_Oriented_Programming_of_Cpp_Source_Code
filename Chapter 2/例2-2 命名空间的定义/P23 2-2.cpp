#include<iostream>
using namespace std;
namespace A {
	int x = 2;
}
namespace B {
	int x = 5;
}
int main() {
	cout << "A:x=" << A::x << endl << "B:x=" << B::x << endl;
	return 0;
}