#include <iostream>
using namespace std;

int main() {
	int Card[21];
	int Ai, Bi;
	for (int i = 1; i <= 20; i++) {
		Card[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		cin >> Ai >> Bi;
		int Mid = (Bi - Ai + 1) / 2;
		int temp;

		for (int j = 0; j < Mid; j++) {
			temp = Card[Ai + j];
			Card[Ai + j] = Card[Bi - j];
			Card[Bi - j] = temp;
		}
	}

	for (int i = 1; i <= 20; i++) {
		cout << Card[i] << " ";
	}
}