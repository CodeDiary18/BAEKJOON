#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int count = 0;
	int sum = input;
	int a=0, b = 0;
	while (1) {
		a = sum / 10;
		b = sum % 10;
		sum = b * 10 + (a + b) % 10;
		
		count++;
		if (sum == input)
			break;
	}
	cout << count;
}
