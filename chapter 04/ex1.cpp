#include <iostream>

using namespace std;

void main(void) {

    char fName[20], sName[20];
    int size = 20;
    char grade;
    int age;

    cin.getline(fName, size);
    cin.getline(sName, size);
    cin >> grade;
    cin >> age;

    cout << "First Name:" << fName << "\n";
    cout << "Second Name:" << sName << "\n";
    cout << "grade:" << (char)(grade + 1) << "\n";
    cout << "age:" << age << "\n";

}