#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {

    string fname, sname, sum;

    getline(cin, fname);
    getline(cin, sname);

    sum = fname + ", " + sname;

    cout << sum;

}