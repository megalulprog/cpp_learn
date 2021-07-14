#include <iostream>
using namespace std;
double CtF(double celsium) {
	return 1.8 * celsium + 32;
}
int main(void) {
	double C;
	cout << "Enter Celsium: ";
	cin >> C;
	cout << C << " of Celsium is " << CtF(C) << " of Fahrenheit";
}
