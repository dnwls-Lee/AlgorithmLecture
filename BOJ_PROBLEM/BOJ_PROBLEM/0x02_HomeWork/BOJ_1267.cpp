#include <iostream>
using namespace std;

int main() {
	int N, Call_Time, Hap = 0;
	int Y = 0, M = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> Call_Time; 
		Y = Y + ((Call_Time / 30) * 10) + 10; // 영식 요금제

		M = M + ((Call_Time / 60) * 15) + 15;
	}

	if (Y > M)
		cout << "M " << M;
	else if (Y < M)
		cout << "Y " << Y;
	else
		cout << "Y M " << Y;
}