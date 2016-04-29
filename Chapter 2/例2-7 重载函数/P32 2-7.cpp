#include<iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
float add(float a, float b);
float add(float a, float b, float c);
int main() {
	int a = 2, b = 3, c = 4, i, j;
	float d = 1.1, e = 2.2, f = 3.3, m, n;
	i = add(a, b);
	j = add(a, b, c);
	m = add(d, e);
	n = add(d, e, f);
	cout << "i=" << i << endl << "j=" << j << endl << "m=" << m << endl << "n=" << n << endl;
	return 0;
}
int add(int a, int b) {
	return a + b;
}
int add(int a, int b, int c) {
	return a + b + c;
}
float add(float a, float b) {
	return a + b;
}
float add(float a, float b, float c) {
	return a + b + c;
}