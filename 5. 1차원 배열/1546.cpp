#include <iostream>
using namespace std;

int main(){
	int num;
	cin >>num;
	float score[1000] = {0};
	int max=0;
	for (int i = 0;i < num;i++) {
		cin >> score[i];
		if (max < score[i])
			max = score[i];
	}
	float sum = 0;
	for (int i = 0;i < num;i++) {
		score[i]= score[i] / max * 100;
	}
	for (int i = 0;i < num;i++) {
		sum += score[i];
	}
	float ave= sum / num;
	cout << fixed;
	cout.precision(2);
	cout << ave;

	return 0;
}
