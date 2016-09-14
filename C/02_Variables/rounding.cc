#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double i, j;
    double x = 3.14, y = -3.14;

    i = floor(x); j = floor(y);        // largest int <= x
    cout << i << " " << j << endl;     // '3 -4'
    i = ceil(x); j = ceil(y);          // smallest int >= x
    cout << i << " " << j << endl;     // '4 -3'
    i = round(x); j = round(y);        // round to nearest int
    cout << i << " " << j << endl;     // '3 -3'
    i = trunc(x); j = trunc(y);        // nearest int i with |i| < |x|
    cout << i << " " << j << endl;     // '3 -3'
    i = (int) (x + 0.5); j = (int) (y + 0.5); // math.h not needed for this
    cout << i << " " << j << endl;           // '3 -2'
    return 0;
}


