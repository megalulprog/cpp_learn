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
    };

    CandyBar snack[3];

    snack[0].name = "a";
    snack[0].kal = 300;
    snack[0].weight = 2.5;

    snack[1].name = "b";
    snack[1].kal = 300;
    snack[1].weight = 2.5;

    snack[2].name = "c";
    snack[2].kal = 300;
    snack[2].weight = 2.5;

    for (int n = 0; n < 3; n++) {
        cout << snack[n].name << " " << snack[n].weight << " " << snack[n].kal << "\n";
    }

}