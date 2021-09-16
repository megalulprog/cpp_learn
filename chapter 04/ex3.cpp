#define _CRT_SECURE_NO_WARNINGS
#define LEN 20
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {

    char fname[LEN], sname[LEN];
    char sum[2*LEN];

    cin.getline(fname, LEN);
    cin.getline(sname, LEN);

    strcpy(sum, fname);
    strcat(sum, ", ");
    strcat(sum, sname);

    cout << sum;

}