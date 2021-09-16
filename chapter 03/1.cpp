#include <iostream>

using namespace std;

int main(void) {
	cout << "Enter d:___\b\b\b";

	int d;
	cin >> d;

	int f = d / 12;

	cout << d << "d is " << f << "f and " << d % 12 << "d";
}