struct entry {
    int j;        // column number
    double val;   // value of entry
    entry *next;  // pointer to next entry
};

entry **create_matrix(int dim);
void add_entry(entry **m, int dim, int i, int j, double v);
void matrix_vector(double *y, entry **m, int dim, const double *x);

