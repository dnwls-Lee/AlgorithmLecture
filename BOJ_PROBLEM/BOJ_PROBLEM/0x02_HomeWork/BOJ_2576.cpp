#include <iostream>
using namespace std;

int main() {
	int num, Min = 0, Hap = 0, IsOdd = 0;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			Hap += num;
			if (Min > num || Min == 0)
				Min = num;
			IsOdd++;
		}
	}
	if (IsOdd != 0)
		cout << Hap << "\n" << Min;
	else
		cout << "-1";
}