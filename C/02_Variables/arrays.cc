#include <iostream>
using namespace std;

void print(double a[], int length) {
    int i;
    for (i = 0; i < length; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    double a[5] = {1, 0.1, 3.5, 0.7, -0.5};
    double x[10];             // not initialised
    double y[10] = {1,2,3};    // '1 2 3 0 0 0 0 0 0 0'
    double z[10] = {};        // '0 0 0 0 0 0 0 0 0 0'       
    cout << "a = "; print(a, 5);
    cout << "x = "; print(x, 10);
    cout << "y = "; print(y, 10);
    cout << "z = "; print(z, 10);
}


    
