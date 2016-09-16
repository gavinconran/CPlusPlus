#include "sparseMatrix.h"
#include <cstddef>

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





    
    
    


