#include<iostream>
using namespace std;
namespace A {
	int x;
	void f() { cout << "namespace A::f()" << endl; }
	void g() { cout << "namespace A::g()" << endl; }
}
namespace B {
	int x;
	void f() { cout << "namespace B::f()" << endl; }
	void h() { cout << "namespace B::h()" << endl; }
}
int main() {
	using namespace A;
	using namespace B;
	A::x = 4;
	A::f();
	B::f();
	g();
	h();
	return 0;
}