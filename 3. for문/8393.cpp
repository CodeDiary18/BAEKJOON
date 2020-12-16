#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int result = 0;
	for (int i = 1;i <= a;i++) {
		result += i;
	}
	cout << result;
	return 0;
}
