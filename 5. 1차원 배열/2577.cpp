#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 0, };
	int a, b, c;
	cin >> a >> b >> c;
	int res = a * b * c;
	while (1) {
		arr[res % 10] += 1;
		res=res / 10;
		if (res == 0)
			break;
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
