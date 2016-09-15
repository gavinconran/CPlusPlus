#include <iostream>
#include <cmath>
using namespace std;

double my_f(double x) { return pow(sin(x), 1.0/3.0); }

double trapez(double a, double b, int n, double (*func)(double)) {
    // integrate func over [a,b] using n intervals
    double x = a;
    const double dx = (b - a) / (double) n;
    double val = 0.5 * func(x);
    x += dx;
    for (int i = 1; i < n; i++, x+= dx)
        val += func(x);
    val += 0.5 * func(x);
    return val*dx;
}

int main() {
    int n;
    cout << "Integrating sin^1/3 (x) over [0,PI/2]." << endl;
    cout << "How many steps to take for the integral: ";
    cin >> n;
    cout << "The integral using " << n << " steps is "
        << trapez(0.0, 0.5*M_PI, n, my_f) << ".\n";  // pass my_f
    return 0;
}

 
