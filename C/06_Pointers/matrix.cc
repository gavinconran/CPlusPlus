#include <iostream>
using namespace std;

double **new_matrix(int n, int m) {
    double **mat; 
    mat = new double * [n];          // allocate space for n pointers to double
    if (!mat) return NULL;           // if unsuccessful, return NULL
    for (int i = 0; i < n; i++) {
        mat[i] = new double[m];      // now for earch row, allocate m entries
        if (!mat[i]) {
            for (int j = i-1; j >= 0; j--)  // if unsuccessful, free allocate space
                delete [] mat[j];
            delete [] mat;
            return NULL;              // and return NULL
        }
    }
    return mat;                    // if successful, return pointer to space   
}


int main() {
    double **matrix;
    int n, m;
    cout << "Enter dimensions for matrix: ";
    cin >> n >> m;
    matrix = new_matrix(n,m);     // allocate matrix
    if (!matrix) return -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    //etc
    return 0;
}

        
