#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {

    struct CandyBar {

        string name;
        double weight;
        int kal;

    } snack = { "Mocha Munch", 2.3, 300 };

    cout << snack.name << " " << snack.weight << " " << snack.kal;
}