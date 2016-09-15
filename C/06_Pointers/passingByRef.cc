#include <iostream>
using namespace std;

void add_to_byvalue(double x) { x++; }           // does not change x outside of function
void add_to_bypointer(double *x) { (*x)++; }     // does change x outside

int main() {
    double z = 4.5;
    add_to_byvalue(z);                           // pass z
    cout << z << endl;                           // '4.5'
    add_to_bypointer(&z);                        // pass &z, i.e. the address
    cout << z << endl;                           // '5.5'

    return 0;

}
