#include <iostream>
using namespace std;

int main() {
	int num[4];
	int Judge[2] = {0};

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			cin >> num[i];
			Judge[num[i]]++;
		}
		if (Judge[0] == 4)
			cout << "D\n";
		else if (Judge[0] == 3)
			cout << "C\n";
		else if (Judge[0] == 2)
			cout << "B\n";
		else if (Judge[0] == 1)
			cout << "A\n";
		else
			cout << "E\n";
		Judge[0] = Judge[1] = 0;
	}
}