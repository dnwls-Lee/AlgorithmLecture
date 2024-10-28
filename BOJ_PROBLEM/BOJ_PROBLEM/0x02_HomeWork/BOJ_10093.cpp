#include <iostream>
using namespace std;

int main() {
	unsigned long long a, b;
	unsigned long long temp;
	cin >> a >> b;

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a == b || b - a == 1) {
		cout << "0";
	}
	else {
		cout << b - a - 1 << "\n";
		for (unsigned long long i = a + 1; i < b; i++) {
			cout << i << " ";
		}
	}
}