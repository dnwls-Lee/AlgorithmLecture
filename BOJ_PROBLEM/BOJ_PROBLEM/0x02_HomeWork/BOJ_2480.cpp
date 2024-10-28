#include <iostream>
using namespace std;

int main() {
	int num[3];
	int Max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}

	if (num[0] == num[1] && num[1] == num[2])
		cout << 10000 + num[0] * 1000;
	else if (num[0] == num[1] || num[0] == num[2] || num[1] == num[2]) {
		if (num[0] == num[1] || num[0] == num[2])
			cout << 1000 + num[0] * 100;
		else
			cout << 1000 + num[1] * 100;
	}
	else {
		for (int i = 0; i < 3; i++) {
			if (num[i] > Max)
				Max = num[i];
		}
		cout << Max * 100;
	}
}