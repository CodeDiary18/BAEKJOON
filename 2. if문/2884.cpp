#include<iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int hour, minute;
	if (b >= 45) {
		hour = a; minute = b - 45;
	}
	else {
		minute = 60 - (45 - b);
		if (a == 0)
			hour = 23;
		else
			hour = a - 1;
	}
	
	cout << hour <<" "<< minute;
	return 0;
}
