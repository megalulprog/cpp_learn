#include <iostream>
using namespace std;

double c2f(double celsium) {
	return 1.8 * celsium + 32;
}

int main(void) {
	double c;
	cout << "Enter Celsium: ";
	cin >> c;

	cout << c << " of Celsium is " << c2f(c) << " of Fahrenheit";
}
