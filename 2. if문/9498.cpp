#include<iostream>
using namespace std;
// 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C,
//60 ~ 69점은 D, 나머지 점수는 F를
int main() {
	int A = 0;
	cin >> A ;
	char grade;
	if (A >= 90)
		grade = 'A';
	else if (A >= 80)
		grade = 'B';
	else if (A >= 70)
		grade = 'C';
	else if (A >= 60)
		grade = 'D';
	else
		grade = 'F';
	cout << grade << endl;
	return 0;
}
