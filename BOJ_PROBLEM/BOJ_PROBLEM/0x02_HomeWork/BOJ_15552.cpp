#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}