#include <iostream>
using namespace std;

int main() {
    double x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double *xp, *xp_end;

    xp = &x[4];
    *(xp+2) += 10;              // '6' -> '16'
    *(xp-2) = 0;                // '2' -> '0'

    xp_end = &x[10];

    for (xp = x; xp < xp_end; xp++)
        cout << *xp << " ";

    if (xp == xp_end) {
        cout << endl << "for loop was successful." << endl;
    }
    return 0;

}
