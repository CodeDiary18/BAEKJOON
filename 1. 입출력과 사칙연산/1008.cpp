#include <iostream>
using namespace std;

int main(){
	int a, b;
	double result;
	cin >> a >> b;
	if (a < 0 || b > 10)
		return 0;
	result = (double) a / b;
	cout.precision(10);  // 정밀도 설정 (총 자릿수 10자리 출력)
	cout << result << endl;
	return 0;
}
