#include <iostream>
using namespace std;
double YtA(double year) {
	return 63240 * year;
}
int main(void) {
	double Y;
	cout << "Enter light years: ";
	cin >> Y;
	cout << Y << " light years = " << YtA(Y) << " astronomical units";
}
