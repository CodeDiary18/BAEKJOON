#include <iostream>
using namespace std;

int main()
{
	int num, max;
	for (int i = 0;i < 9;i++) {
		int input;
		cin >> input;
		if (i == 0) {
			max = input; num = i+1;
		}
		if (input > max) {
			max = input; num = i+1;
		}
	}
	cout << max << endl << num;
	return 0;
}
