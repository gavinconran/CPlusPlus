#include <iostream>
#include <cmath>
using namespace std;

/* Solve ODE  dy/dx = f(x,y)  with forward Euler */

double f(double x, double y) {
    // take x and y and return f(x,y)
    double val;
    val = x + sin(y) / x;
    return val;
}

int main() {
    int i, n = 1000;
    double x, y, dx;
    dx = 1.0 / n;
    x = y = 1.0;
    for (i = 0; i < n; i++) {
        y += dx * f(x,y);
        x += dx;
    }
    cout << "y(" << x << ")" << " = " << y << endl;
    return 0;
}


