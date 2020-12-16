#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int min, max;
	for (int i = 0;i < n;i++) {
		int input;
		cin >> input;
		if (i == 0) {
			min = input; max = input;
		}
		if (input < min)
			min = input;
		if (input > max)
			max = input;
	}
	cout << min << " " << max;
}
