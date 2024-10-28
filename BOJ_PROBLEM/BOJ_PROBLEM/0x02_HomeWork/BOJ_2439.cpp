#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = N - i - 1; k > 0; k--) {
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}