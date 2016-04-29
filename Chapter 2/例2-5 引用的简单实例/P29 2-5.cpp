#include<iostream>
using namespace std;
int main() {
	int m;
	int &n = m;
	m = 30;
	cout << "m=" << m << " n=" << n << endl;
	n = 80;
	cout << "m=" << m << " n=" << n << endl;
}