#include <iostream>

using namespace std;

int main(void) {
	cout << "Enter d, f, m:\b\b\b";

	int d = 0, f = 0, m = 0;
	cin >> d;
	cin >> f;
	cin >> m;

	d += d + f * 12;
	float bmi = d * 0.025 / (m / 2, 2);

	cout << "BMI is " << bmi;
}