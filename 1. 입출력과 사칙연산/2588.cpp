#include<iostream>
using namespace std;

int main() {
	int a=0, b = 0;
	cin >> a;
	cin >> b;
	int c1, c2, c3;
	c1 = b / 100;
	c2 = (b % 100)/10;
	c3 = (b % 10);
	int r1, r2, r3;
	r1 = c3 * a;
	r2 = c2 * a;
	r3 = c1 * a;
	int sum = r1 + r2 * 10 + r3 * 100;
	cout <<r1<<endl<<r2<<endl<<r3<<endl<<sum;

	return 0;
}
