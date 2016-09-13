# include <iostream>
# include <cmath>      // include math.h
using namespace std;

int main() {
    int i, j;          // integers
    double x,y;        // double floats

    i = 5;             // anassignment
    j = 2*i + 3;       // use value of i for assignemt of j

    x = 3.14;
    y = sin(x) * exp(-5*x);

    cout << "The value of i is " << i << ", while y = " << y << endl;
    return 0;
}



