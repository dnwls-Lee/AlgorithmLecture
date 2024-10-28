#include <iostream>
using namespace std;

int main() {
	int num[5], Hap = 0;
	int temp;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		Hap += num[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	cout << Hap / 5 << "\n";
	cout << num[2];
}