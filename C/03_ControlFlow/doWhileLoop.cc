#include <iostream>
#include <iomanip>
using namespace std;

// Newton's method
double f(double x) {return x + (2-x*x) / 2.0 / x; }

int main() {
    double x_old, x_new, tol = 1e-8;
    cout << "Enter an initial guess : "; cin >> x_new;
    do {
        x_old = x_new;
        x_new = f(x_old);
        cout << setprecision(10) << x_new << endl;
    } while (x_new - x_old > tol || x_old - x_new > tol);

    cout << "The square root of 2 is approximately equal to " << x_new << endl;

    return 0;
}


