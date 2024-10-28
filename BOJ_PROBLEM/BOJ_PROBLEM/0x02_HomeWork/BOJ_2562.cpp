#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num[9];
	int Max = 0, Maxnum;
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (Max < num[i]) {
			Max = num[i];
			Maxnum = i + 1;
		}
	}
	cout << Max << "\n" << Maxnum;
}