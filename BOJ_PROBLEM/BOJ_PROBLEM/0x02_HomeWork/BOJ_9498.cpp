#include <iostream>
using namespace std;

int main(void) {
	int Grade;
	cin >> Grade;

	if (Grade >= 90)
		cout << "A";
	else if (Grade >= 80)
		cout << "B";
	else if (Grade >= 70)
		cout << "C";
	else if (Grade >= 60)
		cout << "D";
	else
		cout << "F";
}