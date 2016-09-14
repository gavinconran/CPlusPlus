#include <iostream>
using namespace std;

void print(double a[], int length) {       // variable length arrays
    for (int i = 0; i < length; i++) cout << a[i] << "   ";
    cout << endl;
}

void add_to(double a[5], double b[5]) {
    for (int i = 0; i < 5; i++)  a[i] += b[i];
}


void print_matrix(double A[3][3]) { // must speicy dimensions of multi-D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << A[i][j] << "   ";
        cout << endl;
    }
}

int main() {
    double x[5] = {1, 0.1, 3.5, 0.7, -0.5};
    double y[5] = {};
    print(y, 5);
    add_to(y, x);
    print(y, 5);

    double M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    print_matrix(M);
    return 0;
}
