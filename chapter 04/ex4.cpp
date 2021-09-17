#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {

    string fname = "0", sname = "0";

    getline(cin, fname);
    getline(cin, sname);

    string sum = "0";

    sum = fname + ", " + sname;

    cout << sum;

}