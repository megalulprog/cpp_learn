#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {

    char fname[20], sname[20];
    char sum[40];

    cin.getline(fname, 20);
    cin.getline(sname, 20);

    strcpy(sum, fname);
    strcat(sum, ", ");
    strcat(sum, sname);

    cout << sum;

}