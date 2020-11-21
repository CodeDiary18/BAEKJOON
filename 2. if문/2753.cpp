#include<iostream>
using namespace std;

int main() {
	int year = 0;
	cin >> year ;
	int result = 0;
	if (year % 400 == 0) {
		result = 1;
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		result = 1;
	}
	cout << result;
	return 0;
}
