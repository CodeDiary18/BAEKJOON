#include<iostream>
using namespace std;

int main() {
	//입출력 속도 늘이기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 1;i <= a;i++) {
		int c1, c2;
		cin >> c1 >> c2;
		cout << c1 + c2<<"\n";
	}
	
	return 0;
}
