#include <iostream>
using namespace std;

int main() {
	int height[9];
	int Hap = 0, temp, Done = 0;

	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		Hap += height[i];
	}

	for (int i = 0; i < 9; i++) {
		if (Done == 1)
			break;
		for (int j = i + 1; j < 9; j++) {
			if (Hap - height[i] - height[j] == 100) {
				height[i] = height[j] = 0;
				Done++;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (height[i] > height[j]) {
				temp = height[i];
				height[i] = height[j];
				height[j] = temp;
			}
		}
	}

	for (int i = 2; i < 9; i++) {
		cout << height[i] << "\n";
	}
}