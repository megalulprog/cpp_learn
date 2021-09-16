#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main(void) {
    string name, desert;

    getline(cin, name);
    getline(cin, desert);

    cout << "Hello, " << name << " i have some " << desert << "s for u";

}