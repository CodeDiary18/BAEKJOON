#include <iostream>
#include <cstring>
using namespace std;

int main(){
	double num;
	cin >>num;;
	for (int i = 0;i < num;i++) {
		double A[1000];
		int s_num;
		cin >> s_num;
		memset(A, 0, sizeof(A));
		double sum = 0;
		for (int j = 0;j < s_num;j++) {
			cin >> A[j];
			sum += A[j];
		}
		int ave = sum / s_num;
		int count = 0;
		for (int j = 0;j < s_num;j++) {
			if (ave < A[j]) {
				count++;
			}
		}
		double s_ave = ((double)count / s_num );
		s_ave *= 100;
		cout << fixed;
		cout.precision(3);
		cout << s_ave << "%" << endl;
	}
	return 0;
}
