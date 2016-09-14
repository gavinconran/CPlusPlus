#include <iostream>
using namespace std;

void add_to_byvalue(double x) { x++; }
void add_to_byreference(double &x) { x++; }

int main() {
    double z = 4.5;
    add_to_byvalue(z); cout << z << endl;
    add_to_byreference(z); cout << z << endl;
    return 0;
}
