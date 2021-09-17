#include <iostream>

using namespace std;

void time(int m, int h) {
	cout << "time: "<< h << ":" << m;
}

int main(void) {
	int hours = 0, mins = 0;
	cout << "Enter hours: ";
	cin >> hours;

	cout << "Enter mins: ";
	cin >> mins;

	time(mins, hours);
}
