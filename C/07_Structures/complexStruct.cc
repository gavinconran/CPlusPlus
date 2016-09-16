#include <iostream>
using namespace std;

struct complex {
    double re, im;
};

complex c_mult(const complex &z1, const complex &z2) {
    complex val;
    val.re = z1.re * z2.re - z1.im * z2.im;
    val.im = z1.im * z2.re + z1.re * z2.im;
    return val;
}

int main() {
    complex z1, z2, z3;
    z1.re = 1.0; z1.im = 2.0;
    z2.re = -1.0; z2.im = 0.2;
    z3 = c_mult(z1, z2);
    cout << "Result: " << z3.re << " + " << z3.im << "i. " << endl;
    return 0;
}



