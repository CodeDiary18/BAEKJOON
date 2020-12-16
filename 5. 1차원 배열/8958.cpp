#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num;
	cin >>num;;
	char A[100];
	for (int i = 0;i < num;i++) {
		cin >> A;
		int count = 0;
		int sum = 0;
		for (int j = 0;j < strlen(A);j++) {
			if (A[j] == 'O')
				count++;
			else
				count = 0;
			sum += count;
		}
		cout << sum << endl;
	}
	return 0;
}
