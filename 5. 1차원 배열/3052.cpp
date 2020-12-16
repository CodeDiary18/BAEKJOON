#include <iostream>
using namespace std;

int main(){
	int arr[42] = { 0, };
	int count = 0;
	for (int i = 0;i < 10;i++) {
		int a;
		cin >> a;
		if (arr[a % 42]==0) {
			count++;
			arr[a % 42] = 1;
		}
	}
	cout << count;
	return 0;
}
