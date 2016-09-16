#include <iostream>
#include "sparseMatrix.h"  // use header file
using namespace std;

int main () {
    entry **sparse_matrix;
    double a, *x, *y;
    int dim, i, j;
    cout << "Dimension of matrix: "; cin >> dim;
    sparse_matrix = create_matrix(dim);
    x = new double[dim]; y = new double[dim];
    for (i = 0; i < dim; i++) add_entry(sparse_matrix, dim, i, i, 1.0);
    do {
        cout << "Add entries to matrix A. Give i,j and A_ij: ";
        cin >> i >> j >> a;
        if (i >= 0 && j >= 0) add_entry(sparse_matrix, dim, i, j, a);
        else cout << "Done." << endl;
    } while (i >= 0 && j >= 0);
    for (i = 0; i < dim; i++) { cout << i+1 << ". coordinate of x: "; cin >> x[i]; }
    matrix_vector(y, sparse_matrix, dim, x);
    for (i = 0; i < dim; i++) cout << i+1 << ". coordinate of y = " << y[i] << endl;
    return 0;
}

