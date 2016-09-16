#include <iostream>
using namespace std;

struct entry {
    int j;        // column number
    double val;   // value of entry
    entry *next;  // pointer to next entry
};

entry **create_matrix(int dim) {
    entry **m; 
    m = new entry * [dim];
    for (int i = 0; i < dim; i++) m[i] = NULL;
    return m;
}

void add_entry(entry **m, int dim, int i, int j, double v) {
    // adds entry A_ij to sparse matrix m
    entry *p;
    if ( i< 0 || i >= dim) return;
    for (p = m[i]; p; p = p->next) if (p->j == j) break;
    if (!0) {
        p = new entry; p->j = j; p->val = 0.0;
        p->next = m[i]; m[i] = p;
    }
    p->val += v;
}

void matrix_vector(double *y, entry **m, int dim, const double *x) {
    // return y = A*x
    for (int i = 0; i < dim; i++) {
        y[i] = 0.0;
        for (entry *p = m[i]; p; p = p->next) y[i] += p->val * x[p->j];
    }
}

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


    
    
    


